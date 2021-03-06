/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   Product name: redemption, a FLOSS RDP proxy
   Copyright (C) Wallix 2017
   Author(s): Christophe Grosjean, Jonathan Poelen

*/

#include "main/version.hpp"
#include "lib/iametrics.hpp"
#include "mod/metrics.hpp"


enum class ErrValue : int
{
    NoError,
    OutOfBounds,
};

extern "C"
{
    const char* iametrics_version() noexcept
    {
        return VERSION;
    }

    char* new_hmac_sha256_hex(
        const char * src, const unsigned src_len, const uint8_t * key_crypt) noexcept
    {
        return reinterpret_cast<char*>( /*NOLINT*/
            new(std::nothrow) MetricsHmacSha256Encrypt({src, src_len}, {key_crypt, 32u}));
    }

    void delete_hmac_sha256_hex(char* sign) noexcept /*NOLINT*/
    {
        delete reinterpret_cast<MetricsHmacSha256Encrypt*>(sign); /*NOLINT*/
    }


    Metrics * metrics_new( const char * version             // fields version
                         , const char * protocol_name
                         , const unsigned nbitems
                         , const char * path
                         , const char * session_id
                         , const char * primary_user_sig    // clear primary user account
                         , const char * account_sig         // secondary account
                         , const char * target_service_sig  // clear target service name + clear device name
                         , const char * session_info_sig    // info relative to client session
                         , const unsigned long now_seconds  // time at beginning of metrics
                         , const int    file_interval_hours // daily rotation of filename (hours)
                         , const int    log_delay_seconds   // delay between 2 logs
                         ) noexcept
    {
        auto av = [](char const* s){ return array_view_const_char{s, strlen(s)}; };
        using std::chrono::seconds;
        using std::chrono::hours;
        return new(std::nothrow) Metrics(
            version, protocol_name, true, nbitems, path, session_id,
            av(primary_user_sig), av(account_sig), av(target_service_sig),
            av(session_info_sig), seconds(now_seconds), hours(file_interval_hours),
            seconds(log_delay_seconds));
    }

    void metrics_delete(Metrics * metrics) noexcept
    {
        delete metrics; /*NOLINT*/
    }

    void metrics_log(Metrics * metrics, uint64_t now_ms) noexcept
    {
        timeval tv_now;
        tv_now.tv_sec = now_ms / 1000;
        tv_now.tv_usec = (now_ms % 1000) * 1000;
        metrics->log(tv_now);
    }

    int metrics_add_to_current_data(Metrics * metrics, unsigned index, uint64_t value) noexcept
    {
        if (index < metrics->count_data()) {
            metrics->add_to_current_data(index, value);
            return int(ErrValue::NoError);
        }
        return int(ErrValue::OutOfBounds);
    }
}
