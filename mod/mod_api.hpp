/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   Product name: redemption, a FLOSS RDP proxy
   Copyright (C) Wallix 2010-2013
   Author(s): Christophe Grosjean, Javier Caverni, Meng Tan, Raphael Zhou
*/

#ifndef _REDEMPTION_MOD_MOD_API_HPP_
#define _REDEMPTION_MOD_MOD_API_HPP_

#include "RDP/RDPGraphicDevice.hpp"
#include "front_api.hpp"
#include "wait_obj.hpp"
#include "callback.hpp"
#include "config.hpp"
#include "font.hpp"
#include "draw_api.hpp"

enum {
    BUTTON_STATE_UP   = 0,
    BUTTON_STATE_DOWN = 1,
};

class Timeout {
    time_t timeout;

public:
    typedef enum {
        TIMEOUT_REACHED,
        TIMEOUT_NOT_REACHED,
        TIMEOUT_INACTIVE
    } timeout_result_t;

    Timeout(time_t now, time_t length = 0)
        : timeout(length ? (now + length) : 0) {}

    ~Timeout() {}

    timeout_result_t check(time_t now) {
        if (this->timeout) {
            if (now > this->timeout) {
                return TIMEOUT_REACHED;
            }
            else {
                return TIMEOUT_NOT_REACHED;
            }
        }
        return TIMEOUT_INACTIVE;
    }

    bool is_cancelled() {
        return (this->timeout == 0);
    }

    long timeleft_sec(time_t now) {
        return (this->timeout - now);
    }

    void cancel_timeout() {
        this->timeout = 0;
    }

    void restart_timeout(time_t now, time_t length) {
        this->timeout = now + length;
    }
};

class mod_api : public Callback, public DrawApi {
protected:
    wait_obj event;
    RDPPen   pen;
    RDPGraphicDevice * gd;

public:
    uint16_t front_width;
    uint16_t front_height;

    mod_api(const uint16_t front_width, const uint16_t front_height)
    : event(NULL)
    , gd(this)
    , front_width(front_width)
    , front_height(front_height)
    {
        this->event.set(0);
    }

    virtual ~mod_api() {}

    virtual wait_obj& get_event() { return this->event; }

protected:
    static void set_gd(mod_api & mod, RDPGraphicDevice * gd)
    { mod.gd = gd; }

public:
    virtual void send_to_front_channel(const char * const mod_channel_name,
        uint8_t* data, size_t length, size_t chunk_size, int flags) = 0;

    // draw_event is run when mod socket received some data (drawing order)
    // or auto-generated by modules, say to comply to some refresh.
    // draw event decodes incoming traffic from backend and eventually calls front to draw things
    // may raise an exception (say if connection to server is closed), but returns nothings
    virtual void draw_event(time_t now) = 0;

    // used when context changed to avoid creating a new module
    // it usually perform some task identical to what constructor does
    // henceforth it should often be called by constructors
    virtual void refresh_context(Inifile & ini) {}

    virtual bool is_up_and_running() { return false; }

    virtual void send_fastpath_data(Stream & data) {}
    virtual void send_data_indication_ex(uint16_t channelId, HStream & stream) {}
};

#endif
