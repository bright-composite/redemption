/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *   Product name: redemption, a FLOSS RDP proxy
 *   Copyright (C) Wallix 2010-2013
 *   Author(s): Christophe Grosjean, Raphael Zhou, Jonathan Poelen, Meng Tan
 */

#ifndef REDEMPTION_PUBLIC_TRANSPORT_CRYPTO_FILENAME_TRANSPORT_HPP
#define REDEMPTION_PUBLIC_TRANSPORT_CRYPTO_FILENAME_TRANSPORT_HPP

#include "buffer/crypto_filename_buf.hpp"
#include "buffer_transport.hpp"

struct CryptoInFilenameTransport
: InBufferTransport<transbuf::icrypto_filename_base>
{
    CryptoInFilenameTransport(CryptoContext * crypto_ctx, const char * filename)
    {
        if (this->open(crypto_ctx, filename) < 0) {
            LOG(LOG_ERR, "failed opening=%s\n", filename);
            throw Error(ERR_TRANSPORT_OPEN_FAILED);
        }
    }
};

class CryptoOutFilenameTransport
: public OutBufferTransport<transbuf::ocrypto_filename_base>
{
    CryptoContext & crypto_ctx;

public:
    CryptoOutFilenameTransport(CryptoContext * crypto_ctx, const char * filename, auth_api * authentifier = NULL)
    : crypto_ctx(*crypto_ctx)
    {
        if (this->open(crypto_ctx, filename) < 0) {
            LOG(LOG_ERR, "failed opening=%s\n", filename);
            throw Error(ERR_TRANSPORT_OPEN_FAILED);
        }

        if (authentifier) {
            this->set_authentifier(authentifier);
        }
    }

    virtual ~CryptoOutFilenameTransport()
    {
        unsigned char hash[MD_HASH_LENGTH << 1];
        this->close(hash, this->crypto_ctx.hmac_key);
    }
};

#endif
