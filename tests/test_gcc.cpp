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
   Copyright (C) Wallix 2012
   Author(s): Christophe Grosjean

   T.124 Generic Conference Control (GCC) Unit Test

*/

#define BOOST_AUTO_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TestGCC
#include <boost/test/auto_unit_test.hpp>

#define LOGPRINT
#include "log.hpp"

#include "transport.hpp"
#include "RDP/gcc.hpp"

BOOST_AUTO_TEST_CASE(Test_gcc_write_conference_create_request)
{
    const char gcc_user_data[] =
    "\x01\xc0\xd8\x00\x04\x00\x08\x00\x00\x05\x00\x04\x01\xCA\x03\xAA"
    "\x09\x04\x00\x00\xCE\x0E\x00\x00\x45\x00\x4c\x00\x54\x00\x4f\x00"
    "\x4e\x00\x53\x00\x2d\x00\x44\x00\x45\x00\x56\x00\x32\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00"
    "\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x01\xCA\x01\x00\x00\x00\x00\x00\x18\x00\x07\x00"
    "\x01\x00\x36\x00\x39\x00\x37\x00\x31\x00\x32\x00\x2d\x00\x37\x00"
    "\x38\x00\x33\x00\x2d\x00\x30\x00\x33\x00\x35\x00\x37\x00\x39\x00"
    "\x37\x00\x34\x00\x2d\x00\x34\x00\x32\x00\x37\x00\x31\x00\x34\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x04\xC0\x0C\x00\x0D\x00\x00\x00"
    "\x00\x00\x00\x00\x02\xC0\x0C\x00\x1B\x00\x00\x00\x00\x00\x00\x00"
    "\x03\xC0\x2C\x00\x03\x00\x00\x00\x72\x64\x70\x64\x72\x00\x00\x00"
    "\x00\x00\x80\x80\x63\x6c\x69\x70\x72\x64\x72\x00\x00\x00\xA0\xC0"
    "\x72\x64\x70\x73\x6e\x64\x00\x00\x00\x00\x00\xc0"
    ;

    const char gcc_conference_create_request_expected[] =
    // conference_create_request_header
    "\x00\x05\x00\x14\x7C\x00\x01\x81\x2A\x00\x08\x00\x10\x00\x01\xC0"
    "\x00\x44\x75\x63\x61"
    "\x81\x1c" // User data length
    // header
    "\x01\xc0\xd8\x00\x04\x00\x08\x00\x00\x05\x00\x04\x01\xCA\x03\xAA"
    "\x09\x04\x00\x00\xCE\x0E\x00\x00\x45\x00\x4c\x00\x54\x00\x4f\x00"
    "\x4e\x00\x53\x00\x2d\x00\x44\x00\x45\x00\x56\x00\x32\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00"
    "\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x01\xCA\x01\x00\x00\x00\x00\x00\x18\x00\x07\x00"
    "\x01\x00\x36\x00\x39\x00\x37\x00\x31\x00\x32\x00\x2d\x00\x37\x00"
    "\x38\x00\x33\x00\x2d\x00\x30\x00\x33\x00\x35\x00\x37\x00\x39\x00"
    "\x37\x00\x34\x00\x2d\x00\x34\x00\x32\x00\x37\x00\x31\x00\x34\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x04\xC0\x0C\x00\x0D\x00\x00\x00"
    "\x00\x00\x00\x00\x02\xC0\x0C\x00\x1B\x00\x00\x00\x00\x00\x00\x00"
    "\x03\xC0\x2C\x00\x03\x00\x00\x00\x72\x64\x70\x64\x72\x00\x00\x00"
    "\x00\x00\x80\x80\x63\x6c\x69\x70\x72\x64\x72\x00\x00\x00\xA0\xC0"
    "\x72\x64\x70\x73\x6e\x64\x00\x00\x00\x00\x00\xc0";

    TestTransport t("test_gcc", 
        "", 0, 
        gcc_conference_create_request_expected, 
        sizeof(gcc_conference_create_request_expected), 
        256);

    BStream stream(65536);
    stream.out_copy_bytes(gcc_user_data, sizeof(gcc_user_data)-1); // -1 to ignore final 0
    stream.mark_end();

    BStream gcc_header(65536);
    GCC::Create_Request_Send(gcc_header, stream.size());

    t.send(gcc_header.data, gcc_header.size());
    t.send(stream.data, stream.size());
    BOOST_CHECK(t.status);
}

BOOST_AUTO_TEST_CASE(Test_gcc_sc_core)
{
    const char expected[] = 
    "\x01\x0c\x0c\x00" // TS_UD_HEADER::type = SC_CORE (0x0c01), length = 12 bytes
    "\x04\x00\x08\x00" // TS_UD_SC_CORE::version = 0x0080004
    "\x00\x00\x00\x00" // TS_UD_SC_CORE::clientRequestedProtocols = PROTOCOL_RDP
    ;

    BStream stream(12);
    GCC::UserData::SCCore sc_core;
    sc_core.length = 12;
    sc_core.version = 0x0080004;
    sc_core.clientRequestedProtocols = 0;
    sc_core.emit(stream);
    BOOST_CHECK_EQUAL(12, stream.size());
    BOOST_CHECK(0 == memcmp(expected, stream.data, 12));

    stream.p = stream.data;
    GCC::UserData::SCCore sc_core2;

    sc_core2.recv(stream);
    BOOST_CHECK_EQUAL(SC_CORE, sc_core2.userDataType);
    BOOST_CHECK_EQUAL(12, sc_core2.length);
    BOOST_CHECK_EQUAL(0x0080004, sc_core2.version);
    BOOST_CHECK_EQUAL(0, sc_core2.clientRequestedProtocols);
}

BOOST_AUTO_TEST_CASE(Test_gcc_user_data_cs_net)
{
    const char indata[] = 
        "\x03\xc0"         // CS_NET
        "\x20\x00"         // 32 bytes user Data
        "\x02\x00\x00\x00" // ChannelCount
        "\x63\x6c\x69\x70\x72\x64\x72\x00" // "cliprdr"
        "\xc0\xa0\x00\x00"
        "\x72\x64\x70\x64\x72\x00\x00\x00" // "rdpdr"
        "\x80\x80\x00\x00" 
    ;

    GeneratorTransport gt(indata, sizeof(indata) - 1);
    BStream stream(256);
    gt.recv(&stream.end, sizeof(indata) - 1);
    GCC::UserData::CSNet cs_net;
    cs_net.recv(stream);
    BOOST_CHECK_EQUAL(CS_NET, cs_net.userDataType);
    BOOST_CHECK_EQUAL(32, cs_net.length);
    BOOST_CHECK_EQUAL(2, cs_net.channelCount);
    BOOST_CHECK_EQUAL('c', cs_net.channelDefArray[0].name[0]);
    BOOST_CHECK_EQUAL(0, memcmp("cliprdr\0", cs_net.channelDefArray[0].name, 8));
    BOOST_CHECK_EQUAL( GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED 
                     | GCC::UserData::CSNet::CHANNEL_OPTION_ENCRYPT_RDP 
                     | GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS_RDP
                     | GCC::UserData::CSNet::CHANNEL_OPTION_SHOW_PROTOCOL 
                     , cs_net.channelDefArray[0].options);
    BOOST_CHECK_EQUAL(0, memcmp("rdpdr\0\0\0", cs_net.channelDefArray[1].name, 8));
    BOOST_CHECK_EQUAL( GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED 
                     | GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS_RDP
                     , cs_net.channelDefArray[1].options);
}

BOOST_AUTO_TEST_CASE(Test_gcc_write_client_cluster_data)
{
}

BOOST_AUTO_TEST_CASE(Test_gcc_write_client_network_data)
{
}

