const char outdata[] =
{
// Listen: binding socket 4 on 0.0.0.0:3389 |
// Listen: listening on socket 4 |
// Incoming socket to 5 (ip=10.10.47.175) |
// Reading font file ./tests/fixtures/sans-10.fv1 |
// font name <Bitstream Vera Sans> size <10> |
// Font file ./tests/fixtures/sans-10.fv1 defines glyphs up to 256 |
// Front::incoming() |
// Front::incoming:CONNECTION_INITIATION |
// Front::incoming::receiving x224 request PDU |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x13"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 15 bytes |
// Recv done on RDP Client (5) 15 bytes |
// /* 0000 */ "\x0e\xe0\x00\x00\x00\x00\x00\x01\x00\x08\x00\x01\x00\x00\x00"     //............... |
// Dump done on RDP Client (5) 15 bytes |
// CR Recv: PROTOCOL TLS 1.0 |
// Front::incoming::sending x224 connection confirm PDU |
// -----------------> Front::TLS Support Enabled |
// CC Send: PROTOCOL TLS 1.0 |
// Sending on RDP Client (5) 19 bytes |
/* 0000 */ "\x03\x00\x00\x13\x0e\xd0\x00\x00\x00\x00\x00\x02\x01\x08\x00\x01" //................ |
/* 0010 */ "\x00\x00\x00"                                                     //... |
// Sent dumped on RDP Client (5) 19 bytes |
// RIO *::enable_server_tls() start |
// RIO *::SSL_CTX_set_options() |
// RIO *::enable_server_tls() done |
// Front::incoming::Basic Settings Exchange |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x01\xac"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 424 bytes |
// Recv done on RDP Client (5) 424 bytes |
// /* 0000 */ "\x02\xf0\x80\x7f\x65\x82\x01\xa0\x04\x01\x01\x04\x01\x01\x01\x01" //....e........... |
// /* 0010 */ "\xff\x30\x19\x02\x01\x22\x02\x01\x02\x02\x01\x00\x02\x01\x01\x02" //.0...".......... |
// /* 0020 */ "\x01\x00\x02\x01\x01\x02\x02\xff\xff\x02\x01\x02\x30\x19\x02\x01" //............0... |
// /* 0030 */ "\x01\x02\x01\x01\x02\x01\x01\x02\x01\x01\x02\x01\x00\x02\x01\x01" //................ |
// /* 0040 */ "\x02\x02\x04\x20\x02\x01\x02\x30\x1c\x02\x02\xff\xff\x02\x02\xfc" //... ...0........ |
// /* 0050 */ "\x17\x02\x02\xff\xff\x02\x01\x01\x02\x01\x00\x02\x01\x01\x02\x02" //................ |
// /* 0060 */ "\xff\xff\x02\x01\x02\x04\x82\x01\x3f\x00\x05\x00\x14\x7c\x00\x01" //........?....|.. |
// /* 0070 */ "\x81\x36\x00\x08\x00\x10\x00\x01\xc0\x00\x44\x75\x63\x61\x81\x28" //.6........Duca.( |
// /* 0080 */ "\x01\xc0\xd8\x00\x04\x00\x08\x00\x00\x04\x00\x03\x01\xca\x03\xaa" //................ |
// /* 0090 */ "\x0c\x04\x00\x00\xb0\x1d\x00\x00\x52\x00\x44\x00\x50\x00\x2d\x00" //........R.D.P.-. |
// /* 00a0 */ "\x54\x00\x45\x00\x53\x00\x54\x00\x00\x00\x00\x00\x00\x00\x00\x00" //T.E.S.T......... |
// /* 00b0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 00c0 */ "\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 00d0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 00e0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 00f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0100 */ "\x00\x00\x00\x00\x01\xca\x01\x00\x00\x00\x00\x00\x10\x00\x0f\x00" //................ |
// /* 0110 */ "\x2d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //-............... |
// /* 0120 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0130 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0140 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0150 */ "\x00\x00\x02\x00\x01\x00\x00\x00\x04\xc0\x0c\x00\x11\x00\x00\x00" //................ |
// /* 0160 */ "\x00\x00\x00\x00\x02\xc0\x0c\x00\x1b\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0170 */ "\x03\xc0\x38\x00\x04\x00\x00\x00\x72\x64\x70\x64\x72\x00\x00\x00" //..8.....rdpdr... |
// /* 0180 */ "\x00\x00\x80\x80\x72\x64\x70\x73\x6e\x64\x00\x00\x00\x00\x00\xc0" //....rdpsnd...... |
// /* 0190 */ "\x64\x72\x64\x79\x6e\x76\x63\x00\x00\x00\x80\xc0\x63\x6c\x69\x70" //drdynvc.....clip |
// /* 01a0 */ "\x72\x64\x72\x00\x00\x00\xa0\xc0"                                 //rdr..... |
// Dump done on RDP Client (5) 424 bytes |
// GCC::UserData tag=c001 length=216 |
// Received from Client GCC User Data CS_CORE (216 bytes) |
// cs_core::version [80004] RDP 5.0, 5.1, 5.2, and 6.0 clients) |
// cs_core::desktopWidth  = 1024 |
// cs_core::desktopHeight = 768 |
// cs_core::colorDepth    = [ca01] [RNS_UD_COLOR_8BPP] superseded by postBeta2ColorDepth |
// cs_core::SASSequence   = [aa03] [Unknown] |
// cs_core::keyboardLayout= 040c |
// cs_core::clientBuild   = 7600 |
// cs_core::clientName    = RDP-TEST |
// cs_core::keyboardType  = [0004] IBM enhanced (101-key or 102-key) keyboard |
// cs_core::keyboardSubType      = [0000] OEM code |
// cs_core::keyboardFunctionKey  = 12 function keys |
// cs_core::imeFileName    =  |
// cs_core::postBeta2ColorDepth  = [ca01] [8 bpp] |
// cs_core::clientProductId = 1 |
// cs_core::serialNumber = 0 |
// cs_core::highColorDepth  = [0010] [16-bit 565 RGB mask] |
// cs_core::supportedColorDepths  = [000f] [24/16/15/32] |
// cs_core::earlyCapabilityFlags  = [002d] |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_SUPPORT_ERRINFO_PDU |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_SUPPORT_STATUSINFO_PDU |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_STRONG_ASYMMETRIC_KEYS |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_VALID_CONNECTION_TYPE |
// cs_core::clientDigProductId=[00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
// cs_core::connectionType  = 2 |
// cs_core::pad1octet  = 0 |
// cs_core::serverSelectedProtocol = 1 |
// GCC::UserData tag=c004 length=12 |
// Receiving from Client GCC User Data CS_CLUSTER (12 bytes) |
// cs_cluster::flags [0011] |
// cs_cluster::redirectedSessionID = 0 |
// GCC::UserData tag=c002 length=12 |
// Received from Client GCC User Data CS_SECURITY (12 bytes) |
// CSSecGccUserData::encryptionMethods 27 |
// CSSecGccUserData::extEncryptionMethods 0 |
// GCC::UserData tag=c003 length=56 |
// Received from Client GCC User Data CS_NET (56 bytes) |
// cs_net::channelCount   = 4 |
// cs_net::channel '   rdpdr' [1004] INITIALIZED COMPRESS_RDP |
// cs_net::channel '  rdpsnd' [1005] INITIALIZED |
// cs_net::channel ' drdynvc' [1006] INITIALIZED COMPRESS_RDP |
// cs_net::channel ' cliprdr' [1007] INITIALIZED COMPRESS_RDP SHOW_PROTOCOL |
// Sending to client GCC User Data SC_CORE (12 bytes) |
// sc_core::version [80004] RDP 5.0, 5.1, 5.2, 6.0, 6.1, 7.0, 7.1 and 8.0 servers) |
// sc_core::clientRequestedProtocols  = 1 |
// Sending to client GCC User Data SC_NET (16 bytes) |
// sc_net::MCSChannelId   = 1003 |
// sc_net::channelCount   = 4 |
// sc_net::channel[1004]::id = 1004 |
// sc_net::channel[1005]::id = 1005 |
// sc_net::channel[1006]::id = 1006 |
// sc_net::channel[1007]::id = 1007 |
// Sending to client GCC User Data SC_SECURITY (12 bytes) |
// sc_security::encryptionMethod = 0 |
// sc_security::encryptionLevel  = 0 |
// Sending on RDP Client (5) 109 bytes |
/* 0000 */ "\x03\x00\x00\x6d\x02\xf0\x80\x7f\x66\x63\x0a\x01\x00\x02\x01\x00" //...m....fc...... |
/* 0010 */ "\x30\x1a\x02\x01\x22\x02\x01\x03\x02\x01\x00\x02\x01\x01\x02\x01" //0..."........... |
/* 0020 */ "\x00\x02\x01\x01\x02\x03\x00\xff\xf8\x02\x01\x02\x04\x3f\x00\x05" //.............?.. |
/* 0030 */ "\x00\x14\x7c\x00\x01\x2a\x14\x76\x0a\x01\x01\x00\x01\xc0\x00\x4d" //..|..*.v.......M |
/* 0040 */ "\x63\x44\x6e\x80\x28\x01\x0c\x0c\x00\x04\x00\x08\x00\x01\x00\x00" //cDn.(........... |
/* 0050 */ "\x00\x03\x0c\x10\x00\xeb\x03\x04\x00\xec\x03\xed\x03\xee\x03\xef" //................ |
/* 0060 */ "\x03\x02\x0c\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00"             //............. |
// Sent dumped on RDP Client (5) 109 bytes |
// Front::incoming::Channel Connection |
// Front::incoming::Recv MCS::ErectDomainRequest |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x04\x01\x00\x01\x00"                                 //........ |
// Dump done on RDP Client (5) 8 bytes |
// Front::incoming::Recv MCS::AttachUserRequest |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x08"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 4 bytes |
// Recv done on RDP Client (5) 4 bytes |
// /* 0000 */ "\x02\xf0\x80\x28"                                                 //...( |
// Dump done on RDP Client (5) 4 bytes |
// Front::incoming::Send MCS::AttachUserConfirm |
// Sending on RDP Client (5) 11 bytes |
/* 0000 */ "\x03\x00\x00\x0b\x02\xf0\x80\x2e\x00\x00\x00"                     //........... |
// Sent dumped on RDP Client (5) 11 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xe9"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// Sending on RDP Client (5) 15 bytes |
/* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xe9\x03\xe9"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xeb"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// Sending on RDP Client (5) 15 bytes |
/* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xeb\x03\xeb"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xec"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[0] = 1004 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
/* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xec\x03\xec"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xed"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[1] = 1005 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
/* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xed\x03\xed"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xee"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[2] = 1006 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
/* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xee\x03\xee"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
// /* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xef"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[3] = 1007 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
/* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xef\x03\xef"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Front::incoming::RDP Security Commencement |
// TLS mode: exchange packet disabled |
// Front::incoming() |
// Front::incoming::Secure Settings Exchange |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x01\x89"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 389 bytes |
// Recv done on RDP Client (5) 389 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x81\x7a\x40\x00\x00\x00\x00" //...d....p.z@.... |
// /* 0010 */ "\x00\x00\x00\xb3\x47\x0b\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00" //....G....@...... |
// /* 0020 */ "\x00\x00\x00\x71\x00\x61\x00\x5c\x00\x61\x00\x64\x00\x6d\x00\x69" //...q.a...a.d.m.i |
// /* 0030 */ "\x00\x6e\x00\x69\x00\x73\x00\x74\x00\x72\x00\x61\x00\x74\x00\x65" //.n.i.s.t.r.a.t.e |
// /* 0040 */ "\x00\x75\x00\x72\x00\x40\x00\x77\x00\x69\x00\x6e\x00\x32\x00\x6b" //.u.r.@.w.i.n.2.k |
// /* 0050 */ "\x00\x38\x00\x72\x00\x32\x00\x3a\x00\x72\x00\x64\x00\x70\x00\x3a" //.8.r.2.:.r.d.p.: |
// /* 0060 */ "\x00\x78\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x1a\x00\x31" //.x.............1 |
// /* 0070 */ "\x00\x30\x00\x2e\x00\x31\x00\x30\x00\x2e\x00\x34\x00\x37\x00\x2e" //.0...1.0...4.7.. |
// /* 0080 */ "\x00\x31\x00\x37\x00\x35\x00\x00\x00\x40\x00\x43\x00\x3a\x00\x5c" //.1.7.5...@.C.:.. |
// /* 0090 */ "\x00\x57\x00\x49\x00\x4e\x00\x44\x00\x4f\x00\x57\x00\x53\x00\x5c" //.W.I.N.D.O.W.S.. |
// /* 00a0 */ "\x00\x73\x00\x79\x00\x73\x00\x74\x00\x65\x00\x6d\x00\x33\x00\x32" //.s.y.s.t.e.m.3.2 |
// /* 00b0 */ "\x00\x5c\x00\x6d\x00\x73\x00\x74\x00\x73\x00\x63\x00\x61\x00\x78" //...m.s.t.s.c.a.x |
// /* 00c0 */ "\x00\x2e\x00\x64\x00\x6c\x00\x6c\x00\x00\x00\xc4\xff\xff\xff\x50" //...d.l.l.......P |
// /* 00d0 */ "\x00\x61\x00\x72\x00\x69\x00\x73\x00\x2c\x00\x20\x00\x4d\x00\x61" //.a.r.i.s.,. .M.a |
// /* 00e0 */ "\x00\x64\x00\x72\x00\x69\x00\x64\x00\x00\x00\x00\x00\x00\x00\x00" //.d.r.i.d........ |
// /* 00f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0100 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0110 */ "\x00\x0a\x00\x00\x00\x05\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0120 */ "\x00\x00\x00\x50\x00\x61\x00\x72\x00\x69\x00\x73\x00\x2c\x00\x20" //...P.a.r.i.s.,.  |
// /* 0130 */ "\x00\x4d\x00\x61\x00\x64\x00\x72\x00\x69\x00\x64\x00\x00\x00\x00" //.M.a.d.r.i.d.... |
// /* 0140 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0150 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0160 */ "\x00\x00\x00\x00\x00\x03\x00\x00\x00\x05\x00\x02\x00\x00\x00\x00" //................ |
// /* 0170 */ "\x00\x00\x00\xc4\xff\xff\xff\x00\x00\x00\x00\x07\x00\x00\x00\x00" //................ |
// /* 0180 */ "\x00\x64\x00\x00\x00"                                             //.d... |
// Dump done on RDP Client (5) 389 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x00, 0x00, 0x00, 0x00, 0xb3, 0x47, 0x0b, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,  // .....G....@..... |
// /* 0010 */ 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x61, 0x00, 0x5c, 0x00, 0x61, 0x00, 0x64, 0x00, 0x6d, 0x00,  // ....q.a...a.d.m. |
// /* 0020 */ 0x69, 0x00, 0x6e, 0x00, 0x69, 0x00, 0x73, 0x00, 0x74, 0x00, 0x72, 0x00, 0x61, 0x00, 0x74, 0x00,  // i.n.i.s.t.r.a.t. |
// /* 0030 */ 0x65, 0x00, 0x75, 0x00, 0x72, 0x00, 0x40, 0x00, 0x77, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x32, 0x00,  // e.u.r.@.w.i.n.2. |
// /* 0040 */ 0x6b, 0x00, 0x38, 0x00, 0x72, 0x00, 0x32, 0x00, 0x3a, 0x00, 0x72, 0x00, 0x64, 0x00, 0x70, 0x00,  // k.8.r.2.:.r.d.p. |
// /* 0050 */ 0x3a, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1a, 0x00,  // :.x............. |
// /* 0060 */ 0x31, 0x00, 0x30, 0x00, 0x2e, 0x00, 0x31, 0x00, 0x30, 0x00, 0x2e, 0x00, 0x34, 0x00, 0x37, 0x00,  // 1.0...1.0...4.7. |
// /* 0070 */ 0x2e, 0x00, 0x31, 0x00, 0x37, 0x00, 0x35, 0x00, 0x00, 0x00, 0x40, 0x00, 0x43, 0x00, 0x3a, 0x00,  // ..1.7.5...@.C.:. |
// /* 0080 */ 0x5c, 0x00, 0x57, 0x00, 0x49, 0x00, 0x4e, 0x00, 0x44, 0x00, 0x4f, 0x00, 0x57, 0x00, 0x53, 0x00,  // ..W.I.N.D.O.W.S. |
// /* 0090 */ 0x5c, 0x00, 0x73, 0x00, 0x79, 0x00, 0x73, 0x00, 0x74, 0x00, 0x65, 0x00, 0x6d, 0x00, 0x33, 0x00,  // ..s.y.s.t.e.m.3. |
// /* 00a0 */ 0x32, 0x00, 0x5c, 0x00, 0x6d, 0x00, 0x73, 0x00, 0x74, 0x00, 0x73, 0x00, 0x63, 0x00, 0x61, 0x00,  // 2...m.s.t.s.c.a. |
// /* 00b0 */ 0x78, 0x00, 0x2e, 0x00, 0x64, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x00, 0x00, 0xc4, 0xff, 0xff, 0xff,  // x...d.l.l....... |
// /* 00c0 */ 0x50, 0x00, 0x61, 0x00, 0x72, 0x00, 0x69, 0x00, 0x73, 0x00, 0x2c, 0x00, 0x20, 0x00, 0x4d, 0x00,  // P.a.r.i.s.,. .M. |
// /* 00d0 */ 0x61, 0x00, 0x64, 0x00, 0x72, 0x00, 0x69, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // a.d.r.i.d....... |
// /* 00e0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00f0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0100 */ 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0110 */ 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x61, 0x00, 0x72, 0x00, 0x69, 0x00, 0x73, 0x00, 0x2c, 0x00,  // ....P.a.r.i.s.,. |
// /* 0120 */ 0x20, 0x00, 0x4d, 0x00, 0x61, 0x00, 0x64, 0x00, 0x72, 0x00, 0x69, 0x00, 0x64, 0x00, 0x00, 0x00,  //  .M.a.d.r.i.d... |
// /* 0130 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0140 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0150 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00,  // ................ |
// /* 0160 */ 0x00, 0x00, 0x00, 0x00, 0xc4, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,  // ................ |
// /* 0170 */ 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,                                // ..d... |
// RDP-5 Style logon |
// Receiving from client InfoPacket |
// InfoPacket::CodePage 0 |
// InfoPacket::flags 0xb47b3 |
// InfoPacket::flags:INFO_MOUSE yes |
// InfoPacket::flags:INFO_DISABLECTRLALTDEL yes |
// InfoPacket::flags:INFO_AUTOLOGON no |
// InfoPacket::flags:INFO_UNICODE yes |
// InfoPacket::flags:INFO_MAXIMIZESHELL  yes |
// InfoPacket::flags:INFO_LOGONNOTIFY no |
// InfoPacket::flags:INFO_COMPRESSION yes |
// InfoPacket::flags:CompressionTypeMask yes |
// InfoPacket::flags:INFO_ENABLEWINDOWSKEY  yes |
// InfoPacket::flags:INFO_REMOTECONSOLEAUDIO no |
// InfoPacket::flags:FORCE_ENCRYPTED_CS_PDU yes |
// InfoPacket::flags:INFO_RAIL no |
// InfoPacket::flags:INFO_LOGONERRORS yes |
// InfoPacket::flags:INFO_MOUSE_HAS_WHEEL yes |
// InfoPacket::flags:INFO_PASSWORD_IS_SC_PIN no |
// InfoPacket::flags:INFO_NOAUDIOPLAYBACK yes |
// InfoPacket::flags:INFO_USING_SAVED_CREDS no |
// InfoPacket::flags:RNS_INFO_AUDIOCAPTURE no |
// InfoPacket::flags:RNS_INFO_VIDEO_DISABLE no |
// InfoPacket::cbDomain 2 |
// InfoPacket::cbUserName 66 |
// InfoPacket::cbPassword 2 |
// InfoPacket::cbAlternateShell 2 |
// InfoPacket::cbWorkingDir 2 |
// InfoPacket::Domain  |
// InfoPacket::UserName qa\administrateur@win2k8r2:rdp:x |
// InfoPacket::Password <hidden> |
// InfoPacket::AlternateShell  |
// InfoPacket::WorkingDir  |
// InfoPacket::ExtendedInfoPacket::clientAddressFamily 2 |
// InfoPacket::ExtendedInfoPacket::cbClientAddress 26 |
// InfoPacket::ExtendedInfoPacket::clientAddress 10.10.47.175 |
// InfoPacket::ExtendedInfoPacket::cbClientDir 64 |
// InfoPacket::ExtendedInfoPacket::clientDir C:\WINDOWS\system32\mstscax.dll |
// InfoPacket::ExtendedInfoPacket::clientSessionId 0 |
// InfoPacket::ExtendedInfoPacket::performanceFlags 7 |
// InfoPacket::ExtendedInfoPacket::cbAutoReconnectLen 0 |
// InfoPacket::ExtendedInfoPacket::autoReconnectCookie  |
// InfoPacket::ExtendedInfoPacket::reserved1 100 |
// InfoPacket::ExtendedInfoPacket::reserved2 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::Bias 120 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardName GMT Standard Time |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wYear 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wMonth 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wDayOfWeek 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wDay 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wHour 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wMinute 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wSecond 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wMilliseconds 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardBias 60 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightName GMT Daylight Time |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wYear 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wMonth 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wDayOfWeek 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wDay 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wHour 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wMinute 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wSecond 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wMilliseconds 0 |
// client info: performance flags before=0x00000007 after=0x00000007 default=0x00000000 present=0x00000000 not-present=0x00000000 |
// Front Keyboard Layout = 0x40c |
// Front::incoming::licencing not client_info.is_mce |
// Front::incoming::licencing send_lic_initial |
// Sec clear payload to send: |
// /* 0000 */ 0x01, 0x02, 0x3e, 0x01, 0x7b, 0x3c, 0x31, 0xa6, 0xae, 0xe8, 0x74, 0xf6, 0xb4, 0xa5, 0x03, 0x90,  // ..>.{<1...t..... |
// /* 0010 */ 0xe7, 0xc2, 0xc7, 0x39, 0xba, 0x53, 0x1c, 0x30, 0x54, 0x6e, 0x90, 0x05, 0xd0, 0x05, 0xce, 0x44,  // ...9.S.0Tn.....D |
// /* 0020 */ 0x18, 0x91, 0x83, 0x81, 0x00, 0x00, 0x04, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x69, 0x00,  // ........,...M.i. |
// /* 0030 */ 0x63, 0x00, 0x72, 0x00, 0x6f, 0x00, 0x73, 0x00, 0x6f, 0x00, 0x66, 0x00, 0x74, 0x00, 0x20, 0x00,  // c.r.o.s.o.f.t. . |
// /* 0040 */ 0x43, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x70, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x61, 0x00, 0x74, 0x00,  // C.o.r.p.o.r.a.t. |
// /* 0050 */ 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x32, 0x00, 0x33, 0x00,  // i.o.n.......2.3. |
// /* 0060 */ 0x36, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0xb8, 0x00,  // 6............... |
// /* 0070 */ 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x5c, 0x00,  // ................ |
// /* 0080 */ 0x52, 0x53, 0x41, 0x31, 0x48, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00,  // RSA1H.......?... |
// /* 0090 */ 0x01, 0x00, 0x01, 0x00, 0x01, 0xc7, 0xc9, 0xf7, 0x8e, 0x5a, 0x38, 0xe4, 0x29, 0xc3, 0x00, 0x95,  // .........Z8.)... |
// /* 00a0 */ 0x2d, 0xdd, 0x4c, 0x3e, 0x50, 0x45, 0x0b, 0x0d, 0x9e, 0x2a, 0x5d, 0x18, 0x63, 0x64, 0xc4, 0x2c,  // -.L>PE...*].cd., |
// /* 00b0 */ 0xf7, 0x8f, 0x29, 0xd5, 0x3f, 0xc5, 0x35, 0x22, 0x34, 0xff, 0xad, 0x3a, 0xe6, 0xe3, 0x95, 0x06,  // ..).?.5"4..:.... |
// /* 00c0 */ 0xae, 0x55, 0x82, 0xe3, 0xc8, 0xc7, 0xb4, 0xa8, 0x47, 0xc8, 0x50, 0x71, 0x74, 0x29, 0x53, 0x89,  // .U......G.Pqt)S. |
// /* 00d0 */ 0x6d, 0x9c, 0xed, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x48, 0x00,  // m..p..........H. |
// /* 00e0 */ 0xa8, 0xf4, 0x31, 0xb9, 0xab, 0x4b, 0xe6, 0xb4, 0xf4, 0x39, 0x89, 0xd6, 0xb1, 0xda, 0xf6, 0x1e,  // ..1..K...9...... |
// /* 00f0 */ 0xec, 0xb1, 0xf0, 0x54, 0x3b, 0x5e, 0x3e, 0x6a, 0x71, 0xb4, 0xf7, 0x75, 0xc8, 0x16, 0x2f, 0x24,  // ...T;^>jq..u../$ |
// /* 0100 */ 0x00, 0xde, 0xe9, 0x82, 0x99, 0x5f, 0x33, 0x0b, 0xa9, 0xa6, 0x94, 0xaf, 0xcb, 0x11, 0xc3, 0xf2,  // ....._3......... |
// /* 0110 */ 0xdb, 0x09, 0x42, 0x68, 0x29, 0x56, 0x58, 0x01, 0x56, 0xdb, 0x59, 0x03, 0x69, 0xdb, 0x7d, 0x37,  // ..Bh)VX.V.Y.i.}7 |
// /* 0120 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x0e, 0x00,  // ................ |
// /* 0130 */ 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x00,        // microsoft.com. |
// Sending on RDP Client (5) 337 bytes |
/* 0000 */ "\x03\x00\x01\x51\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x81\x42\x80" //...Q...h....p.B. |
/* 0010 */ "\x00\x00\x00\x01\x02\x3e\x01\x7b\x3c\x31\xa6\xae\xe8\x74\xf6\xb4" //.....>.{<1...t.. |
/* 0020 */ "\xa5\x03\x90\xe7\xc2\xc7\x39\xba\x53\x1c\x30\x54\x6e\x90\x05\xd0" //......9.S.0Tn... |
/* 0030 */ "\x05\xce\x44\x18\x91\x83\x81\x00\x00\x04\x00\x2c\x00\x00\x00\x4d" //..D........,...M |
/* 0040 */ "\x00\x69\x00\x63\x00\x72\x00\x6f\x00\x73\x00\x6f\x00\x66\x00\x74" //.i.c.r.o.s.o.f.t |
/* 0050 */ "\x00\x20\x00\x43\x00\x6f\x00\x72\x00\x70\x00\x6f\x00\x72\x00\x61" //. .C.o.r.p.o.r.a |
/* 0060 */ "\x00\x74\x00\x69\x00\x6f\x00\x6e\x00\x00\x00\x08\x00\x00\x00\x32" //.t.i.o.n.......2 |
/* 0070 */ "\x00\x33\x00\x36\x00\x00\x00\x0d\x00\x04\x00\x01\x00\x00\x00\x03" //.3.6............ |
/* 0080 */ "\x00\xb8\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x06" //................ |
/* 0090 */ "\x00\x5c\x00\x52\x53\x41\x31\x48\x00\x00\x00\x00\x02\x00\x00\x3f" //...RSA1H.......? |
/* 00a0 */ "\x00\x00\x00\x01\x00\x01\x00\x01\xc7\xc9\xf7\x8e\x5a\x38\xe4\x29" //............Z8.) |
/* 00b0 */ "\xc3\x00\x95\x2d\xdd\x4c\x3e\x50\x45\x0b\x0d\x9e\x2a\x5d\x18\x63" //...-.L>PE...*].c |
/* 00c0 */ "\x64\xc4\x2c\xf7\x8f\x29\xd5\x3f\xc5\x35\x22\x34\xff\xad\x3a\xe6" //d.,..).?.5"4..:. |
/* 00d0 */ "\xe3\x95\x06\xae\x55\x82\xe3\xc8\xc7\xb4\xa8\x47\xc8\x50\x71\x74" //....U......G.Pqt |
/* 00e0 */ "\x29\x53\x89\x6d\x9c\xed\x70\x00\x00\x00\x00\x00\x00\x00\x00\x08" //)S.m..p......... |
/* 00f0 */ "\x00\x48\x00\xa8\xf4\x31\xb9\xab\x4b\xe6\xb4\xf4\x39\x89\xd6\xb1" //.H...1..K...9... |
/* 0100 */ "\xda\xf6\x1e\xec\xb1\xf0\x54\x3b\x5e\x3e\x6a\x71\xb4\xf7\x75\xc8" //......T;^>jq..u. |
/* 0110 */ "\x16\x2f\x24\x00\xde\xe9\x82\x99\x5f\x33\x0b\xa9\xa6\x94\xaf\xcb" //./$....._3...... |
/* 0120 */ "\x11\xc3\xf2\xdb\x09\x42\x68\x29\x56\x58\x01\x56\xdb\x59\x03\x69" //.....Bh)VX.V.Y.i |
/* 0130 */ "\xdb\x7d\x37\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x0e" //.}7............. |
/* 0140 */ "\x00\x0e\x00\x6d\x69\x63\x72\x6f\x73\x6f\x66\x74\x2e\x63\x6f\x6d" //...microsoft.com |
/* 0150 */ "\x00"                                                             //. |
// Sent dumped on RDP Client (5) 337 bytes |
// Front::incoming::waiting for answer to lic_initial |
// Front::incoming() |
// Front::incoming::WAITING_FOR_ANSWER_TO_LICENCE |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\xab"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 167 bytes |
// Recv done on RDP Client (5) 167 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x80\x9c\x80\x00\x6d\xef\x13" //...d....p....m.. |
// /* 0010 */ "\x83\x98\x00\x01\x00\x00\x00\x00\x00\x01\x03\xbb\x60\x33\xbc\x38" //............`3.8 |
// /* 0020 */ "\xc7\x41\xd7\xea\x6c\x5f\x95\x59\x78\xa5\xe3\xcd\x90\x28\x47\x63" //.A..l_.Yx....(Gc |
// /* 0030 */ "\xf0\x8e\x79\x98\x82\x60\xda\xfc\x5f\x88\x5f\x00\x00\x48\x00\xf9" //..y..`.._._..H.. |
// /* 0040 */ "\x0c\x32\x38\xcb\x3e\x0d\xa3\x9f\xaa\x08\xe9\x57\x03\xbe\xcf\x5d" //.28.>......W...] |
// /* 0050 */ "\x12\x49\xdc\xc9\x89\x67\x94\x27\x6b\x87\xf1\x4c\x5b\x9a\x7a\x60" //.I...g.'k..L[.z` |
// /* 0060 */ "\x3d\x21\x1e\x1a\x30\x6e\xc8\x1a\x1a\x32\xb5\xa4\x39\x5f\xef\x56" //=!..0n...2..9_.V |
// /* 0070 */ "\x6e\xed\x56\x09\x5d\x54\x7b\x77\xd7\x37\xab\x65\xc6\xe8\x00\x00" //n.V.]T{w.7.e.... |
// /* 0080 */ "\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x0f\x00\x41\x64\x6d\x69\x6e" //...........Admin |
// /* 0090 */ "\x69\x73\x74\x72\x61\x74\x65\x75\x72\x00\x10\x00\x09\x00\x52\x44" //istrateur.....RD |
// /* 00a0 */ "\x50\x2d\x54\x45\x53\x54\x00"                                     //P-TEST. |
// Dump done on RDP Client (5) 167 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x13, 0x83, 0x98, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xbb, 0x60, 0x33, 0xbc,  // .............`3. |
// /* 0010 */ 0x38, 0xc7, 0x41, 0xd7, 0xea, 0x6c, 0x5f, 0x95, 0x59, 0x78, 0xa5, 0xe3, 0xcd, 0x90, 0x28, 0x47,  // 8.A..l_.Yx....(G |
// /* 0020 */ 0x63, 0xf0, 0x8e, 0x79, 0x98, 0x82, 0x60, 0xda, 0xfc, 0x5f, 0x88, 0x5f, 0x00, 0x00, 0x48, 0x00,  // c..y..`.._._..H. |
// /* 0030 */ 0xf9, 0x0c, 0x32, 0x38, 0xcb, 0x3e, 0x0d, 0xa3, 0x9f, 0xaa, 0x08, 0xe9, 0x57, 0x03, 0xbe, 0xcf,  // ..28.>......W... |
// /* 0040 */ 0x5d, 0x12, 0x49, 0xdc, 0xc9, 0x89, 0x67, 0x94, 0x27, 0x6b, 0x87, 0xf1, 0x4c, 0x5b, 0x9a, 0x7a,  // ].I...g.'k..L[.z |
// /* 0050 */ 0x60, 0x3d, 0x21, 0x1e, 0x1a, 0x30, 0x6e, 0xc8, 0x1a, 0x1a, 0x32, 0xb5, 0xa4, 0x39, 0x5f, 0xef,  // `=!..0n...2..9_. |
// /* 0060 */ 0x56, 0x6e, 0xed, 0x56, 0x09, 0x5d, 0x54, 0x7b, 0x77, 0xd7, 0x37, 0xab, 0x65, 0xc6, 0xe8, 0x00,  // Vn.V.]T{w.7.e... |
// /* 0070 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x41, 0x64, 0x6d, 0x69,  // ............Admi |
// /* 0080 */ 0x6e, 0x69, 0x73, 0x74, 0x72, 0x61, 0x74, 0x65, 0x75, 0x72, 0x00, 0x10, 0x00, 0x09, 0x00, 0x52,  // nistrateur.....R |
// /* 0090 */ 0x44, 0x50, 0x2d, 0x54, 0x45, 0x53, 0x54, 0x00,                          // DP-TEST. |
// Front::NEW_LICENSE_REQUEST |
// Sec clear payload to send: |
// /* 0000 */ 0xff, 0x02, 0x10, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x28, 0x14, 0x00, 0x00,  // ............(... |
// Sending on RDP Client (5) 34 bytes |
/* 0000 */ "\x03\x00\x00\x22\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x14\x80\x00" //..."...h....p... |
/* 0010 */ "\x10\x00\xff\x02\x10\x00\x07\x00\x00\x00\x02\x00\x00\x00\x28\x14" //..............(. |
/* 0020 */ "\x00\x00"                                                         //.. |
// Sent dumped on RDP Client (5) 34 bytes |
// Front::incoming::send_demand_active |
// Front::send_demand_active |
// Sending to client General caps (24 bytes) |
// General caps::major 1 |
// General caps::minor 3 |
// General caps::protocol 512 |
// General caps::pad2octetA 0 |
// General caps::compression type 0 |
// General caps::extra flags 1 |
// General caps::extraflags:FASTPATH_OUTPUT_SUPPORTED yes |
// General caps::extraflags:LONG_CREDENTIALS_SUPPORTED no |
// General caps::extraflags:AUTORECONNECT_SUPPORTED no |
// General caps::extraflags:ENC_SALTED_CHECKSUM no |
// General caps::extraflags:NO_BITMAP_COMPRESSION_HDR no |
// General caps::updateCapability 0 |
// General caps::remoteUnshare 0 |
// General caps::compressionLevel 0 |
// General caps::refreshRectSupport 0 |
// General caps::suppressOutputSupport 0 |
// Sending to client Bitmap caps (28 bytes) |
// Bitmap caps::preferredBitsPerPixel 16 |
// Bitmap caps::receive1BitPerPixel 1 |
// Bitmap caps::receive4BitsPerPixel 1 |
// Bitmap caps::receive8BitsPerPixel 1 |
// Bitmap caps::desktopWidth 1024 |
// Bitmap caps::desktopHeight 768 |
// Bitmap caps::pad2octets 0 |
// Bitmap caps::desktopResizeFlag 1 (yes) |
// Bitmap caps::bitmapCompressionFlag 1 yes |
// Bitmap caps::highColorFlags 0 |
// Bitmap caps::drawingFlags 8 |
// Bitmap caps::drawingFlags:DRAW_ALLOW_DYNAMIC_COLOR_FIDELITY no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_COLOR_SUBSAMPLING no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_SKIP_ALPHA yes |
// Bitmap caps::multipleRectangleSupport 1 |
// Bitmap caps::pad2octetsB 0 |
// Sending to client Font caps (8 bytes) |
// Font caps::fontSupportFlags 1 |
// Font caps::pad2octets 0 |
// Sending to client Order caps (88 bytes) |
// Order caps::terminalDescriptor 0 |
// Order caps::pad4octetsA 1078071040 |
// Order caps::desktopSaveXGranularity 1 |
// Order caps::desktopSaveYGranularity 20 |
// Order caps::pad2octetsA 0 |
// Order caps::maximumOrderLevel 1 |
// Order caps::numberFonts 47 |
// Order caps::orderFlags 34 |
// Order caps::orderSupport[TS_NEG_DSTBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_PATBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_SCRBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEMBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEM3BLT_INDEX] 0 |
// Order caps::orderSupport[UnusedIndex1] 0 |
// Order caps::orderSupport[UnusedIndex2] 0 |
// Order caps::orderSupport[TS_NEG_DRAWNINEGRID_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_LINETO_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTI_DRAWNINEGRID_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex3] 1 |
// Order caps::orderSupport[TS_NEG_SAVEBITMAP_INDEX] 0 |
// Order caps::orderSupport[UnusedIndex4] 0 |
// Order caps::orderSupport[UnusedIndex5] 0 |
// Order caps::orderSupport[UnusedIndex6] 0 |
// Order caps::orderSupport[TS_NEG_MULTIDSTBLT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_MULTIPATBLT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_MULTISCRBLT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_MULTIOPAQUERECT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_FAST_INDEX_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_POLYGON_SC_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_POLYGON_CB_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_POLYLINE_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex7] 0 |
// Order caps::orderSupport[TS_NEG_FAST_GLYPH_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_SC_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_CB_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_INDEX_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex8] 0 |
// Order caps::orderSupport[UnusedIndex9] 0 |
// Order caps::orderSupport[UnusedIndex10] 0 |
// Order caps::orderSupport[UnusedIndex11] 0 |
// Order caps::textFlags 1697 |
// Order caps::orderSupportExFlags 0 |
// Order caps::pad4octetsB 1000000 |
// Order caps::desktopSaveSize 1000000 |
// Order caps::pad2octetsC 1 |
// Order caps::pad2octetsD 0 |
// Order caps::textANSICodePage 0 |
// Order caps::pad2octetsE 0 |
// Sending to client ColorCache caps (8 bytes) |
// ColorCache caps::colorTableCacheSize 6 |
// ColorCache caps::pad2octets 0 |
// Sending to client Pointer caps (10 bytes) |
// Pointer caps::colorPointerFlag 1 |
// Pointer caps::colorPointerCacheSize 25 |
// Pointer caps::pointerCacheSize 25 |
// Sending to client Share caps (8 bytes) |
// Share caps::nodeId 1001 |
// Share caps::pad2octets 46562 |
// Sending to client Input caps (88 bytes) |
// Input caps::inputFlags 41 |
// Input caps::pad2octetsA 0 |
// Input caps::keyboardLayout 0 |
// Input caps::keyboardType 0 |
// Input caps::keyboardSubType 0 |
// Input caps::keyboardFunctionKey 0 |
// Input caps::imeFileName 1352817568 |
// Sec clear payload to send: |
// /* 0000 */ 0x20, 0x01, 0x11, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x0a, 0x01, 0x52, 0x44,  //  .............RD |
// /* 0010 */ 0x50, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x02,  // P............... |
// /* 0020 */ 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................ |
// /* 0030 */ 0x1c, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x00,  // ................ |
// /* 0040 */ 0x01, 0x00, 0x01, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x01, 0x00,  // ................ |
// /* 0050 */ 0x00, 0x00, 0x03, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....X........... |
// /* 0060 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00,  // ......@B........ |
// /* 0070 */ 0x01, 0x00, 0x2f, 0x00, 0x22, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,  // ../."........... |
// /* 0080 */ 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01,  // ................ |
// /* 0090 */ 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x06, 0x00, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x40, 0x42,  // ..........@B..@B |
// /* 00a0 */ 0x0f, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x08, 0x00, 0x06, 0x00,  // ................ |
// /* 00b0 */ 0x00, 0x00, 0x08, 0x00, 0x0a, 0x00, 0x01, 0x00, 0x19, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00,  // ................ |
// /* 00c0 */ 0xe9, 0x03, 0xe2, 0xb5, 0x0d, 0x00, 0x58, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ......X.)....... |
// /* 00d0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00e0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00f0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0100 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0110 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// Sending on RDP Client (5) 303 bytes |
/* 0000 */ "\x03\x00\x01\x2f\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x81\x20\x20" //.../...h....p.   |
/* 0010 */ "\x01\x11\x00\xe9\x03\x02\x00\x01\x00\x04\x00\x0a\x01\x52\x44\x50" //.............RDP |
/* 0020 */ "\x00\x08\x00\x00\x00\x01\x00\x18\x00\x01\x00\x03\x00\x00\x02\x00" //................ |
/* 0030 */ "\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x1c" //................ |
/* 0040 */ "\x00\x10\x00\x01\x00\x01\x00\x01\x00\x00\x04\x00\x03\x00\x00\x01" //................ |
/* 0050 */ "\x00\x01\x00\x00\x08\x01\x00\x00\x00\x0e\x00\x08\x00\x01\x00\x00" //................ |
/* 0060 */ "\x00\x03\x00\x58\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //...X............ |
/* 0070 */ "\x00\x00\x00\x00\x00\x40\x42\x0f\x00\x01\x00\x14\x00\x00\x00\x01" //.....@B......... |
/* 0080 */ "\x00\x2f\x00\x22\x00\x01\x01\x01\x01\x00\x00\x00\x00\x01\x01\x01" //./."............ |
/* 0090 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x01\x00" //................ |
/* 00a0 */ "\x01\x00\x00\x00\x00\xa1\x06\x00\x00\x40\x42\x0f\x00\x40\x42\x0f" //.........@B..@B. |
/* 00b0 */ "\x00\x01\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x08\x00\x06\x00\x00" //................ |
/* 00c0 */ "\x00\x08\x00\x0a\x00\x01\x00\x19\x00\x19\x00\x09\x00\x08\x00\xe9" //................ |
/* 00d0 */ "\x03\xe2\xb5\x0d\x00\x58\x00\x29\x00\x00\x00\x00\x00\x00\x00\x00" //.....X.)........ |
/* 00e0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 00f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0100 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0110 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0120 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"     //............... |
// Sent dumped on RDP Client (5) 303 bytes |
// Front::incoming::ACTIVATED (new license request) |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x02\x07"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 515 bytes |
// Recv done on RDP Client (5) 515 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x81\xf8\xf8\x01\x13\x00\xe9" //...d....p....... |
// /* 0010 */ "\x03\x02\x00\x01\x00\xe9\x03\x06\x00\xe2\x01\x4d\x53\x54\x53\x43" //...........MSTSC |
// /* 0020 */ "\x00\x13\x00\x00\x00\x01\x00\x18\x00\x01\x00\x03\x00\x00\x02\x00" //................ |
// /* 0030 */ "\x00\x00\x00\x0d\x04\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x1c" //................ |
// /* 0040 */ "\x00\x10\x00\x01\x00\x01\x00\x01\x00\x00\x04\x00\x03\x00\x00\x01" //................ |
// /* 0050 */ "\x00\x01\x00\x00\x08\x01\x00\x00\x00\x03\x00\x58\x00\x00\x00\x00" //...........X.... |
// /* 0060 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0070 */ "\x00\x01\x00\x14\x00\x00\x00\x01\x00\x00\x00\xaa\x00\x01\x01\x01" //................ |
// /* 0080 */ "\x01\x01\x00\x00\x01\x01\x01\x00\x01\x00\x00\x00\x01\x01\x01\x01" //................ |
// /* 0090 */ "\x01\x01\x01\x01\x00\x01\x01\x01\x00\x00\x00\x00\x00\xa1\x06\x06" //................ |
// /* 00a0 */ "\x00\x00\x00\x00\x00\x00\x84\x03\x00\x00\x00\x00\x00\xe4\x04\x00" //................ |
// /* 00b0 */ "\x00\x04\x00\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //...(............ |
// /* 00c0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x78\x00\x00" //.............x.. |
// /* 00d0 */ "\x02\x78\x00\x00\x08\x51\x01\x00\x20\x0a\x00\x08\x00\x06\x00\x00" //.x...Q.. ....... |
// /* 00e0 */ "\x00\x07\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x05\x00\x0c" //................ |
// /* 00f0 */ "\x00\x00\x00\x00\x00\x02\x00\x02\x00\x08\x00\x0a\x00\x01\x00\x14" //................ |
// /* 0100 */ "\x00\x15\x00\x09\x00\x08\x00\x00\x00\x00\x00\x0d\x00\x58\x00\x91" //.............X.. |
// /* 0110 */ "\x00\x20\x00\x0c\x04\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c" //. .............. |
// /* 0120 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0130 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0140 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0150 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0160 */ "\x00\x00\x00\x0c\x00\x08\x00\x01\x00\x00\x00\x0e\x00\x08\x00\x01" //................ |
// /* 0170 */ "\x00\x00\x00\x10\x00\x34\x00\xfe\x00\x04\x00\xfe\x00\x04\x00\xfe" //.....4.......... |
// /* 0180 */ "\x00\x08\x00\xfe\x00\x08\x00\xfe\x00\x10\x00\xfe\x00\x20\x00\xfe" //............. .. |
// /* 0190 */ "\x00\x40\x00\xfe\x00\x80\x00\xfe\x00\x00\x01\x40\x00\x00\x08\x00" //.@.........@.... |
// /* 01a0 */ "\x01\x00\x01\x03\x00\x00\x00\x0f\x00\x08\x00\x01\x00\x00\x00\x11" //................ |
// /* 01b0 */ "\x00\x0c\x00\x01\x00\x00\x00\x00\x14\x64\x00\x14\x00\x0c\x00\x01" //.........d...... |
// /* 01c0 */ "\x00\x00\x00\x00\x00\x00\x00\x15\x00\x0c\x00\x02\x00\x00\x00\x00" //................ |
// /* 01d0 */ "\x0a\x00\x01\x16\x00\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //.....(.......... |
// /* 01e0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 01f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1a\x00\x08\x00\x00" //................ |
// /* 0200 */ "\x00\x00\x00"                                                     //... |
// Dump done on RDP Client (5) 515 bytes |
// sec decrypted payload: |
// /* 0000 */ 0xf8, 0x01, 0x13, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0xe9, 0x03, 0x06, 0x00, 0xe2, 0x01,  // ................ |
// /* 0010 */ 0x4d, 0x53, 0x54, 0x53, 0x43, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x01, 0x00,  // MSTSC........... |
// /* 0020 */ 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0030 */ 0x00, 0x00, 0x02, 0x00, 0x1c, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x04,  // ................ |
// /* 0040 */ 0x00, 0x03, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00,  // ................ |
// /* 0050 */ 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // X............... |
// /* 0060 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // ................ |
// /* 0070 */ 0xaa, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00,  // ................ |
// /* 0080 */ 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,  // ................ |
// /* 0090 */ 0x00, 0x00, 0xa1, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x03, 0x00, 0x00, 0x00,  // ................ |
// /* 00a0 */ 0x00, 0x00, 0xe4, 0x04, 0x00, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........(....... |
// /* 00b0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00c0 */ 0x00, 0x00, 0x78, 0x00, 0x00, 0x02, 0x78, 0x00, 0x00, 0x08, 0x51, 0x01, 0x00, 0x20, 0x0a, 0x00,  // ..x...x...Q.. .. |
// /* 00d0 */ 0x08, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00e0 */ 0x00, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0x00,  // ................ |
// /* 00f0 */ 0x0a, 0x00, 0x01, 0x00, 0x14, 0x00, 0x15, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0100 */ 0x0d, 0x00, 0x58, 0x00, 0x91, 0x00, 0x20, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,  // ..X... ......... |
// /* 0110 */ 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0120 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0130 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0140 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0150 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00,  // ................ |
// /* 0160 */ 0x0e, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x34, 0x00, 0xfe, 0x00, 0x04, 0x00,  // ..........4..... |
// /* 0170 */ 0xfe, 0x00, 0x04, 0x00, 0xfe, 0x00, 0x08, 0x00, 0xfe, 0x00, 0x08, 0x00, 0xfe, 0x00, 0x10, 0x00,  // ................ |
// /* 0180 */ 0xfe, 0x00, 0x20, 0x00, 0xfe, 0x00, 0x40, 0x00, 0xfe, 0x00, 0x80, 0x00, 0xfe, 0x00, 0x00, 0x01,  // .. ...@......... |
// /* 0190 */ 0x40, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00,  // @............... |
// /* 01a0 */ 0x01, 0x00, 0x00, 0x00, 0x11, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x14, 0x64, 0x00,  // ..............d. |
// /* 01b0 */ 0x14, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x0c, 0x00,  // ................ |
// /* 01c0 */ 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x01, 0x16, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..........(..... |
// /* 01d0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 01e0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 01f0 */ 0x1a, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,                          // ........ |
// Front::incoming::sec_flags=0 |
// Front received CONFIRMACTIVEPDU |
// process_confirm_active |
// lengthSourceDescriptor = 6 |
// lengthCombinedCapabilities = 482 |
// Front::capability 0 / 19 |
// Receiving from client General caps (24 bytes) |
// General caps::major 1 |
// General caps::minor 3 |
// General caps::protocol 512 |
// General caps::pad2octetA 0 |
// General caps::compression type 0 |
// General caps::extra flags 40d |
// General caps::extraflags:FASTPATH_OUTPUT_SUPPORTED yes |
// General caps::extraflags:LONG_CREDENTIALS_SUPPORTED yes |
// General caps::extraflags:AUTORECONNECT_SUPPORTED yes |
// General caps::extraflags:ENC_SALTED_CHECKSUM no |
// General caps::extraflags:NO_BITMAP_COMPRESSION_HDR yes |
// General caps::updateCapability 0 |
// General caps::remoteUnshare 0 |
// General caps::compressionLevel 0 |
// General caps::refreshRectSupport 0 |
// General caps::suppressOutputSupport 0 |
// Front::capability 1 / 19 |
// Receiving from client Bitmap caps (28 bytes) |
// Bitmap caps::preferredBitsPerPixel 16 |
// Bitmap caps::receive1BitPerPixel 1 |
// Bitmap caps::receive4BitsPerPixel 1 |
// Bitmap caps::receive8BitsPerPixel 1 |
// Bitmap caps::desktopWidth 1024 |
// Bitmap caps::desktopHeight 768 |
// Bitmap caps::pad2octets 0 |
// Bitmap caps::desktopResizeFlag 1 (yes) |
// Bitmap caps::bitmapCompressionFlag 1 yes |
// Bitmap caps::highColorFlags 0 |
// Bitmap caps::drawingFlags 8 |
// Bitmap caps::drawingFlags:DRAW_ALLOW_DYNAMIC_COLOR_FIDELITY no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_COLOR_SUBSAMPLING no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_SKIP_ALPHA yes |
// Bitmap caps::multipleRectangleSupport 1 |
// Bitmap caps::pad2octetsB 0 |
// Front::capability 2 / 19 |
// Receiving from client Order caps (88 bytes) |
// Order caps::terminalDescriptor 0 |
// Order caps::pad4octetsA 0 |
// Order caps::desktopSaveXGranularity 1 |
// Order caps::desktopSaveYGranularity 20 |
// Order caps::pad2octetsA 0 |
// Order caps::maximumOrderLevel 1 |
// Order caps::numberFonts 0 |
// Order caps::orderFlags 170 |
// Order caps::orderSupport[TS_NEG_DSTBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_PATBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_SCRBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEMBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEM3BLT_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex1] 0 |
// Order caps::orderSupport[UnusedIndex2] 0 |
// Order caps::orderSupport[TS_NEG_DRAWNINEGRID_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_LINETO_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTI_DRAWNINEGRID_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex3] 0 |
// Order caps::orderSupport[TS_NEG_SAVEBITMAP_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex4] 0 |
// Order caps::orderSupport[UnusedIndex5] 0 |
// Order caps::orderSupport[UnusedIndex6] 0 |
// Order caps::orderSupport[TS_NEG_MULTIDSTBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTIPATBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTISCRBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTIOPAQUERECT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_FAST_INDEX_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_POLYGON_SC_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_POLYGON_CB_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_POLYLINE_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex7] 0 |
// Order caps::orderSupport[TS_NEG_FAST_GLYPH_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_SC_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_CB_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_INDEX_INDEX] 0 |
// Order caps::orderSupport[UnusedIndex8] 0 |
// Order caps::orderSupport[UnusedIndex9] 0 |
// Order caps::orderSupport[UnusedIndex10] 0 |
// Order caps::orderSupport[UnusedIndex11] 0 |
// Order caps::textFlags 1697 |
// Order caps::orderSupportExFlags 6 |
// Order caps::pad4octetsB 0 |
// Order caps::desktopSaveSize 230400 |
// Order caps::pad2octetsC 0 |
// Order caps::pad2octetsD 0 |
// Order caps::textANSICodePage 1252 |
// Order caps::pad2octetsE 0 |
// Front::capability 3 / 19 |
// Receiving from client BitmapCache caps (40 bytes) |
// BitmapCache caps::pad1 0 |
// BitmapCache caps::pad2 0 |
// BitmapCache caps::pad3 0 |
// BitmapCache caps::pad4 0 |
// BitmapCache caps::pad5 0 |
// BitmapCache caps::pad6 0 |
// BitmapCache caps::cache0Entries 120 |
// BitmapCache caps::cache0MaximumCellSize 512 |
// BitmapCache caps::cache1Entries 120 |
// BitmapCache caps::cache1MaximumCellSize 2048 |
// BitmapCache caps::cache2Entries 337 |
// BitmapCache caps::cache2MaximumCellSize 8192 |
// Front::capability 4 / 19 |
// Receiving from client CAPSTYPE_COLORCACHE |
// Front::capability 5 / 19 |
// Receiving from client CAPSTYPE_ACTIVATION |
// Front::capability 6 / 19 |
// Receiving from client CAPSTYPE_CONTROL |
// Front::capability 7 / 19 |
// Receiving from client Pointer caps (10 bytes) |
// Pointer caps::colorPointerFlag 1 |
// Pointer caps::colorPointerCacheSize 20 |
// Pointer caps::pointerCacheSize 21 |
// Front::capability 8 / 19 |
// Receiving from client CAPSTYPE_SHARE |
// Front::capability 9 / 19 |
// Receiving from client CAPSTYPE_INPUT |
// Front::capability 10 / 19 |
// Receiving from client CAPSTYPE_SOUND |
// Front::capability 11 / 19 |
// Front::capability 12 / 19 |
// Receiving from client CAPSTYPE_GLYPHCACHE |
// Front::capability 13 / 19 |
// Receiving from client CAPSTYPE_BRUSH |
// Receiving from client BrushCache caps (8 bytes) |
// BrushCacheCaps caps::brushSupportLevel 1 |
// Front::capability 14 / 19 |
// Receiving from client CAPSTYPE_OFFSCREENCACHE |
// Receiving from client OffScreenCache caps (12 bytes) |
// OffScreenCache caps::offscreenSupportLevel 1 |
// OffScreenCache caps::offscreenCacheSize 5120 |
// OffScreenCache caps::offscreenCacheEntries 100 |
// Front::capability 15 / 19 |
// Receiving from client CAPSTYPE_VIRTUALCHANNEL |
// Front::capability 16 / 19 |
// Receiving from client CAPSTYPE_DRAWNINEGRIDCACHE |
// Front::capability 17 / 19 |
// Receiving from client CAPSTYPE_DRAWGDIPLUS |
// Front::capability 18 / 19 |
// Receiving from client MultifragmentUpdate caps (8 bytes) |
// MultifragmentUpdate caps::MaxRequestSize 0 |
// process_confirm_active done p=0x7fff50ab6e57 end=0x7fff50ab6e57 |
// Front::reset::use_bitmap_comp=1 |
// Front::reset::use_compact_packets=1 |
// Front::reset::bitmap_cache_version=0 |
// Front: Use RDP 5.0 Bulk compression |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[0](2000) used=2 free=16276 |
// Front received CONFIRMACTIVEPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x24"                                                     //..$ |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 32 bytes |
// Recv done on RDP Client (5) 32 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x16\x16\x00\x17\x00\xe9\x03" //...d....p....... |
// /* 0010 */ "\x02\x00\x01\x00\x00\x01\x08\x00\x1f\x00\x00\x00\x01\x00\xe9\x03" //................ |
// Dump done on RDP Client (5) 32 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x16, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x08, 0x00, 0x1f, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x01, 0x00, 0xe9, 0x03,                                // ...... |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=31 sdata_in.len=8 sdata_in.compressedLen=0 remains=0 payload_len=4 |
// PDUTYPE2_SYNCHRONIZE |
// PDUTYPE2_SYNCHRONIZE messageType=1 controlId=1001 |
// send_synchronize |
// Sec clear payload to send: |
// /* 0000 */ 0x16, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0x16, 0x00, 0x1f, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x01, 0x00, 0xea, 0x03,                                // ...... |
// Sending on RDP Client (5) 36 bytes |
/* 0000 */ "\x03\x00\x00\x24\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x16\x16\x00" //...$...h....p... |
/* 0010 */ "\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\x16\x00\x1f\x00\x00\x00" //................ |
/* 0020 */ "\x01\x00\xea\x03"                                                 //.... |
// Sent dumped on RDP Client (5) 36 bytes |
// send_synchronize done |
// process_data done |
// Front received DATAPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x28"                                                     //..( |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 36 bytes |
// Recv done on RDP Client (5) 36 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x1a\x1a\x00\x17\x00\xe9\x03" //...d....p....... |
// /* 0010 */ "\x02\x00\x01\x00\x00\x01\x0c\x00\x14\x00\x00\x00\x04\x00\x00\x00" //................ |
// /* 0020 */ "\x00\x00\x00\x00"                                                 //.... |
// Dump done on RDP Client (5) 36 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                    // .......... |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=20 sdata_in.len=12 sdata_in.compressedLen=0 remains=0 payload_len=8 |
// PDUTYPE2_CONTROL |
// send_control action=4 |
// Sec clear payload to send: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0x1a, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xea, 0x03, 0x00, 0x00,                    // .......... |
// Sending on RDP Client (5) 40 bytes |
/* 0000 */ "\x03\x00\x00\x28\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x1a\x1a\x00" //...(...h....p... |
/* 0010 */ "\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\x1a\x00\x14\x00\x00\x00" //................ |
/* 0020 */ "\x04\x00\x00\x00\xea\x03\x00\x00"                                 //........ |
// Sent dumped on RDP Client (5) 40 bytes |
// send_control done. action=4 |
// process_data done |
// Front received DATAPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x28"                                                     //..( |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 36 bytes |
// Recv done on RDP Client (5) 36 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x1a\x1a\x00\x17\x00\xe9\x03" //...d....p....... |
// /* 0010 */ "\x02\x00\x01\x00\x00\x01\x0c\x00\x14\x00\x00\x00\x01\x00\x00\x00" //................ |
// /* 0020 */ "\x00\x00\x00\x00"                                                 //.... |
// Dump done on RDP Client (5) 36 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                    // .......... |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=20 sdata_in.len=12 sdata_in.compressedLen=0 remains=0 payload_len=8 |
// PDUTYPE2_CONTROL |
// send_control action=2 |
// Sec clear payload to send: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0x1a, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xea, 0x03, 0x00, 0x00,                    // .......... |
// Sending on RDP Client (5) 40 bytes |
/* 0000 */ "\x03\x00\x00\x28\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x1a\x1a\x00" //...(...h....p... |
/* 0010 */ "\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\x1a\x00\x14\x00\x00\x00" //................ |
/* 0020 */ "\x02\x00\x00\x00\xea\x03\x00\x00"                                 //........ |
// Sent dumped on RDP Client (5) 40 bytes |
// send_control done. action=2 |
// process_data done |
// Front received DATAPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
// /* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
// /* 0000 */ "\x00\x00\x28"                                                     //..( |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 36 bytes |
// Recv done on RDP Client (5) 36 bytes |
// /* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x1a\x1a\x00\x17\x00\xe9\x03" //...d....p....... |
// /* 0010 */ "\x02\x00\x01\x00\x00\x01\x00\x00\x27\x00\x00\x00\x00\x00\x00\x00" //........'....... |
// /* 0020 */ "\x03\x00\x32\x00"                                                 //..2. |
// Dump done on RDP Client (5) 36 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x27, 0x00,  // ..............'. |
// /* 0010 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x32, 0x00,                    // ........2. |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=39 sdata_in.len=0 sdata_in.compressedLen=0 remains=0 payload_len=8 |
// PDUTYPE2_FONTLIST |
// send_fontmap |
// Sec clear payload to send: |
// /* 0000 */ 0xbe, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0xbe, 0x00, 0x28, 0x00,  // ..............(. |
// /* 0010 */ 0x00, 0x00, 0xff, 0x02, 0xb6, 0x00, 0x28, 0x00, 0x00, 0x00, 0x27, 0x00, 0x27, 0x00, 0x03, 0x00,  // ......(...'.'... |
// /* 0020 */ 0x04, 0x00, 0x00, 0x00, 0x26, 0x00, 0x01, 0x00, 0x1e, 0x00, 0x02, 0x00, 0x1f, 0x00, 0x03, 0x00,  // ....&........... |
// /* 0030 */ 0x1d, 0x00, 0x04, 0x00, 0x27, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x28, 0x00, 0x08, 0x00,  // ....'.......(... |
// /* 0040 */ 0x21, 0x00, 0x09, 0x00, 0x20, 0x00, 0x0a, 0x00, 0x22, 0x00, 0x0b, 0x00, 0x25, 0x00, 0x0c, 0x00,  // !... ..."...%... |
// /* 0050 */ 0x24, 0x00, 0x0d, 0x00, 0x23, 0x00, 0x0e, 0x00, 0x19, 0x00, 0x0f, 0x00, 0x16, 0x00, 0x10, 0x00,  // $...#........... |
// /* 0060 */ 0x15, 0x00, 0x11, 0x00, 0x1c, 0x00, 0x12, 0x00, 0x1b, 0x00, 0x13, 0x00, 0x1a, 0x00, 0x14, 0x00,  // ................ |
// /* 0070 */ 0x17, 0x00, 0x15, 0x00, 0x18, 0x00, 0x16, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x0c, 0x00, 0x19, 0x00,  // ................ |
// /* 0080 */ 0x0d, 0x00, 0x1a, 0x00, 0x12, 0x00, 0x1b, 0x00, 0x14, 0x00, 0x1f, 0x00, 0x13, 0x00, 0x20, 0x00,  // .............. . |
// /* 0090 */ 0x00, 0x00, 0x21, 0x00, 0x0a, 0x00, 0x22, 0x00, 0x06, 0x00, 0x23, 0x00, 0x07, 0x00, 0x24, 0x00,  // ..!..."...#...$. |
// /* 00a0 */ 0x08, 0x00, 0x25, 0x00, 0x09, 0x00, 0x26, 0x00, 0x04, 0x00, 0x27, 0x00, 0x03, 0x00, 0x28, 0x00,  // ..%...&...'...(. |
// /* 00b0 */ 0x02, 0x00, 0x29, 0x00, 0x01, 0x00, 0x2a, 0x00, 0x05, 0x00, 0x2b, 0x00, 0x2a, 0x00,        // ..)...*...+.*. |
// Sending on RDP Client (5) 205 bytes |
/* 0000 */ "\x03\x00\x00\xcd\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x80\xbe\xbe" //.......h....p... |
/* 0010 */ "\x00\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\xbe\x00\x28\x00\x00" //.............(.. |
/* 0020 */ "\x00\xff\x02\xb6\x00\x28\x00\x00\x00\x27\x00\x27\x00\x03\x00\x04" //.....(...'.'.... |
/* 0030 */ "\x00\x00\x00\x26\x00\x01\x00\x1e\x00\x02\x00\x1f\x00\x03\x00\x1d" //...&............ |
/* 0040 */ "\x00\x04\x00\x27\x00\x05\x00\x0b\x00\x06\x00\x28\x00\x08\x00\x21" //...'.......(...! |
/* 0050 */ "\x00\x09\x00\x20\x00\x0a\x00\x22\x00\x0b\x00\x25\x00\x0c\x00\x24" //... ..."...%...$ |
/* 0060 */ "\x00\x0d\x00\x23\x00\x0e\x00\x19\x00\x0f\x00\x16\x00\x10\x00\x15" //...#............ |
/* 0070 */ "\x00\x11\x00\x1c\x00\x12\x00\x1b\x00\x13\x00\x1a\x00\x14\x00\x17" //................ |
/* 0080 */ "\x00\x15\x00\x18\x00\x16\x00\x0e\x00\x18\x00\x0c\x00\x19\x00\x0d" //................ |
/* 0090 */ "\x00\x1a\x00\x12\x00\x1b\x00\x14\x00\x1f\x00\x13\x00\x20\x00\x00" //............. .. |
/* 00a0 */ "\x00\x21\x00\x0a\x00\x22\x00\x06\x00\x23\x00\x07\x00\x24\x00\x08" //.!..."...#...$.. |
/* 00b0 */ "\x00\x25\x00\x09\x00\x26\x00\x04\x00\x27\x00\x03\x00\x28\x00\x02" //.%...&...'...(.. |
/* 00c0 */ "\x00\x29\x00\x01\x00\x2a\x00\x05\x00\x2b\x00\x2a\x00"             //.)...*...+.*. |
// Sent dumped on RDP Client (5) 205 bytes |
// send_fontmap done |
// Front::send_data_update_sync |
// Front::send_data_update_sync: fast-path |
// Sending on RDP Client (5) 5 bytes |
/* 0000 */ "\x00\x05\x03\x00\x00"                                             //..... |
// Sent dumped on RDP Client (5) 5 bytes |
// --------------> UP AND RUNNING <---------------- |
// asking for selector |
// process_data done |
// Front received DATAPDU done |
// Front::begin_update() |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](23) used=1035 free=15243 |
// order(10 clip(0,0,1,1)):opaquerect(rect(0,0,1024,768) color=0x00ffff) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](23) used=1044 free=15234 |
// order(10 clip(0,0,1,1)):opaquerect(rect(5,5,1014,758) color=0x00f800) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](23) used=1052 free=15226 |
// order(10 clip(0,0,1,1)):opaquerect(rect(10,10,1004,748) color=0x0007e0) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](23) used=1060 free=15218 |
// order(10 clip(0,0,1,1)):opaquerect(rect(15,15,994,738) color=0x00001f) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](23) used=1068 free=15210 |
// order(10 clip(0,0,1,1)):opaquerect(rect(20,20,984,728) color=0x000000) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[6](23) used=1075 free=15203 |
// order(10 clip(0,0,1,1)):opaquerect(rect(30,30,964,708) color=0x000273) |
// Widget_load: image file [./tests/fixtures/Philips_PM5544_640.png] is PNG file |
// front::draw:draw_tile((192, 144, 64, 64) (0, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[7](8208) used=1083 free=15195 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[8](30) used=1211 free=15067 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=0) |
// front::draw:draw_tile((256, 144, 64, 64) (64, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[9](8208) used=1225 free=15053 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[10](30) used=1376 free=14902 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=1) |
// front::draw:draw_tile((320, 144, 64, 64) (128, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[11](8208) used=1382 free=14896 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[12](30) used=1489 free=14789 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=2) |
// front::draw:draw_tile((384, 144, 64, 64) (192, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[13](8208) used=1495 free=14783 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[14](30) used=1937 free=14341 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=3) |
// front::draw:draw_tile((448, 144, 64, 64) (256, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[15](8208) used=1943 free=14335 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[16](30) used=2195 free=14083 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=4) |
// front::draw:draw_tile((512, 144, 64, 64) (320, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[17](8208) used=2201 free=14077 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[18](30) used=2464 free=13814 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=5) |
// front::draw:draw_tile((576, 144, 64, 64) (384, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[19](8208) used=2470 free=13808 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[20](30) used=2924 free=13354 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=6) |
// front::draw:draw_tile((640, 144, 64, 64) (448, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[21](8208) used=2930 free=13348 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[22](30) used=3023 free=13255 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=7) |
// front::draw:draw_tile((704, 144, 64, 64) (512, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[23](8208) used=3029 free=13249 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[24](30) used=3183 free=13095 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=8) |
// front::draw:draw_tile((768, 144, 64, 64) (576, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[25](8208) used=3189 free=13089 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[26](30) used=3334 free=12944 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=9) |
// front::draw:draw_tile((192, 208, 64, 64) (0, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[27](8208) used=3340 free=12938 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[28](30) used=3443 free=12835 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=10) |
// front::draw:draw_tile((256, 208, 64, 64) (64, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[29](8208) used=3452 free=12826 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[30](30) used=3585 free=12693 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=11) |
// front::draw:draw_tile((320, 208, 64, 64) (128, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[31](8208) used=3591 free=12687 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[32](30) used=4143 free=12135 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=12) |
// front::draw:draw_tile((384, 208, 64, 64) (192, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[33](8208) used=4149 free=12129 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[34](30) used=4262 free=12016 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=13) |
// front::draw:draw_tile((448, 208, 64, 64) (256, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[35](8208) used=4268 free=12010 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[36](30) used=4308 free=11970 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=14) |
// front::draw:draw_tile((512, 208, 64, 64) (320, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[37](8208) used=4314 free=11964 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[38](30) used=4355 free=11923 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=15) |
// front::draw:draw_tile((576, 208, 64, 64) (384, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[39](8208) used=4361 free=11917 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[40](30) used=4452 free=11826 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=16) |
// front::draw:draw_tile((640, 208, 64, 64) (448, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[41](8208) used=4458 free=11820 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[42](30) used=5038 free=11240 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=17) |
// front::draw:draw_tile((704, 208, 64, 64) (512, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[43](8208) used=5044 free=11234 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[44](30) used=5177 free=11101 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=18) |
// front::draw:draw_tile((768, 208, 64, 64) (576, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[45](8208) used=5183 free=11095 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[46](30) used=5289 free=10989 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=19) |
// front::draw:draw_tile((192, 272, 64, 64) (0, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[47](8208) used=5295 free=10983 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[48](30) used=5400 free=10878 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=20) |
// front::draw:draw_tile((256, 272, 64, 64) (64, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[49](8208) used=5409 free=10869 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[50](30) used=5807 free=10471 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=21) |
// front::draw:draw_tile((320, 272, 64, 64) (128, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[51](8208) used=5813 free=10465 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[52](30) used=5959 free=10319 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=22) |
// front::draw:draw_tile((384, 272, 64, 64) (192, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[53](8208) used=5965 free=10313 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[54](30) used=6038 free=10240 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=23) |
// front::draw:draw_tile((448, 272, 64, 64) (256, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[55](8208) used=6044 free=10234 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[56](30) used=6118 free=10160 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=24) |
// front::draw:draw_tile((512, 272, 64, 64) (320, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[57](8208) used=6124 free=10154 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[58](30) used=6193 free=10085 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=25) |
// front::draw:draw_tile((576, 272, 64, 64) (384, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[59](8208) used=6199 free=10079 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[60](30) used=6270 free=10008 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=26) |
// front::draw:draw_tile((640, 272, 64, 64) (448, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[61](8208) used=6276 free=10002 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[62](30) used=6419 free=9859 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=27) |
// front::draw:draw_tile((704, 272, 64, 64) (512, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[63](8208) used=6425 free=9853 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[64](30) used=6844 free=9434 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=28) |
// front::draw:draw_tile((768, 272, 64, 64) (576, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[65](8208) used=6850 free=9428 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[66](30) used=6958 free=9320 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=29) |
// front::draw:draw_tile((192, 336, 64, 64) (0, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[67](8208) used=6964 free=9314 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[68](30) used=7049 free=9229 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=30) |
// front::draw:draw_tile((256, 336, 64, 64) (64, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[69](8208) used=7058 free=9220 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[70](30) used=7498 free=8780 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=31) |
// front::draw:draw_tile((320, 336, 64, 64) (128, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[71](8208) used=7504 free=8774 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[72](30) used=7618 free=8660 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=32) |
// front::draw:draw_tile((384, 336, 64, 64) (192, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[73](8208) used=7624 free=8654 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[74](30) used=7775 free=8503 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=33) |
// front::draw:draw_tile((448, 336, 64, 64) (256, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[75](8208) used=7781 free=8497 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[76](30) used=7955 free=8323 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=34) |
// front::draw:draw_tile((512, 336, 64, 64) (320, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[77](8208) used=7961 free=8317 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[78](30) used=8130 free=8148 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=35) |
// front::draw:draw_tile((576, 336, 64, 64) (384, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[79](8208) used=8136 free=8142 |
// GraphicsUpdatePDU::flush_orders: order_count=79 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 5520 bytes |
/* 0000 */ "\x00\x95\x90\x80\x61\x89\x15\x4f\x00\x03\xbe\x01\x80\x00\x00\xfc" //....a..O........ |
/* 0010 */ "\x39\x00\x00\x55\xf8\x89\x57\xc4\x5f\xfe\x20\x00\x93\xe8\x3e\x22" //9..U..W._. ...>" |
/* 0020 */ "\x55\xf1\x17\xff\x88\x00\x49\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00" //U.....I....|E... |
/* 0030 */ "\x1b\x7e\x83\xe2\x25\x5f\x11\x7f\xf8\x80\x08\x97\xd0\x7c\x44\xab" //.~..%_.......|D. |
/* 0040 */ "\xe2\x2f\xff\x10\x01\x36\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00\x2b" //./...6....|E...+ |
/* 0050 */ "\x7f\x41\xf1\x12\xaf\x88\xbf\xfc\x47\x89\x61\x57\xe2\x25\x5f\x11" //.A......G.aW.%_. |
/* 0060 */ "\x7f\xf8\x8f\x18\xc2\xaf\xc4\x4a\xbe\x22\xff\xf1\x00\x04\x9f\x41" //.......J.".....A |
/* 0070 */ "\xf1\x12\xaf\x88\xbf\xfc\x40\x02\x4f\xd0\x7c\x44\xab\xe2\x2f\xff" //......@.O.|D../. |
/* 0080 */ "\x10\x00\xdb\xf4\x1f\x11\x2a\xf8\x8b\xff\xc4\x00\x44\xbe\x83\xe2" //......*.....D... |
/* 0090 */ "\x25\x5f\x11\x7f\xf8\x80\x09\xb7\xd0\x7c\x44\xab\xe2\x2f\xff\x10" //%_.......|D../.. |
/* 00a0 */ "\x01\x5b\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x3c\x2a\xf2\x03\xe8\x3e" //.[....|E..<*...> |
/* 00b0 */ "\x22\xff\xf1\x1e\x21\x79\x00\x93\xe4\x02\x4f\x90\x1e\xa1\x12\x7d" //"...!y....O....} |
/* 00c0 */ "\x07\xc4\x4a\xbe\x22\xff\xf1\x00\x09\x3f\x41\xf1\x12\xaf\x88\xbf" //..J."....?A..... |
/* 00d0 */ "\xfc\x40\x03\x6f\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x01\x12\xfa\x0f" //.@.o.|D../...... |
/* 00e0 */ "\x88\x95\x7c\x45\xff\xe2\x00\x26\xdf\x41\xf1\x12\xaf\x88\xbf\xfc" //..|E...&.A...... |
/* 00f0 */ "\x40\x05\x6f\xe8\x3e\x22\x55\xf1\x17\xff\x88\xf0\x2b\xc8\x0f\xa0" //@.o.>"U.....+... |
/* 0100 */ "\xf8\x8b\xff\xc4\x78\x45\xe4\x03\x6f\x90\x0d\xbe\x40\x70\x11\x12" //....xE..o...@p.. |
/* 0110 */ "\x7d\x07\xc4\x4a\xbe\x22\xff\xf1\x00\x09\x3f\x41\xf1\x12\xaf\x88" //}..J."....?A.... |
/* 0120 */ "\xbf\xfc\x40\x03\x6f\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x01\x12\xfa" //..@.o.|D../..... |
/* 0130 */ "\x0f\x88\x95\x7c\x45\xff\xe2\x00\x26\xdf\x41\xf1\x12\xaf\x88\xbf" //...|E...&.A..... |
/* 0140 */ "\xfc\x40\x05\x6f\xe8\x3e\x22\x55\xf1\x17\xff\x88\xfe\xaf\x20\x3e" //.@.o.>"U...... > |
/* 0150 */ "\x83\xe2\x2f\xff\x11\xe0\x17\x90\x11\x2f\x20\x22\x5e\x40\x70\x81" //../....../ "^@p. |
/* 0160 */ "\x12\x7d\x07\xc4\x4a\xbe\x22\xff\xf1\x00\x09\x3f\x41\xf1\x12\xaf" //.}..J."....?A... |
/* 0170 */ "\x88\xbf\xfc\x40\x03\x6f\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x01\x12" //...@.o.|D../.... |
/* 0180 */ "\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00\x26\xdf\x41\xf1\x12\xaf\x88" //....|E...&.A.... |
/* 0190 */ "\xbf\xfc\x40\x05\x6f\xe8\x3e\x22\x55\xf1\x17\xff\x88\xfc\xaf\x20" //..@.o.>"U......  |
/* 01a0 */ "\x3e\x83\xe2\x2f\xff\x11\xfc\x5e\x40\x4d\xbc\x80\x9b\x79\x01\xc3" //>../...^@M...y.. |
/* 01b0 */ "\xc4\x49\xf4\x1f\x11\x2a\xf8\x8b\xff\xc4\x00\x24\xfd\x07\xc4\x4a" //.I...*.....$...J |
/* 01c0 */ "\xbe\x22\xff\xf1\x00\x0d\xbf\x41\xf1\x12\xaf\x88\xbf\xfc\x40\x04" //.".....A......@. |
/* 01d0 */ "\x4b\xe8\x3e\x22\x55\xf1\x17\xff\x88\x00\x9b\x7d\x07\xc4\x4a\xbe" //K.>"U......}..J. |
/* 01e0 */ "\x22\xff\xf1\x00\x15\xbf\xa0\xf8\x89\x57\xc4\x5f\xfe\x23\xea\xbc" //"........W._.#.. |
/* 01f0 */ "\x80\xfa\x0f\x88\xbf\xfc\x47\xe1\x79\x01\x5b\xf2\x02\xb7\xe4\x07" //......G.y.[..... |
/* 0200 */ "\x16\x11\x27\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x00\x93\xf4\x1f\x11" //..'.|D../....... |
/* 0210 */ "\x2a\xf8\x8b\xff\xc4\x00\x36\xfd\x07\xc4\x4a\xbe\x22\xff\xf1\x00" //*.....6...J."... |
/* 0220 */ "\x11\x2f\xa0\xf8\x89\x57\xc4\x5f\xfe\x20\x02\x6d\xf4\x1f\x11\x2a" //./...W._. .m...* |
/* 0230 */ "\xf8\x8b\xff\xc4\x00\x56\xfe\x83\xe2\x25\x5f\x11\x7f\xf8\x8f\x8a" //.....V...%_..... |
/* 0240 */ "\xf2\x03\xe8\x3e\x22\xff\xf1\x1f\x45\xe4\x05\xff\xc8\x0b\xff\xc2" //...>"...E....... |
/* 0250 */ "\x90\x02\x4f\xa0\xf8\x89\x57\xc4\x5f\xfe\x20\x01\x27\xe8\x3e\x22" //..O...W._. .'.>" |
/* 0260 */ "\x55\xf1\x17\xff\x88\x00\x6d\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00" //U.....m....|E... |
/* 0270 */ "\x22\x5f\x41\xf1\x12\xaf\x88\xbf\xfc\x40\x04\xdb\xe8\x3e\x22\x55" //"_A......@...>"U |
/* 0280 */ "\xf1\x17\xff\x88\x00\xad\xfd\x07\xc4\x4a\xbe\x22\xff\xf1\x1e\x35" //.........J."...5 |
/* 0290 */ "\x79\x01\xf4\x1f\x11\x7f\xf8\x80\x90\xa3\xc0\x00\x40\x00\x3b\xfd" //y...........@.;. |
/* 02a0 */ "\xfc\x44\xfc\x14\x16\xed\x76\x00\xbc\x7c\x8a\xb0\x03\xfc\x8a\x1f" //.D....v..|...... |
/* 02b0 */ "\x00\x11\x1f\xf9\x10\x00\x22\x7e\x14\x15\x6c\xb6\x39\x81\x01\xb9" //......"~..l.9... |
/* 02c0 */ "\x80\x00\x02\x01\x01\x00\x20\x20\x08\x38\xf9\xf4\x61\x01\x8d\x55" //......  .8..a..U |
/* 02d0 */ "\xa8\x02\x22\x10\x4a\x15\xfe\xff\x01\x77\x8f\x52\xed\xe6\x97\x08" //..".J....w.R.... |
/* 02e0 */ "\x80\x24\x06\xb7\x5e\xa0\x08\xc0\x84\x00\xa0\x33\x89\x75\x2e\x3c" //.$..^......3.u.< |
/* 02f0 */ "\xc2\xc0\xc1\x7f\xbf\xd3\x95\x65\xb5\x00\x1a\x18\xc0\x0c\x04\x72" //.......e.......r |
/* 0300 */ "\xcf\x40\x11\x95\x29\x01\x40\x67\x55\x63\x9a\x80\x14\x18\xc4\x16" //.@..).@gUc...... |
/* 0310 */ "\x80\x22\x8a\x52\x05\x01\xbb\xcf\x4a\xee\x14\x00\x7a\x74\xa9\x4b" //.".R....J...zt.K |
/* 0320 */ "\xea\x67\x3a\xab\x15\xb0\x38\x78\x55\x36\x9a\xd0\x04\x6b\x75\xe1" //.g:...8xU6...ku. |
/* 0330 */ "\xe8\x09\xa4\x96\x80\x22\x48\x42\x01\x6e\x49\x0d\x3f\x02\x00\xa0" //....."HB.nI.?... |
/* 0340 */ "\x00\x44\x00\x10\x3e\x12\x98\x07\x0a\xf2\x76\x30\x8e\x71\x8a\x00" //.D..>.....v0.q.. |
/* 0350 */ "\x2d\xbc\xd2\x02\x66\xab\x40\x13\xae\xa9\xc0\x4f\xa1\xbe\x54\x88" //-...f.@....O..T. |
/* 0360 */ "\x94\x52\x86\x21\x04\xb8\x40\x01\x28\x00\xb1\xe6\x18\x0c\x55\xb6" //.R.!..@.(.....U. |
/* 0370 */ "\x80\x27\x20\x3f\xa8\x01\x40\x04\x00\x7c\x20\xa1\xc0\x84\x3c\xb9" //.' ?..@..| ...<. |
/* 0380 */ "\x14\x00\x5f\x1c\x41\x42\x10\x0c\x05\x66\x9d\x40\x10\xf9\x91\x26" //.._.AB...f.@...& |
/* 0390 */ "\x31\x01\x80\xd5\xe7\xb4\x39\x52\x95\x00\x1b\xc9\x50\xab\x2d\x20" //1.....9R....P.-  |
/* 03a0 */ "\x00\xa8\x01\x06\x31\x80\xd1\x11\x4a\x7c\xce\x36\x02\xfd\x2f\xa5" //....1...J|.6../. |
/* 03b0 */ "\x93\x03\xc7\x89\x90\xe7\x3a\x00\x85\x6e\xbd\xf1\xc3\xd4\x01\x2f" //......:..n...../ |
/* 03c0 */ "\x32\xac\xc2\x20\x40\x28\x00\x20\x00\x6b\xde\x5d\xc5\x70\x03\xce" //2.. @(. .k.].p.. |
/* 03d0 */ "\xa0\xd1\x08\x27\xaa\xde\x56\x50\x04\x3c\xa9\x41\xb0\x21\x0a\x80" //...'..VP.<.A.!.. |
/* 03e0 */ "\x14\xb9\xcc\x06\x80\x21\xe4\xbb\x0d\xf1\xfc\x22\x94\xfd\x17\x8f" //.....!.....".... |
/* 03f0 */ "\x41\xa8\xa5\x35\x00\x24\xd6\xb0\x16\x01\xdf\xdc\x91\x83\xfd\x0c" //A..5.$.......... |
/* 0400 */ "\x68\x02\x1e\x36\x40\x3f\x73\xc6\x60\x00\x0a\x00\x87\x8c\x56\x0f" //h..6@?s.`.....V. |
/* 0410 */ "\x18\xc0\x10\x00\x1c\xb4\x07\xc6\x38\x4a\xc0\x40\xc0\x20\x42\x10" //........8J.@. B. |
/* 0420 */ "\x48\xd5\x58\x80\x5a\xa2\xda\xd6\x02\x07\x02\x7d\xb7\xae\xdb\xc0" //H.X.Z......}.... |
/* 0430 */ "\x07\xa0\x2b\xb6\xf2\x1e\x0e\x40\x01\xe6\x21\x08\x24\x0a\x2d\x35" //..+....@..!.$.-5 |
/* 0440 */ "\xaf\xdf\xc0\x07\xa0\x62\x10\x47\x18\x67\x82\x9f\x4e\x5d\x65\xb3" //.....b.G.g..N]e. |
/* 0450 */ "\xeb\xbf\xd3\x95\x18\x67\xe6\xc0\x52\x4b\x1e\xfa\x74\x61\x04\x59" //.....g..RK..ta.Y |
/* 0460 */ "\xa7\x7d\x3a\xa9\xc7\x0f\x2c\xff\x2a\x9d\x65\xbf\x77\x11\x8a\x37" //.}:...,.*.e.w..7 |
/* 0470 */ "\xd3\x92\x1e\x0f\x4f\x93\x3f\xe5\xe3\x28\xf9\x51\x16\x9a\xfe\x68" //....O.?..(.Q...h |
/* 0480 */ "\x82\x7e\x68\xab\xcf\x7c\x42\x1d\xfa\xa8\x1f\xcc\xda\xef\xf3\x31" //.~h..|B........1 |
/* 0490 */ "\x51\x86\x0c\x51\xab\xf7\xf1\xe8\x24\x4a\x29\x5b\xaf\x5f\xef\xef" //Q..Q....$J)[._.. |
/* 04a0 */ "\xb6\xf7\xd8\x94\x52\x07\x53\x8e\x2c\xd3\xa7\xd7\x71\xc6\x01\x8e" //....R.S.,...q... |
/* 04b0 */ "\x2e\x22\x0e\x1a\x6a\x3d\xbd\xee\x08\xab\x2d\x1c\xb3\xdf\xef\xf1" //."..j=....-..... |
/* 04c0 */ "\xeb\xbf\x11\x18\xa8\x00\xb0\x84\x00\xc0\xc7\x2c\xf7\x79\xe8\xe5" //...........,.y.. |
/* 04d0 */ "\x9d\xda\xff\x7f\xf1\x52\x35\x56\xbf\xdf\xd7\x6d\xfc\x42\xe3\x89" //.....R5V...m.B.. |
/* 04e0 */ "\xcd\x46\xaa\xde\x1c\x87\x18\x61\xc5\x1b\xc5\x18\x18\x41\x1d\x7c" //.F.....a.....A.| |
/* 04f0 */ "\x04\x00\x1d\x63\xf9\x88\x94\x53\xec\x57\xcc\x40\x95\x65\xb7\xbf" //...c...S.W.@.e.. |
/* 0500 */ "\x66\xd7\xd6\x0c\x51\x9f\x6d\xff\x5a\x7c\x84\x38\xa3\x7a\x15\xf3" //f...Q.m.Z|.8.z.. |
/* 0510 */ "\x26\xe7\xf3\x35\x59\xa7\x7c\xc8\x64\x10\x82\x5c\x27\xe0\xb0\x3f" //&..5Y.|.d...'..? |
/* 0520 */ "\x2a\xd1\x0f\x8e\x32\xe3\x62\x08\xe0\xde\xe1\x3a\x81\x12\x10\xcd" //*...2.b....:.... |
/* 0530 */ "\xa6\xa0\x00\xbe\x7e\x50\x02\x2b\x75\xe8\x10\x00\x01\xa4\x97\xe7" //....~P.+u....... |
/* 0540 */ "\x0d\x24\xaf\x3c\x81\x95\xfe\x10\x10\x06\x00\x07\x6f\xe1\xe3\x8d" //.$.<........o... |
/* 0550 */ "\xb7\x92\xa8\x00\x82\xe0\x00\x0b\x40\x30\xb7\xbd\xdc\xd0\x00\xaf" //........@0...... |
/* 0560 */ "\xf7\xff\x21\xbd\x3f\x1e\x37\x9e\x0b\xe5\x59\x6b\xcf\x8e\x60\x73" //..!.?.7...Yk..`s |
/* 0570 */ "\xc7\x28\x14\xca\x29\x57\x9e\xf9\xce\x40\xa0\x8f\x34\xea\xbc\xf6" //.(..)W...@..4... |
/* 0580 */ "\x75\x56\xf4\x60\x73\x89\x5b\xf5\x44\x4a\x28\xeb\xfa\x9c\x12\x9f" //uV.`s.[.DJ(..... |
/* 0590 */ "\xaa\x20\xaa\x30\xc1\x49\x2d\x5e\x7b\x1a\xab\x7d\x00\xdb\x37\xd0" //. .0.I-^{..}..7. |
/* 05a0 */ "\x4c\xbe\xf0\x62\x8d\x5b\xaf\x78\x28\x36\xca\x21\x04\x83\xa8\xc3" //L..b.[.x(6.!.... |
/* 05b0 */ "\x2e\x71\xc7\x59\x6d\xde\x7a\xf3\x4e\xbd\xd7\xbd\x76\x19\x68\xfa" //.q.Ym.z.N...v.h. |
/* 05c0 */ "\x88\x94\x50\x52\x4b\x16\x9a\x8c\x51\x9e\x69\xd3\xaa\xb7\x0b\x80" //..PRK...Q.i..... |
/* 05d0 */ "\xcf\xf8\x71\x76\x98\x42\xac\xb4\xc3\xc3\xea\x9c\x70\x52\x4a\xeb" //..qv.B......pRJ. |
/* 05e0 */ "\x2d\x8b\x4d\x66\xd3\x5a\x11\x42\x14\x0e\xef\x3d\x18\xa3\x1c\x51" //-.Mf.Z.B...=...Q |
/* 05f0 */ "\xa8\x52\x63\x18\x13\xcd\x3b\x88\x10\x41\xe7\xdb\x03\x70\x3a\x4f" //.Rc...;..A...p:O |
/* 0600 */ "\x20\x88\x9d\x55\x88\x00\x78\xfe\x41\x87\xb3\xa2\x93\xc4\xc8\x0d" // ..U..x.A....... |
/* 0610 */ "\xc7\xc4\x61\x49\xe2\xfe\x06\x31\xe3\x05\x5c\xd2\x17\xaf\x61\x63" //..aI...1......ac |
/* 0620 */ "\x78\x00\x05\xf6\x16\x6f\xbe\xc2\x8e\x14\x31\x53\x8e\x00\x0c\xc1" //x....o....1S.... |
/* 0630 */ "\x23\xd7\x77\x9e\x62\x65\x18\x67\xa8\x40\x02\xf0\x2a\xbc\xf6\x65" //#.w.be.g.@..*..e |
/* 0640 */ "\x14\x67\xf9\x41\x18\x1c\xfa\xef\x3a\xab\x55\xe7\xbc\xc1\xa0\x05" //.g.A....:.U..... |
/* 0650 */ "\xa7\xe8\x83\x78\xd7\xc7\x16\x44\x4a\x29\xfa\x5e\xd0\x00\x09\xc1" //...x...DJ).^.... |
/* 0660 */ "\x57\x6d\xf1\xaf\xc4\x14\x92\xa8\xc3\x3f\x94\x07\x41\x63\xd7\x7a" //Wm.......?..Ac.z |
/* 0670 */ "\xdd\x78\x62\x8c\xeb\x2d\x99\x45\x1b\x7e\x80\x1f\x8f\x3a\xf7\x5e" //.xb..-.E.~...:.^ |
/* 0680 */ "\x21\xe2\x9c\x75\x96\xdc\xe3\x8a\x30\xc7\x21\x08\x20\xfc\x08\xf2" //!..u....0.!. ... |
/* 0690 */ "\xcf\x3a\xab\x10\xf1\x9f\x45\xa6\xa2\x92\x58\x94\x51\xe8\x42\x08" //.:....E...X.Q.B. |
/* 06a0 */ "\x19\xc4\x38\x43\xea\x34\x0c\xe2\x8c\x31\x46\xe5\x22\x28\x42\x83" //..8C.4...1F."(B. |
/* 06b0 */ "\xcd\xa6\xb1\x69\xab\xac\xb4\x52\x4b\x53\x8e\x44\xa2\x86\x1e\xdf" //...i...RKS.D.... |
/* 06c0 */ "\x4a\x94\x80\x79\x9d\x98\x00\x3f\x69\xc3\xd8\x47\x00\x3a\x00\x07" //J..y...?i..G.:.. |
/* 06d0 */ "\x0d\x27\x2f\x38\xe1\xb7\x3c\xa1\xe3\xda\x8f\x64\xc5\x00\x03\x97" //.'/8..<....d.... |
/* 06e0 */ "\xcc\x80\x03\x14\xd0\x00\x7d\x97\x1c\x33\xe2\xa1\xec\xd8\x05\x00" //......}..3...... |
/* 06f0 */ "\x03\x9c\xf2\x8f\xc6\x6e\x02\x0c\x00\x0f\x01\x6d\x6b\x20\x16\x81" //.....n.....mk .. |
/* 0700 */ "\x46\xaa\xde\x69\x0d\xc0\x97\x6d\xfc\x18\x03\xb0\x38\xd5\x58\xc2" //F..i...m....8.X. |
/* 0710 */ "\x09\xc2\x36\x20\x55\xfb\xfc\x5a\x6b\xc3\x09\xf2\x95\xba\xf3\x8f" //..6 U..Zk....... |
/* 0720 */ "\xb6\x64\x66\x05\x3e\xbb\xba\xcb\x78\x4b\x00\x06\x3f\xa9\x46\x19" //.df.>...xK..?.F. |
/* 0730 */ "\xc1\xe0\x00\x2d\x02\x8f\x5d\xc5\x24\xbc\x25\x80\x02\xb0\x2e\x09" //...-..].$.%..... |
/* 0740 */ "\x48\x27\xb9\xa0\x4f\xd4\x4a\x9c\x71\xaf\xe5\x04\x7e\xf1\xd6\x5b" //H'..O.J.q...~..[ |
/* 0750 */ "\xec\x98\x10\x81\x0c\x51\x8c\x20\x8d\xdf\x28\x1d\x02\x9d\x55\xa2" //.....Q. ..(...U. |
/* 0760 */ "\x51\x4f\x42\x80\x03\x3c\x68\x14\x92\xfb\x4c\x00\x15\xfa\x11\x69" //QOB..<h...L....i |
/* 0770 */ "\xab\xa7\xca\x04\x70\x33\x55\xe7\xbc\x82\xdf\x30\x0d\xf3\x2d\xdf" //....p3U....0..-. |
/* 0780 */ "\xe6\x01\x3e\x62\xef\xf3\x1c\x2f\xc0\x00\x50\x3a\xfd\xfc\x62\x8c" //..>b.../..P:..b. |
/* 0790 */ "\xa3\x0c\x7b\xf9\x80\x0f\xb0\x59\xa7\x54\xe3\x9c\xa5\x55\x00\x12" //..{....Y.T...U.. |
/* 07a0 */ "\x00\x00\x1f\x36\xa2\x51\x41\xc6\x00\x4b\xfd\xff\x94\x9b\x8e\xd9" //...6.QA..K...... |
/* 07b0 */ "\x80\xba\xff\x7f\x82\xf0\xa7\x8e\x40\xf1\xca\x73\x38\x10\xe5\x9d" //........@..s8... |
/* 07c0 */ "\x56\x5a\x27\xff\x47\x14\x67\x18\x67\xa9\xd5\x00\x1e\x14\x6e\x13" //VZ'.G.g.g.....n. |
/* 07d0 */ "\xca\x07\x00\xe8\xe4\x53\x1e\xa2\x08\x41\x04\x78\x71\x1d\x78\xaa" //.....S...A.xq.x. |
/* 07e0 */ "\xb8\xd5\x00\x05\xbf\x6c\xc4\xb8\x6c\xc8\xa4\x0a\xf7\x5e\x55\x96" //.....l..l....^U. |
/* 07f0 */ "\xb5\x7c\xa0\x8c\x0d\xf6\xde\x31\xf5\x8d\x9f\x30\x1d\x03\x8f\x7e" //.|.....1...0...~ |
/* 0800 */ "\x25\x4e\x38\xdf\xf3\x01\x7f\x32\x6e\x71\xcf\x4f\x40\x47\xcc\x2c" //%N8....2nq.O@G., |
/* 0810 */ "\xd3\xb8\xe4\x3e\x64\x3c\x70\x7e\x5a\x01\x68\x01\x1e\x27\x8f\x19" //...>d<p~Z.h..'.. |
/* 0820 */ "\xc7\x95\x23\xe6\x47\x8c\xe3\xca\x91\xc2\x0e\x79\x48\x3c\xf8\xe5" //..#.G......yH<.. |
/* 0830 */ "\x1c\x9b\x4d\x48\x68\x01\x04\x84\x3c\xa5\x9f\x35\xca\x6e\xa9\x1c" //..MHh...<..5.n.. |
/* 0840 */ "\x23\x20\x18\x00\x0d\x40\x03\x84\x66\x09\xc0\x00\xfd\x1d\x9d\x7c" //# ...@..f......| |
/* 0850 */ "\xea\xef\x3d\xe9\xad\x1d\x33\x23\xa6\x1b\x8e\xec\x1e\xf8\x46\x7a" //..=...3#......Fz |
/* 0860 */ "\x5f\xb8\xf8\x41\xef\x4a\xb8\xeb\xbf\x1d\x30\xe6\x40\x0e\x40\x01" //_..A.J....0.@.@. |
/* 0870 */ "\xf5\xa7\xf1\xd7\x20\x17\x81\xc4\x84\x37\x02\x00\x1f\x11\xc0\x38" //.... ....7.....8 |
/* 0880 */ "\x00\x1c\x37\xc4\x78\xc2\xc0\x02\x00\x3a\xdc\x38\xa1\xbc\x4b\x07" //..7.x....:.8..K. |
/* 0890 */ "\xd0\xde\xba\x33\x68\x82\x50\x01\x60\x0f\x9e\x2c\x75\xb9\x75\xa5" //...3h.P.`..,u.u. |
/* 08a0 */ "\xa9\xf4\x77\xae\x84\x40\x52\xe2\xb4\x00\x58\x2d\xc7\xc2\xd1\xd6" //..w..@R...X-.... |
/* 08b0 */ "\xd1\xd7\x2f\x93\xaf\x1c\x82\xa2\x94\x87\xf5\xcc\xcb\xae\xdc\x75" //../............u |
/* 08c0 */ "\xcd\x20\x02\x87\xfe\xc7\xd4\xcd\x81\x9b\xc6\x2e\xb9\xfb\xde\x3c" //. .............< |
/* 08d0 */ "\xc1\x01\x00\x00\x7c\x2f\xde\x60\xb8\x10\x00\x48\x05\x2e\x00\xf9" //....|/.`...H.... |
/* 08e0 */ "\x01\x50\x9f\x79\x81\xdb\xfe\x39\x09\x28\x1d\xd3\xde\x5d\x52\xe0" //.P.y...9.(...]R. |
/* 08f0 */ "\xb7\x1a\x80\x15\x09\xe3\x8f\x42\x04\x21\xdc\x25\xdb\x12\x29\x7e" //.......B.!.%..)~ |
/* 0900 */ "\x3e\x75\xd6\x9e\x19\xd3\x63\xe8\x2c\x3c\xb3\xf2\xbf\x52\xf8\x24" //>u....c.,<...R.$ |
/* 0910 */ "\x39\x04\xc7\x05\x19\xe5\x66\x05\xee\x02\xf2\x9b\xeb\xf0\xd0\x02" //9.....f......... |
/* 0920 */ "\x65\x4a\x4c\x0c\x7e\x28\x8f\x2a\x26\xd3\x51\xee\xe1\x11\xc1\x74" //eJL.~(.*&.Q....t |
/* 0930 */ "\x01\x70\xf2\xbc\x04\x80\x01\xad\x79\x5f\x15\x80\x00\xae\xf2\x3c" //.p......y_.....< |
/* 0940 */ "\x75\x00\x28\x0d\x7f\xfe\x93\x5a\xc7\xb8\xb4\x40\x65\x3a\x96\xb5" //u.(....Z...@e:.. |
/* 0950 */ "\x50\x02\x61\x08\xee\xce\x65\x29\x0e\xa7\x1a\x49\x6a\x1c\x9d\xdd" //P.a...e)...Ij... |
/* 0960 */ "\x48\x22\x80\x23\x0a\x52\xb8\x07\x04\x30\x0a\x75\x64\x1e\x71\x5b" //H".#.R...0.ud.q[ |
/* 0970 */ "\x90\x84\x21\xef\xb1\x36\x73\x9b\x80\x70\x18\x08\x30\x0d\x00\x02" //..!..6s..p..0... |
/* 0980 */ "\xa1\xe2\x10\x1b\xc7\x8c\x31\x76\x00\x0b\xee\xe7\x4e\x2a\xbe\x2f" //......1v....N*./ |
/* 0990 */ "\x85\x59\x6f\x0d\x78\xf8\xef\x9b\x1d\xde\x6a\xb0\x05\xc4\xca\x04" //.Yo.x.....j..... |
/* 09a0 */ "\x13\x5a\xea\x00\x54\xb5\xa0\x18\x0b\xed\xbe\x86\x9a\xd6\x30\xc0" //.Z..T.........0. |
/* 09b0 */ "\x11\x7f\xbf\x8a\xc0\x54\xbb\xd3\x98\x70\x00\x32\xc0\x40\x03\xee" //.....T...p.2.@.. |
/* 09c0 */ "\x85\x0d\x94\xa4\x57\xbd\xd4\xa1\xc5\x6a\x00\x44\x3c\xcf\xa6\x87" //....W....j.D<... |
/* 09d0 */ "\xe5\x01\xe0\x43\x27\x93\xcb\x9c\x19\x14\x30\x84\x2e\x9a\x8f\xac" //...C'.....0..... |
/* 09e0 */ "\xf2\x70\x00\x0c\x47\xd7\x60\xb0\x00\x31\xb0\x2f\x25\xe0\x32\x04" //.p..G.`..1./%.2. |
/* 09f0 */ "\x18\x01\x46\xf1\xe8\xb1\x8c\x32\x02\xdc\xd7\x40\x06\xbc\x4f\x45" //..F....2...@..OE |
/* 0a00 */ "\xb8\xfd\x20\x32\x63\x10\x01\xf8\x15\x3d\xee\x04\x20\x00\x3d\xdc" //.. 2c....=.. .=. |
/* 0a10 */ "\x39\x6b\x5a\xf9\xc1\x08\x23\x29\x4f\xc7\x4b\x9c\xd0\x42\x3e\xac" //9kZ...#)O.K..B>. |
/* 0a20 */ "\xca\x94\xbe\x70\x42\x09\xc2\xa0\x3f\x02\x87\x39\x90\x00\x7d\x59" //...pB...?..9..}Y |
/* 0a30 */ "\x85\x7d\x5a\x83\x7f\xfa\x91\x08\x00\x08\xb7\x2e\xdb\xf9\x8a\x3f" //.}Z............? |
/* 0a40 */ "\xa0\x41\xbe\xff\x7f\xa8\x01\xcc\xa2\x80\x2c\x01\xa0\x00\x0e\x11" //.A........,..... |
/* 0a50 */ "\xaa\xb4\x05\xa5\x28\x00\x3e\x80\x01\x0a\x52\xfd\x35\xdc\x36\x13" //....(.>...R.5.6. |
/* 0a60 */ "\x5a\xfc\x0f\x7f\x6d\xe0\x78\xf1\x8c\xf9\x1a\xbe\xf7\x1a\x2f\xde" //Z...m.x......./. |
/* 0a70 */ "\x10\xc0\x7e\xed\x96\x31\xfd\xdb\x49\xfb\xb5\x47\x39\xf8\xeb\x7b" //..~..1..I..G9..{ |
/* 0a80 */ "\xdf\x80\x83\xd0\x1e\xeb\xb0\x08\x43\xf9\xe6\x9e\xf7\x43\x18\xf9" //........C....C.. |
/* 0a90 */ "\x33\x2e\x73\xb1\xfc\x9a\xc0\x1a\x0f\x93\x17\x7e\xbb\xa6\x1f\x4c" //3.s........~...L |
/* 0aa0 */ "\xa0\x77\xfe\x6e\x8f\x05\xc4\x07\xb4\x7b\xc0\x6f\x17\x63\xc0\x1d" //.w.n.....{.o.c.. |
/* 0ab0 */ "\xf1\xe3\xdb\x33\x6f\x7b\xf1\xe3\xfe\xc5\xbd\xef\xc3\x1c\x5f\x26" //...3o{........_& |
/* 0ac0 */ "\xe9\xff\x6f\x0f\xdb\x9f\xfd\x76\x6e\x88\x0f\x83\x2f\xc3\x51\xf6" //..o....vn.../.Q. |
/* 0ad0 */ "\x12\xa5\x22\x00\x01\x16\x00\xee\xdd\x48\xd5\x5b\x00\x5f\x80\x12" //.."......H.[._.. |
/* 0ae0 */ "\x52\x98\x08\x38\xbb\x03\x42\x10\xaa\x00\x40\x84\x3c\x3f\x81\x08" //R..8..B...@.<?.. |
/* 0af0 */ "\x50\x2e\xec\xf0\x1d\x40\x0d\xb3\xf0\xb8\x72\x31\x38\xf6\xbc\x28" //P....@....r18..( |
/* 0b00 */ "\xc3\x3b\x2a\x3d\x39\x5d\xde\x2f\x89\xa3\xc2\xf3\x80\x1b\x83\xf4" //.;*=9]./........ |
/* 0b10 */ "\x2f\x63\xc7\x87\x1d\x0c\x98\x01\x31\xf2\x46\x10\x4c\x00\xbf\x64" ///c......1.F.L..d |
/* 0b20 */ "\x3c\x65\x5f\x4a\x7e\xde\x7f\xe5\xf6\xe3\x00\x38\x3e\xe4\x78\x0d" //<e_J~......8>.x. |
/* 0b30 */ "\x32\x8a\x00\x0f\xf8\x6d\xc3\xba\x03\x00\x00\xd9\x38\xbc\xe2\xc4" //2....m......8... |
/* 0b40 */ "\x00\x1b\xce\x85\xc3\xa2\x86\xfe\x40\xa2\xe0\x0a\x07\x81\x42\xd0" //........@.....B. |
/* 0b50 */ "\x1b\x18\xc3\x8f\x09\xd7\x30\x29\xb5\xad\x60\x1d\x90\x01\x97\x03" //......0)..`..... |
/* 0b60 */ "\x18\x1f\x80\xf3\x66\x5b\x41\xe8\x00\x49\x29\x5c\x48\x02\x30\x19" //....f[A..I).H.0. |
/* 0b70 */ "\x94\x52\x84\x9a\xd7\x01\x14\x92\x88\x71\xe6\x51\xf9\x79\xb0\x04" //.R.......q.Q.y.. |
/* 0b80 */ "\xb3\xac\xda\x8f\x3a\xab\x5c\x00\x00\xf8\xd1\xbc\xfa\x30\x82\x7c" //....:........0.| |
/* 0b90 */ "\x70\xf7\x8d\xe0\x37\x8b\x2b\xc6\xf8\x8c\x80\x07\x00\x53\xbc\x65" //p...7.+......S.e |
/* 0ba0 */ "\x46\xdf\xb1\x73\xa0\x04\x7b\x80\x60\x8a\x53\x73\xa0\x60\x78\xd7" //F..s..{.`.Ss.`x. |
/* 0bb0 */ "\xee\x80\xe0\x00\x31\xcf\xdd\x88\xd0\x00\x78\x07\xeb\x8f\x32\xc0" //....1.....x...2. |
/* 0bc0 */ "\x77\xef\xe5\x0f\x00\x03\x4e\xfd\xf8\xa6\x00\x08\x76\xf1\x7e\xfa" //w.....N.....v.~. |
/* 0bd0 */ "\xfe\xf1\xfc\x8c\x01\xbe\x5a\x22\x94\xb9\x74\x87\x26\xc0\x78\x81" //......Z"..t.&.x. |
/* 0be0 */ "\x87\xe0\x29\x29\x57\x0a\x90\x3f\x9d\x1e\x7a\x7b\x05\x4f\x7b\xf4" //..))W..?..z{.O{. |
/* 0bf0 */ "\xa4\x79\xe5\xe7\xf7\xa1\xa2\xe0\x7f\xe8\x09\x1e\xee\x0c\x30\xf7" //.y............0. |
/* 0c00 */ "\xac\x88\x00\x01\x9b\xf2\x23\xc4\xd4\x08\x44\x03\xc3\xb8\x13\xc0" //......#...D..... |
/* 0c10 */ "\x5c\x61\x9c\x8b\xc0\x03\x1e\xc7\x72\x28\x00\x0b\xc0\x66\xf3\x5e" //.a......r(...f.^ |
/* 0c20 */ "\xca\xd0\x2f\xc9\x89\xc2\x38\x6b\x25\xec\xb3\x02\xbd\xe6\x86\x10" //../...8k%....... |
/* 0c30 */ "\x4f\x9e\x99\x45\x3a\xbe\x40\xa4\x05\xd6\x5b\xd9\x9a\x04\xfe\xbe" //O..E:.@...[..... |
/* 0c40 */ "\x13\x3e\xb0\xf2\x25\xfb\x9d\x9c\xe0\x47\xa1\x83\xb3\x8c\x08\x40" //.>..%....G.....@ |
/* 0c50 */ "\x90\x42\x27\x55\x6a\x72\x6b\x5b\x00\x87\x05\x25\xce\x39\xc8\xbc" //.B'Ujrk[...%.9.. |
/* 0c60 */ "\x00\x1f\x42\x69\x4a\xa7\xfa\x04\x1d\x02\x91\x08\x79\xd5\xc8\xb4" //..BiJ.......y... |
/* 0c70 */ "\x00\x1b\x02\x20\x00\x4d\x6b\xe2\x04\xf5\xa9\xa5\x2b\xad\xc4\x06" //... .Mk.....+... |
/* 0c80 */ "\x7a\x8c\xe7\xf2\x01\x70\x28\x17\xe5\x00\x0e\xfe\x19\xed\x4b\x01" //z....p(.......K. |
/* 0c90 */ "\x5f\x85\xd7\x36\x02\x7d\x98\x76\xf9\x00\x8e\x45\xa2\x1f\xc1\x25" //_..6.}.v...E...% |
/* 0ca0 */ "\x8c\x7d\xab\x60\x1f\xda\xee\xbd\x0c\x01\x20\xa3\x9c\xf6\xb1\x80" //.}.`...... ..... |
/* 0cb0 */ "\x58\x13\x29\x4d\xbf\xc0\x2e\x17\x82\x1e\xfd\xe0\x00\x38\x15\x0c" //X.)M.........8.. |
/* 0cc0 */ "\x62\x9e\xf7\xda\xfe\x00\xa0\x56\x31\x89\x73\x9b\xe7\xca\x00\xfd" //b......V1.s..... |
/* 0cd0 */ "\x41\xa4\x95\xf7\xe5\x00\x20\x6c\x21\x11\xaa\xb6\x00\x5d\x0e\x40" //A..... l!....].@ |
/* 0ce0 */ "\xc8\x00\x06\x28\xde\x6e\x0e\x90\xb1\x7c\x60\xe4\x09\xa5\x2b\xef" //...(.n...|`...+. |
/* 0cf0 */ "\x87\x78\xf3\x38\xaa\x39\xbe\x24\xc6\x2c\x7f\x20\x37\x02\x45\xf0" //.x.8.9.$.,. 7.E. |
/* 0d00 */ "\xec\xc0\x81\x08\x6d\xef\x7d\xaa\x60\x67\xc1\x4a\x7b\xdf\x7a\x7a" //....m.}.`g.J{.zz |
/* 0d10 */ "\xa1\xf8\x79\xde\x9e\x05\xfe\xf2\x9e\xf7\xc0\x66\x05\xbf\x7c\xf0" //..y........f..|. |
/* 0d20 */ "\x1b\x81\x58\x14\x98\xc6\xde\xf7\xc0\x62\x05\x3c\x26\xe0\x13\x3e" //..X......b.<&..> |
/* 0d30 */ "\x98\x70\x02\x81\x1f\x45\x25\x4a\x5c\x01\x23\x02\x8c\x92\x52\xa0" //.p...E%J..#...R. |
/* 0d40 */ "\x52\xa5\x28\xd5\x59\x81\x73\x92\x43\xb8\x14\x72\x37\x80\x2e\x43" //R.(.Y.s.C..r7..C |
/* 0d50 */ "\x63\xd0\xde\xfc\xe5\x18\x67\xbc\x5d\x94\x63\x92\x1c\x06\x77\x16" //c.....g.].c...w. |
/* 0d60 */ "\x18\x41\x3d\xf5\x01\x7c\x8c\xde\xe9\xa5\x9a\x77\xba\x67\x91\xbc" //.A=..|.....w.g.. |
/* 0d70 */ "\x0e\x70\xc6\x54\xe3\x9e\xe0\x80\x6c\x00\x06\x30\x82\x7b\x8a\x01" //.p.T....l..0.{.. |
/* 0d80 */ "\x39\x1a\xbd\xa7\x7f\x76\x3d\xa7\x58\x02\x0e\x3d\xa7\x00\x18\x02" //9....v=.X..=.... |
/* 0d90 */ "\x12\x5f\xbe\x54\x70\xb2\x3f\xfc\x88\xc0\x20\x31\xc5\xae\x84\x7a" //._.Tp.?... 1...z |
/* 0da0 */ "\x7c\x6c\x25\xda\x7f\x3e\x9e\xfa\x82\xc3\x7b\x52\xcd\x00\x0b\xa7" //|l%..>....{R.... |
/* 0db0 */ "\x4a\xa0\x05\x6f\x7b\xee\xe5\x3d\x40\x1f\x1c\x30\xc0\x15\x7f\xbf" //J..o{..=@..0.... |
/* 0dc0 */ "\x8b\x74\xe9\x54\x00\xba\xb9\x40\xfd\x7f\xa8\x04\x40\x41\xa1\xa2" //.t.T...@....@A.. |
/* 0dd0 */ "\xbd\x3a\x55\x0e\x31\x00\x1e\xdd\x32\x87\x15\xed\xd2\xb8\x0a\x84" //.:U.1...2....... |
/* 0de0 */ "\x76\x88\x00\x2d\x74\xf5\x7a\x4c\x00\x39\xd3\xd5\xe2\xd5\xc0\xf3" //v..-t.zL.9...... |
/* 0df0 */ "\xa7\xc4\x89\x00\x01\xae\xf9\x2f\x15\xb0\x01\x3e\xd1\x5c\xd4\xe0" //......./...>.... |
/* 0e00 */ "\x2e\xbe\x71\xeb\x00\xf3\x00\x95\xfe\xfe\x1d\xd7\xba\x3a\xfb\xcf" //..q..........:.. |
/* 0e10 */ "\x5f\xf7\xcd\x78\xc8\x03\xce\x51\xde\x39\xd8\x09\xd7\xda\x3f\x20" //_..x...Q.9....?  |
/* 0e20 */ "\x00\xbb\xaf\x9c\x72\x1a\x76\x62\x78\xc1\x1a\xab\x5c\x04\x3c\x61" //....r.vbx.....<a |
/* 0e30 */ "\x22\x60\x00\x6b\x9e\x30\xc5\x68\x00\x53\xb3\x1f\x10\x04\xc3\xfb" //"`.k.0.h.S...... |
/* 0e40 */ "\x3f\xac\x76\x62\x90\x02\xca\x77\x34\x50\x0f\x6f\x17\xe8\x9b\x7b" //?.vb...w4P.o...{ |
/* 0e50 */ "\xdf\x88\x1e\x26\x76\x68\xaf\x67\x3c\x7a\x0e\xec\xcd\x03\x9e\x5d" //...&vh.g<z.....] |
/* 0e60 */ "\x50\x04\x64\x42\x1d\x99\x69\x35\xae\xe0\x1c\x0b\xd9\x96\x44\x00" //P.dB..i5......D. |
/* 0e70 */ "\x45\x39\xa4\x30\x11\xde\x2f\xe0\x22\xbd\x99\x77\x03\xf5\x32\x97" //E9.0../."..w..2. |
/* 0e80 */ "\x1c\xa0\x01\xd8\x2f\xfc\x7d\x1c\x18\x44\x10\x18\x05\xdf\x96\xe2" //..../.}..D...... |
/* 0e90 */ "\x87\x5e\xe1\x82\x9d\x55\xa8\x00\x9e\x7d\x43\x2a\xc0\x01\x4e\xbf" //.^...U...}C*..N. |
/* 0ea0 */ "\xb9\x7d\xbf\xf3\x8e\x7b\x65\x82\x0a\x1f\xea\x01\x70\x0d\x2a\xc7" //.}...{e.....p.*. |
/* 0eb0 */ "\x5e\xfd\x82\xa9\x2f\xc5\x7f\xb9\x61\xe7\x60\x80\x83\x51\xbe\x28" //^.../...a.`..Q.( |
/* 0ec0 */ "\xba\x09\xfb\x02\x10\x49\x07\x83\x2c\x7e\x03\x6a\x8e\x7c\x50\x7f" //.....I..,~.j.|P. |
/* 0ed0 */ "\xd6\xa2\x1b\x3f\xcc\x4a\x26\xbf\x15\xf4\x6f\xfc\x4d\x1e\x7b\xf1" //...?.J&...o.M.{. |
/* 0ee0 */ "\x5f\x46\xff\x14\x94\xf8\x61\xf3\x1e\x30\x78\x12\xe5\x9d\x20\x9f" //_F....a..0x... . |
/* 0ef0 */ "\x45\xe1\x59\x25\xf1\x34\x7e\xeb\x02\xfd\xd1\x4b\xf1\x0b\xe6\x3e" //E.Y%.4~....K...> |
/* 0f00 */ "\xec\xf9\x0e\x7e\xee\x94\xcf\xbb\x52\x1f\xbb\x0d\x54\xe1\xec\x0b" //...~....R...T... |
/* 0f10 */ "\x15\x02\x10\xa5\x2f\x8e\x1e\x60\xc0\x89\x88\x0c\xca\xad\x45\x22" //..../..`......E" |
/* 0f20 */ "\x63\x18\xe0\x21\x02\x12\x21\x0c\x03\xe4\xc1\x81\x82\x1a\x25\x0a" //c..!..!.......%. |
/* 0f30 */ "\x38\x31\xea\x78\xe2\x60\xa8\x00\xf7\x70\x8e\xa0\x11\xc8\x19\xd8" //81.x.`...p...... |
/* 0f40 */ "\x46\x3d\x8c\xe3\xaa\x1f\xea\xe0\xec\x2d\x10\x28\x94\x52\xcf\xd9" //F=.......-.(.R.. |
/* 0f50 */ "\x6a\x29\xef\x7d\xb4\x9d\x4a\xa3\xae\x5c\xfc\xec\x4a\x3e\x73\xa0" //j).}..J.....J>s. |
/* 0f60 */ "\xf3\xe2\xbb\xe2\x20\x00\x5c\x31\xa0\x54\x00\x0e\x0b\xc3\x1b\x18" //.... ..1.T...... |
/* 0f70 */ "\x18\x00\xb0\x05\x00\x82\xc1\x7f\x80\xd1\x2b\xf4\xfb\xf8\x3d\xc0" //..........+...=. |
/* 0f80 */ "\x00\x2a\x80\x06\x44\xc7\x01\x07\xa3\x50\x01\xad\x63\x14\x6f\x94" //.*..D....P..c.o. |
/* 0f90 */ "\xa2\x39\xd3\xdd\x49\x68\x00\x74\x28\xe7\x42\xb5\x00\x1a\xe6\xb4" //.9..Ih.t(.B..... |
/* 0fa0 */ "\xc0\x12\x00\x01\x70\x2d\x02\x80\xf8\x7c\x3f\x01\xf0\xec\x76\x7b" //....p-...|?...v{ |
/* 0fb0 */ "\x79\x56\x7b\x1e\xd7\xce\x77\x3a\x8f\x9c\xef\x45\x7d\x9a\x83\xf0" //yV{...w:...E}... |
/* 0fc0 */ "\x2c\x08\x5c\xf3\x54\x08\x41\x3c\xd5\x7f\xc6\xf9\xfe\x3f\x8c\x50" //,...T.A<.....?.P |
/* 0fd0 */ "\xc6\x00\x06\x7c\xb1\x02\xc0\x00\x67\x9e\x58\xc4\xe8\x00\x5c\x02" //...|....g.X..... |
/* 0fe0 */ "\x80\x51\x7f\xc0\x8d\x41\x7a\x3d\x83\xcb\x11\x45\x75\x25\x80\xcc" //.Q...Az=...Eu%.. |
/* 0ff0 */ "\x9b\x28\x00\xd2\x68\xcd\x00\x2d\xd4\x96\x05\x32\x6c\x56\x93\x51" //.(..h..-...2lV.Q |
/* 1000 */ "\xe6\x91\x9a\x2c\x28\x8b\xcb\x33\x21\x23\xa0\x05\xfc\xb9\x68\xbc" //...,(..3!#....h. |
/* 1010 */ "\x4f\x6e\x08\x00\xbe\x0f\x81\x70\x00\x33\xdf\x07\xe2\x76\x00\x30" //On.....p.3...v.0 |
/* 1020 */ "\x01\x40\x1e\xb0\x03\xc0\x68\x00\x01\xf0\x20\x84\x2e\x42\xc9\x70" //.@....h... ..B.p |
/* 1030 */ "\x0b\x8f\xcf\x40\x01\xee\x08\x01\x14\xe9\xa7\x85\x0c\x84\xb0\x19" //...@............ |
/* 1040 */ "\x6b\x65\x00\x16\x69\x19\x80\xaa\x49\xa9\xd2\xcf\x07\xa0\x9e\x0f" //ke..i...I....... |
/* 1050 */ "\x86\x00\x4f\x08\x0c\xbc\x21\x23\x00\x00\x67\x1e\x10\xc4\xd8\x00" //..O...!#..g..... |
/* 1060 */ "\x64\x00\x87\x9d\xe8\x3e\x02\x04\x21\x40\x1e\x1f\xbc\x5c\x20\x00" //d....>..!@.... . |
/* 1070 */ "\x37\x38\x00\x40\xfd\xe2\x02\x52\x93\x40\x0a\x35\x94\xc0\x54\xa2" //78.@...R.@.5..T. |
/* 1080 */ "\x74\x00\x6b\x31\xa5\x38\xd6\x52\xf7\xcd\x0d\xe6\x18\x01\x71\xf7" //t.k1.8.R......q. |
/* 1090 */ "\xd4\x92\xf8\x2e\x46\x40\x00\xce\xbc\x17\x89\xc0\x00\xd0\x05\x1f" //....F@.......... |
/* 10a0 */ "\xfd\x26\xf6\x8a\x01\x40\x05\xe3\xd5\x4a\x3f\x80\x05\x09\x34\x52" //.&...@...J?...4R |
/* 10b0 */ "\x49\x4c\x05\x37\xc0\xcb\xa1\xa5\x00\x2f\xe5\xcf\x6d\x68\xf0\x54" //IL.7...../..mh.T |
/* 10c0 */ "\x06\x38\xfd\x12\x8f\xcb\x7a\xa2\xc6\xb9\xe1\xbc\x1b\x8c\x00\x00" //.8....z......... |
/* 10d0 */ "\x6c\x02\x9e\x01\x78\x80\xc5\xd0\x28\x04\x03\xe0\x1e\x0d\x53\xee" //l...x...(.....S. |
/* 10e0 */ "\x86\x90\x11\x79\x6d\x1a\xcd\x1c\xa0\x05\x9a\x90\xc0\x54\x9a\xe9" //...ym........T.. |
/* 10f0 */ "\xd6\x68\xe3\xb5\xe2\x7b\x40\x0b\x2a\x21\xf0\x13\xd3\xd2\xd2\x05" //.h...{@.*!...... |
/* 1100 */ "\x80\xd6\x1c\x23\x58\x1b\x3c\x3d\xd7\x41\xc8\x2c\x3d\xf3\x26\x03" //...#X.<=.A.,=.&. |
/* 1110 */ "\x81\x71\xa8\x77\x9b\x7b\xe6\x95\x65\xbd\x3c\xea\xef\x3d\x51\x86" //.q.w.{..e.<..=Q. |
/* 1120 */ "\x7c\xf0\xa4\x97\xa7\x8c\x0d\x7f\xa7\x4e\xf8\x1a\xec\x02\xfa\xa8" //|........N...... |
/* 1130 */ "\xb4\xd6\xa0\x0b\x23\x10\xc0\x80\x92\x36\x00\x07\x16\xe5\x71\x8c" //....#....6....q. |
/* 1140 */ "\x50\x04\x70\x02\x80\x06\x3e\x01\x01\x51\x6b\xe5\x65\x3d\x08\x34" //P.p...>..Qk.e=.4 |
/* 1150 */ "\x12\x80\x8f\x00\x74\xb1\x80\xb8\x0c\x6c\x43\xc8\xa5\x8e\x1d\xe8" //....t....lC..... |
/* 1160 */ "\x0d\xe5\xef\x95\xd4\xe0\x01\xf0\x57\x31\x93\xbf\x34\x80\x3c\x06" //........W1..4.<. |
/* 1170 */ "\xba\x31\xdf\x16\x01\xe0\x2e\xe5\x3c\xae\xe5\x56\x5b\xcb\x1c\x24" //.1......<..V[..$ |
/* 1180 */ "\xc7\xe3\x50\xe8\x07\x60\x98\x09\x80\xd6\x86\x3f\xd0\xd7\x8a\x8a" //..P..`.....?.... |
/* 1190 */ "\x03\x50\x7b\xfa\xe5\xc0\x8e\x9e\x10\x11\xe1\x1a\xb9\x2d\x7a\x6c" //.P{..........-zl |
/* 11a0 */ "\x3c\x01\x70\xfb\x31\x79\x18\xe9\xff\x00\xf0\x19\x9a\x97\xd4\x0e" //<.p.1y.......... |
/* 11b0 */ "\xfd\x4a\x19\x21\xec\x5b\x00\xd0\x1a\x9f\xe8\x83\xdf\xa9\x47\x1d" //.J.!.[........G. |
/* 11c0 */ "\x47\xa4\x17\xfe\x4c\x04\xf4\x03\xa9\x0c\x02\x78\x3a\x94\x5a\xfe" //G...L......x:.Z. |
/* 11d0 */ "\x91\xf0\x23\xa9\x4c\x01\xc0\x45\x50\xbf\x9b\xc3\x76\x32\x43\xd9" //..#.L..EP...v2C. |
/* 11e0 */ "\x1a\x00\xa0\x26\x5e\x58\x87\xb0\x8e\xa8\x10\x03\xf8\x75\x38\x21" //...&^X.......u8! |
/* 11f0 */ "\xea\x99\x30\x17\x1f\x01\x45\x70\x63\xaa\xa4\x0f\xc0\x66\xee\x7f" //..0...Epc....f.. |
/* 1200 */ "\x85\x3e\x10\xe5\xab\x88\xc5\x16\xcd\x1c\x80\x8e\xd9\xfa\x20\x40" //.>............ @ |
/* 1210 */ "\xb5\x10\x04\x86\x06\xb3\xd1\x11\xcb\x72\xb9\x71\x87\x2a\x00\x2c" //.........r.q.*., |
/* 1220 */ "\xbd\x13\x9c\xb6\xab\xe3\x86\xf8\x21\x3b\x51\xc0\xef\xcc\x78\x1d" //........!;Q...x. |
/* 1230 */ "\x57\xc1\x10\x0f\x8e\xc1\x03\xd1\xda\x61\xde\x76\xa0\x57\x48\xe7" //W........a.v.WH. |
/* 1240 */ "\x8d\x43\xbf\xa6\x3e\x44\xdc\xf9\xa7\x38\x46\x2e\x17\xde\x59\xb2" //.C..>D...8F...Y. |
/* 1250 */ "\x38\x00\x06\xbf\xc3\xfb\x15\xd0\x01\xde\xa8\x7c\xa0\x12\xea\x07" //8..........|.... |
/* 1260 */ "\x4d\x37\x4d\xa7\x54\x29\xea\x3d\x16\xf7\xbf\x24\xd7\x53\x67\x20" //M7M.T).=...$.Sg  |
/* 1270 */ "\xc0\x70\x47\x4c\xb8\xea\x91\x51\xeb\xbf\x4e\x20\x77\xe8\x8e\xab" //.pGL...Q..N w... |
/* 1280 */ "\xaf\x3a\x3a\xbb\xba\x69\xc7\x82\x97\x01\x0e\x2e\x12\x3a\x00\x06" //.::..i.......:.. |
/* 1290 */ "\x91\xe3\x2c\x51\x80\x07\x80\x03\xbc\x0c\xc1\x81\x71\xe3\x18\xf1" //..,Q........q... |
/* 12a0 */ "\xc2\x02\xaf\x5d\xa5\xd3\xe7\x57\x0b\xa0\x1f\x55\x28\x20\x87\x5c" //...]...W...U( .. |
/* 12b0 */ "\x28\x00\x78\x15\x39\x81\x4f\xeb\x02\xa4\x3a\x98\x4e\x04\xd6\x60" //(.x.9.O...:.N..` |
/* 12c0 */ "\xdd\x98\x6d\x6b\xea\x63\x50\x21\x0b\x85\x38\x18\x07\xa9\x8c\x28" //..mk.cP!..8....( |
/* 12d0 */ "\x00\x8f\x00\x01\xca\xf8\x9c\xe3\x29\x01\x1f\xea\x62\xa7\xce\xa0" //........)...b... |
/* 12e0 */ "\x31\x1a\x5f\x86\x61\x56\x5b\x4e\xf4\x9a\x9e\xf6\x23\x01\xa5\xad" //1._.aV[N....#... |
/* 12f0 */ "\x7d\x05\x40\x0f\xac\xcb\x86\x53\x04\x79\x87\xf0\x10\x73\xe2\xb9" //}.@....S.y...s.. |
/* 1300 */ "\xba\x44\x07\x9a\xb4\x77\x8f\x7c\x57\x42\x68\xe7\x49\x0b\xfc\xaa" //.D...w.|WBh.I... |
/* 1310 */ "\x5f\x29\xcd\xf6\x30\x02\xc3\xe2\xb0\x19\xb0\x7f\xea\x28\x00\x34" //_)..0........(.4 |
/* 1320 */ "\x31\x8f\x2c\xc0\x0f\xdb\x50\xf9\xc3\x01\xe0\x2f\x34\xee\x2c\xd5" //1.,...P..../4.,. |
/* 1330 */ "\x1a\xab\x0c\x50\x01\x48\x21\xdd\x6a\x58\x04\x32\x28\x00\x33\x28" //...P.H!.jX.2(.3( |
/* 1340 */ "\xa6\x03\x26\x9e\x88\x8a\x1f\x06\x10\x3c\x06\x0c\x63\x40\x01\xe9" //..&......<..c@.. |
/* 1350 */ "\x34\x02\x38\xa3\x00\xe0\x0c\xa7\x72\x17\xd4\x78\x54\xbf\xe1\xfa" //4.8.....r..xT... |
/* 1360 */ "\xf1\x4c\xf8\xce\x7c\x7b\x3e\x47\x9f\x28\xcf\x96\xe7\xcc\xb3\xe6" //.L..|{>G.(...... |
/* 1370 */ "\xf9\xf3\xcc\xf4\x9c\x08\x77\x1a\x37\xf0\xc0\x08\x60\x6a\x24\x06" //......w.7...`j$. |
/* 1380 */ "\x21\x14\xa1\xc0\xaa\xd4\xd9\x15\x5b\xae\xf2\x85\x3a\x10\x80\xd0" //!.......[...:... |
/* 1390 */ "\xab\xd4\x39\x15\x5b\x8e\x42\xf9\x7f\x77\xb0\x5f\xc6\x38\x62\xa9" //..9.[.B..w._.8b. |
/* 13a0 */ "\xed\xad\x70\x13\xab\x3e\x04\xe8\x8c\x0d\xac\xac\xf5\x99\x88\xc6" //..p..>.......... |
/* 13b0 */ "\x03\xa5\x40\x4d\xfa\xba\xc4\x57\xae\xb4\x0a\x75\xb9\x72\xb4\x81" //..@M...W...u.r.. |
/* 13c0 */ "\xf2\x1e\xc2\x8e\xb7\xf3\xd6\x5a\x7a\xf3\x4f\x58\xf9\x82\x7f\x08" //.......Zz.OX.... |
/* 13d0 */ "\x93\xfe\xb8\x6d\x86\x7c\x57\x11\x57\xe8\xbf\xc7\x32\x4f\xbd\x10" //...m.|W.W...2O.. |
/* 13e0 */ "\x9f\xbd\x05\xfd\x70\xeb\xed\xe5\xd8\x1e\x7f\xcc\xf6\x61\xbf\xb7" //....p........a.. |
/* 13f0 */ "\x28\x3f\x6e\x11\x69\xc2\x7c\x37\x20\x7c\x00\x0d\x97\x86\xe6\x2c" //(?n.i.|7 |....., |
/* 1400 */ "\x60\x04\x1c\x5b\xd5\xba\xf1\x0f\x07\x97\x3f\xb0\x00\x1d\x00\x37" //`..[......?....7 |
/* 1410 */ "\x81\x83\x04\xd6\x45\x00\x46\x86\x31\x82\x09\x62\x80\x1b\xc0\x64" //....E.F.1..b...d |
/* 1420 */ "\x03\x22\xc1\xe8\x8c\x10\x4d\x13\x28\xa5\x00\x37\x80\xab\x04\x8e" //."....M.(..7.... |
/* 1430 */ "\xce\x09\x0f\x0e\xff\x44\x8f\xfa\x24\x55\x68\x19\x2d\x9d\x1a\xde" //.....D..$Uh.-... |
/* 1440 */ "\x09\x67\xf5\x92\xad\x01\x93\xc9\x7a\xc8\x18\x04\x3a\xd8\xd4\x28" //.g......z...:..( |
/* 1450 */ "\x8a\xe0\x80\x0f\xe3\x88\x20\x00\xc1\xf7\xfa\x90\x80\x70\xe2\x11" //...... ......p.. |
/* 1460 */ "\x70\x5a\x72\x6c\x79\x02\x86\x7c\x7e\xe1\x57\x85\x00\x43\xc8\xf8" //pZrly..|~.W..C.. |
/* 1470 */ "\x05\x79\x1e\xb8\x4e\x61\xe4\x38\xf2\x7e\x21\x3f\x31\xc2\x82\xf9" //.y..Na.8.~!?1... |
/* 1480 */ "\x36\x47\x95\xf0\xa0\x04\xf7\xdf\x50\x00\xe0\x37\x73\x5a\x12\x2c" //6G......P..7sZ., |
/* 1490 */ "\x86\x03\x36\x2d\xa0\x08\x3a\x92\xc0\xe3\x4a\xd3\xa5\xe5\x94\x63" //..6-..:...J....c |
/* 14a0 */ "\x18\x0d\xac\xd2\x8e\xc8\x4b\x80\xef\xdd\x6d\xa6\x09\xe5\xdc\x08" //......K...m..... |
/* 14b0 */ "\x40\x00\xe4\x3e\x5d\xc6\x3e\x00\x45\xc3\xb1\xe5\xed\xc4\x38\x77" //@..>].>.E.....8w |
/* 14c0 */ "\x08\x7c\xc4\xa3\xf9\x65\xe6\x5e\x1e\x2c\xb0\x03\x02\x10\x01\xf3" //.|...e.^.,...... |
/* 14d0 */ "\x54\x51\xfc\xab\x1e\x6d\xe3\x00\xf9\x91\x0e\x73\x01\xa3\xf9\xa5" //TQ...m.....s.... |
/* 14e0 */ "\xe7\x5e\x4c\x06\xfe\xf1\x1a\xe1\x41\x03\xf3\x02\x03\x66\x35\xa1" //.^L.....A....f5. |
/* 14f0 */ "\x2a\x48\x60\x32\x5f\x3d\x99\x09\x60\x90\xa5\x69\x5a\xf2\x42\x33" //*H`2_=..`..iZ.B3 |
/* 1500 */ "\x06\x06\x2f\x8e\xc1\xea\x00\x05\xc1\x47\xce\x92\x44\x00\x07\x1c" //../......G..D... |
/* 1510 */ "\xf3\xa6\x31\xa0\x02\x3e\xbd\xb2\x21\xe0\xb1\x0f\x9c\xde\x78\x22" //..1..>..!.....x" |
/* 1520 */ "\x94\x91\x54\x7b\xcb\xae\x00\x20\x7c\x65\x5e\x63\x80\x1c\x05\xb2" //..T{... |e^c.... |
/* 1530 */ "\xc1\x37\xb1\xe5\x18\x4d\x6b\xa8\xd0\xc6\x1f\xfc\xe1\x18\x12\x71" //.7...Mk........q |
/* 1540 */ "\xe5\xca\xc1\x3f\xd1\x80\x56\x5e\x74\x8c\x04\x97\x37\x38\xe5\x47" //...?..V^t...78.G |
/* 1550 */ "\x01\x4c\xbc\x28\xf2\xdc\x54\x00\x7d\x27\x1c\xb4\x9e\x73\x80\x25" //.L.(..T.}'...s.% |
/* 1560 */ "\x59\x68\x0f\xb8\x1e\x8a\x5c\x2a\x20\x70\x42\x10\x83\x9a\x55\x6a" //Yh.....* pB...Uj |
/* 1570 */ "\xa5\x1a\xa9\x50\x04\x05\x65\x30\x17\x69\x8d\x08\x94\xb6\x03\x37" //...P..e0.i.....7 |
/* 1580 */ "\x9c\xd1\xc5\x65\x22\x3d\x9e\x0c\x01\xdd\x9e\x1c\x08\xe8\x8c\x00" //...e"=.......... |
// Sent dumped on RDP Client (5) 5520 bytes |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](30) used=151 free=16127 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=36) |
// front::draw:draw_tile((640, 336, 64, 64) (448, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](8208) used=157 free=16121 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](30) used=267 free=16011 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=37) |
// front::draw:draw_tile((704, 336, 64, 64) (512, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](8208) used=273 free=16005 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](30) used=723 free=15555 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=38) |
// front::draw:draw_tile((768, 336, 64, 64) (576, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[6](8208) used=729 free=15549 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[7](30) used=814 free=15464 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=39) |
// front::draw:draw_tile((192, 400, 64, 64) (0, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[8](8208) used=820 free=15458 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[9](30) used=913 free=15365 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=40) |
// front::draw:draw_tile((256, 400, 64, 64) (64, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[10](8208) used=922 free=15356 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[11](30) used=1372 free=14906 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=41) |
// front::draw:draw_tile((320, 400, 64, 64) (128, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[12](8208) used=1378 free=14900 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[13](30) used=1633 free=14645 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=42) |
// front::draw:draw_tile((384, 400, 64, 64) (192, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[14](8208) used=1639 free=14639 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[15](30) used=1938 free=14340 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=43) |
// front::draw:draw_tile((448, 400, 64, 64) (256, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[16](8208) used=1944 free=14334 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[17](30) used=2267 free=14011 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=44) |
// front::draw:draw_tile((512, 400, 64, 64) (320, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[18](8208) used=2273 free=14005 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[19](30) used=2594 free=13684 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=45) |
// front::draw:draw_tile((576, 400, 64, 64) (384, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[20](8208) used=2600 free=13678 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[21](30) used=2899 free=13379 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=46) |
// front::draw:draw_tile((640, 400, 64, 64) (448, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[22](8208) used=2905 free=13373 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[23](30) used=3143 free=13135 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=47) |
// front::draw:draw_tile((704, 400, 64, 64) (512, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[24](8208) used=3149 free=13129 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[25](30) used=3584 free=12694 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=48) |
// front::draw:draw_tile((768, 400, 64, 64) (576, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[26](8208) used=3590 free=12688 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[27](30) used=3682 free=12596 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=49) |
// front::draw:draw_tile((192, 464, 64, 64) (0, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[28](8208) used=3688 free=12590 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[29](30) used=3808 free=12470 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=50) |
// front::draw:draw_tile((256, 464, 64, 64) (64, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[30](8208) used=3817 free=12461 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[31](30) used=4093 free=12185 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=51) |
// front::draw:draw_tile((320, 464, 64, 64) (128, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[32](8208) used=4099 free=12179 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[33](30) used=4605 free=11673 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=52) |
// front::draw:draw_tile((384, 464, 64, 64) (192, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[34](8208) used=4611 free=11667 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[35](30) used=4817 free=11461 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=53) |
// front::draw:draw_tile((448, 464, 64, 64) (256, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[36](8208) used=4823 free=11455 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[37](30) used=4985 free=11293 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=54) |
// front::draw:draw_tile((512, 464, 64, 64) (320, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[38](8208) used=4991 free=11287 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[39](30) used=5151 free=11127 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=55) |
// front::draw:draw_tile((576, 464, 64, 64) (384, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[40](8208) used=5157 free=11121 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[41](30) used=5348 free=10930 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=56) |
// front::draw:draw_tile((640, 464, 64, 64) (448, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[42](8208) used=5354 free=10924 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[43](30) used=5806 free=10472 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=57) |
// front::draw:draw_tile((704, 464, 64, 64) (512, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[44](8208) used=5812 free=10466 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[45](30) used=6071 free=10207 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=58) |
// front::draw:draw_tile((768, 464, 64, 64) (576, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[46](8208) used=6077 free=10201 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[47](30) used=6197 free=10081 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=59) |
// front::draw:draw_tile((192, 528, 64, 64) (0, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[48](8208) used=6203 free=10075 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[49](30) used=6327 free=9951 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=60) |
// front::draw:draw_tile((256, 528, 64, 64) (64, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[50](8208) used=6336 free=9942 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[51](30) used=6474 free=9804 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=61) |
// front::draw:draw_tile((320, 528, 64, 64) (128, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[52](8208) used=6480 free=9798 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[53](30) used=6834 free=9444 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=62) |
// front::draw:draw_tile((384, 528, 64, 64) (192, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[54](8208) used=6840 free=9438 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[55](30) used=7367 free=8911 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=63) |
// front::draw:draw_tile((448, 528, 64, 64) (256, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[56](8208) used=7373 free=8905 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[57](30) used=7455 free=8823 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=64) |
// front::draw:draw_tile((512, 528, 64, 64) (320, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[58](8208) used=7461 free=8817 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[59](30) used=7520 free=8758 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=65) |
// front::draw:draw_tile((576, 528, 64, 64) (384, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[60](8208) used=7526 free=8752 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[61](30) used=8005 free=8273 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=66) |
// front::draw:draw_tile((640, 528, 64, 64) (448, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[62](8208) used=8011 free=8267 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[63](30) used=8326 free=7952 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=67) |
// front::draw:draw_tile((704, 528, 64, 64) (512, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[64](8208) used=8332 free=7946 |
// GraphicsUpdatePDU::flush_orders: order_count=64 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 5229 bytes |
/* 0000 */ "\x00\x94\x6d\x80\x21\x66\x14\x40\x00\x03\x84\x79\xc7\x18\x36\x15" //..m.!f.@...y..6. |
/* 0010 */ "\xfe\x0c\xf9\xb7\x5f\x09\x38\x10\x38\x58\xc7\x9a\x76\xf3\x2c\x70" //...._.8.8X..v.,p |
/* 0020 */ "\xab\x9f\x31\x71\xf0\xab\x8f\x2d\xf2\x70\xbf\x79\x09\x01\x87\xc6" //..1q...-.p.y.... |
/* 0030 */ "\x68\x00\x20\x92\x98\x19\x45\x2a\x97\x52\x85\x54\x88\x00\x20\x2c" //h. ...E*.R.T.. , |
/* 0040 */ "\xb3\x1a\x11\xa1\x6c\x06\x4d\x39\xa3\x85\x28\xf6\xcc\x30\x0c\x76" //....l.M9..(..0.v |
/* 0050 */ "\xcc\x79\x76\x89\x00\x00\xd8\x7c\xb7\x8a\xf8\x01\x2e\x06\x04\x79" //.yv....|.......y |
/* 0060 */ "\x72\xc7\x7c\xa9\x1c\x73\x1e\x54\x8c\x17\x19\x7e\x3f\x79\x2f\x0e" //r.|..s.T...~?y/. |
/* 0070 */ "\x3b\xaf\x1b\xcf\x90\xef\x8e\x8c\xc8\x00\xe9\xe0\x92\x98\x0b\x7a" //;..............z |
/* 0080 */ "\x8d\x00\x00\x54\x86\x06\x72\x85\x5a\x5a\x8d\x29\x18\x53\x4d\x48" //...T..r.ZZ.).SMH |
/* 0090 */ "\x69\xe0\x8a\x3d\xbc\xcc\x02\x1d\xbc\xde\x34\xa2\x50\x00\x39\xaf" //i..=......4.P.9. |
/* 00a0 */ "\x40\x7c\x66\x60\x24\xdd\x6a\x9e\xc6\xa1\x1e\x66\x2e\x80\xd1\xda" //@|f`$.j....f.... |
/* 00b0 */ "\x12\xab\xd0\xba\x00\x28\xf3\xd8\xc7\x34\xaa\xe6\xa9\x3c\xd7\xa7" //.....(...4...<.. |
/* 00c0 */ "\x9b\x44\xf3\x72\x9e\x6f\x93\xce\x1a\x79\xc8\x4f\x39\xa9\xe7\x49" //.D.r.o...y.O9..I |
/* 00d0 */ "\x3c\xeb\x80\xfc\xfd\x1c\x02\x30\xe1\x87\x1f\x8e\x01\xfa\x00\x3a" //<......0.......: |
/* 00e0 */ "\x03\x3f\x0b\x04\x01\x01\xf9\xf6\xb8\x06\xe3\xd0\x11\xe2\x70\x8f" //.?............p. |
/* 00f0 */ "\x6f\x79\x8f\x03\xf3\xf3\x70\x0f\xc3\xa0\x54\x40\x70\x4e\xfc\x78" //oy....p...T@pN.x |
/* 0100 */ "\x52\x3a\x01\x7a\xe3\xfc\xff\xdc\x72\x03\x14\x3e\xfc\x87\x62\x9a" //R:.z....r..>..b. |
/* 0110 */ "\x10\x2c\x96\x03\x57\x39\xa6\x1a\x90\xc1\x55\x0a\x5c\xca\x62\x26" //.,..W9....U...b& |
/* 0120 */ "\x33\x03\x15\x04\xa7\x2e\xc9\xc7\x7e\xf0\x65\xec\x03\x71\x0f\x81" //3.......~.e..q.. |
/* 0130 */ "\x1d\x01\xa3\xbf\xb0\x3f\xbb\xb3\x98\xb8\x43\xe4\xaf\x3d\xd0\x23" //.....?....C..=.# |
/* 0140 */ "\xb7\x04\xdd\xbc\x7b\x11\x3f\x14\xc7\x6a\x80\xfc\x07\xb5\xd4\x8f" //....{.?..j...... |
/* 0150 */ "\x00\x60\xeb\x88\x0f\xee\xae\xfa\x49\xd7\x7a\xac\x7b\x6e\xbb\xaf" //.`......I.z.{n.. |
/* 0160 */ "\x48\xfc\x06\x61\xdb\x19\xdc\x9d\x81\x75\x5d\x74\x1d\xf2\xe4\x67" //H..a.....u]t...g |
/* 0170 */ "\x04\x57\xc7\x83\x27\xbd\x43\xc0\xf6\x7a\x01\x81\x79\x60\x36\x03" //.W..'.C..z..y`6. |
/* 0180 */ "\x3b\xfc\x30\xef\xe0\x28\xf1\x44\xf7\xb2\x93\xc0\x0c\x0e\x67\x01" //;.0..(.D......g. |
/* 0190 */ "\x9d\xf2\x6b\xfc\x03\x38\x44\x47\x07\x97\x62\xdd\x09\xc0\x29\x63" //..k..8DG..b...)c |
/* 01a0 */ "\xcf\x70\x18\xfe\x13\xfa\x9e\xc5\xcc\x1f\x68\xbf\xdf\xe7\x55\x60" //.p........h...U` |
/* 01b0 */ "\xee\x2a\x4a\x5c\x78\x1f\xb5\xba\xe0\x04\x09\xd8\x96\x39\x82\xc6" //.*J.x........9.. |
/* 01c0 */ "\x0c\xc4\x8e\xd0\xf3\xda\xbe\x3d\x5c\xc2\x9f\x4e\xc5\x51\xc1\x61" //.......=...N.Q.a |
/* 01d0 */ "\x70\xa8\x03\x78\x6e\x09\xf0\x72\x56\xc5\x1e\x78\x76\x88\xe4\x00" //p..xn..rV..xv... |
/* 01e0 */ "\x06\xec\xe5\x7c\x54\x98\x15\x55\xd9\xca\xb0\x5f\xd2\xbc\x0f\xe1" //...|T..U..._.... |
/* 01f0 */ "\x37\x84\xa3\x02\x95\x61\x85\x66\x76\x0e\xed\x21\x31\x00\x12\x8e" //7....a.fv..!1... |
/* 0200 */ "\x29\x3b\x14\xf6\x90\xdb\x07\x59\xc7\x0b\x20\x4e\x07\x53\x5b\xf0" //);.....Y.. N.S[. |
/* 0210 */ "\x1d\x94\xc0\x65\x4a\x4d\x5c\x78\x02\xb8\x1f\xc5\xf3\x4d\xad\x6d" //...eJM.x.....M.m |
/* 0220 */ "\x7f\x34\x29\xc3\x3e\xb8\x33\x07\xb8\x5b\x1b\x3e\x90\x4f\xfa\x3b" //.4).>.3..[.>.O.; |
/* 0230 */ "\xec\xb0\x1b\xd5\x40\x43\x18\xf0\x10\xdb\x04\x5e\xbe\xa6\xcd\xdf" //....@C.....^.... |
/* 0240 */ "\x50\x23\xc4\x4e\x3e\xa6\x25\x8c\x6d\xff\x51\xd0\xb2\x3c\x1c\xb1" //P#.N>.%.m.Q..<.. |
/* 0250 */ "\xe0\xb5\x47\x0f\xa3\x87\xd2\x07\xf8\xd5\xf4\x9c\x50\xe7\xf4\xce" //..G.........P... |
/* 0260 */ "\x08\xcd\x7d\x70\x77\x13\xc8\x09\xc2\x80\x8f\xe3\x03\xd8\x1d\x49" //..}pw..........I |
/* 0270 */ "\xe6\x00\x4f\xb8\xd4\x00\x4c\x0c\xb6\x99\x45\x30\x4e\x5b\x02\x51" //..O...L...E0N[.Q |
/* 0280 */ "\x4e\x01\xaa\x8f\xd2\xeb\x86\xe1\x1f\x1e\x00\x96\xd6\xbc\x2d\xb4" //N.............-. |
/* 0290 */ "\x00\x0c\xe1\x81\x1e\x15\x9c\x08\x25\x1e\x2c\x3a\x7d\x50\x5f\x17" //........%.,:}P_. |
/* 02a0 */ "\xda\xfe\x33\x82\x51\x9d\x85\x1e\x48\x8b\x7b\xdb\xaf\xdc\x05\x78" //..3.Q...H.{....x |
/* 02b0 */ "\xe5\xf4\x9c\x68\xe7\xd6\x53\x83\x42\x63\xc2\x55\x2e\x73\x76\xfc" //...h..S.Bc.U.sv. |
/* 02c0 */ "\x20\x9f\x41\xbe\x93\xf0\xcf\x95\x1e\x1e\xbf\x75\x3d\xbb\x76\xf7" // .A........u=.v. |
/* 02d0 */ "\xb7\x7f\xcc\x08\xe3\xad\x5e\x28\x9e\x3e\x93\xe0\xc9\xfd\x73\xe6" //......^(.>....s. |
/* 02e0 */ "\x37\x6f\x8a\xfe\x80\xfe\xe5\xb0\x8a\x52\x21\xec\xa5\x0a\x96\xb5" //7o.......R!..... |
/* 02f0 */ "\xe2\x78\x0b\xf3\x48\x43\x92\x8a\x84\x69\x25\xfb\x21\xbe\x42\x0a" //.x..HC...i%.!.B. |
/* 0300 */ "\x7c\xa9\x4b\xd9\x4e\x62\x32\x52\x00\x07\x72\xe1\xdd\x8d\xc0\x00" //|.K.Nb2R..r..... |
/* 0310 */ "\xa8\x00\x2a\x10\xc2\x10\xca\x52\xd2\x94\x9a\xd6\xa3\x0c\x34\x92" //..*....R......4. |
/* 0320 */ "\x9c\x51\x87\x2c\xe4\x30\x00\xdb\xde\x13\x02\x0a\x49\x4c\x30\x69" //.Q.,.0......IL0i |
/* 0330 */ "\xe0\xa1\x09\x14\xa5\x04\x22\x04\x21\x06\x31\x85\x29\x36\xb5\xb8" //......".!.1.)6.. |
/* 0340 */ "\xe1\x46\x52\xcd\x38\xf2\xcf\x5f\xbf\xd6\xeb\xd7\x79\xed\xcf\x00" //.FR.8.._....y... |
/* 0350 */ "\xc8\x83\x18\xc2\x10\x89\x08\x48\x00\x28\x63\x12\x63\x19\x52\x94" //.......H.(c.c.R. |
/* 0360 */ "\x39\xce\x25\x85\x0f\xd8\x51\x76\x30\x9b\xc5\x54\xe3\x94\xf7\xbb" //9.%...Qv0..T.... |
/* 0370 */ "\x5a\xd5\x9c\xe7\xcd\x00\x0b\x18\xc5\x1c\xe7\xa1\xa8\x28\x3e\x00" //Z............(>. |
/* 0380 */ "\x1a\x82\x11\x63\x18\x83\x18\x94\x21\x52\xd6\x9b\x70\x4b\xb2\x65" //...c....!R..pK.e |
/* 0390 */ "\x14\x34\xc0\x3d\x0b\x7b\xda\x6b\x5c\xa9\x48\x21\x09\x94\xa6\x86" //.4.=.{.k..H!.... |
/* 03a0 */ "\x30\x40\x00\xc2\x10\x08\x42\xda\xd6\x61\x85\x6d\xd0\xe7\x33\x0f" //0@....B..a.m..3. |
/* 03b0 */ "\xc4\x14\x92\xb8\xc3\x29\xef\x65\x8c\x7f\x8b\x28\x10\x80\x21\x0c" //.....).e...(..!. |
/* 03c0 */ "\x98\xc5\x25\x2a\xd6\xb5\xf8\xa2\xa7\x85\x1c\xdf\x8a\x08\x61\x10" //..%*..........a. |
/* 03d0 */ "\xa5\x2b\x39\xca\x29\x4f\x06\xb7\xe2\x12\x10\xd1\xce\x5f\x70\x52" //.+9.)O......._pR |
/* 03e0 */ "\x7b\x0b\x1b\xc7\x74\xaa\xc1\xdd\x14\x54\x00\x06\x3d\xc6\x37\x11" //{...t....T..=.7. |
/* 03f0 */ "\xc0\x12\xb0\x0c\x1b\x3a\x99\x45\x22\xd3\x58\xd5\x5a\x85\x1e\xbb" //.....:.E".X.Z... |
/* 0400 */ "\xc0\x04\xe3\x55\x68\xb4\xd6\x65\x14\x97\x39\xf5\x7e\x1c\xf1\x20" //...Uh..e..9.~..  |
/* 0410 */ "\x00\x02\x10\xd9\xce\x6d\x6b\x54\xf7\xba\x9c\x72\x6d\x35\x9d\x61" //.....mkT...rm5.a |
/* 0420 */ "\x54\xa3\xed\xbd\xe6\x9d\x85\x10\xe2\x1c\xe7\x2a\x52\xf7\xbc\x4e" //T..........*R..N |
/* 0430 */ "\xaa\xd7\xbc\x25\x68\x28\x42\x20\x00\x85\x29\x5c\xe3\x8b\xb6\xf5" //...%h(B ..)..... |
/* 0440 */ "\x9a\x75\xbd\xee\x0c\x63\x43\x18\x2c\x63\x8b\x4d\x70\xd2\x8a\x6a" //.u...cC.,c.Mp..j |
/* 0450 */ "\x9a\xd7\x63\x18\x65\x29\xa7\xbd\x9c\x61\x63\xc0\xa4\x96\x54\xa4" //..c.e)...ac...T. |
/* 0460 */ "\x82\x10\x10\x84\xe3\x0c\xa1\x56\xeb\xd0\x57\x18\x60\x42\x12\x08" //.......V..W.`B.. |
/* 0470 */ "\x44\xa9\x48\x52\x4b\x70\x00\x0f\xe0\x18\xa9\xc7\x0d\x3d\x0e\xa1" //D.HRKp.......=.. |
/* 0480 */ "\x36\xb5\xc5\x54\x61\x92\xe7\x30\xc6\x36\x94\xaa\x39\xc9\x21\x0f" //6..Ta..0.6..9.!. |
/* 0490 */ "\x0d\x50\x04\x8b\x08\xfc\x2c\xe7\x30\xa5\x22\xc6\x3a\x7b\xdb\x8e" //.P....,.0.".:{.. |
/* 04a0 */ "\x15\xb3\x54\xe3\x86\x1e\xdb\x5a\xd6\x92\x52\x88\x61\x3c\x02\x61" //..T....Z..R.a<.a |
/* 04b0 */ "\xc6\x19\x12\x8a\x5a\xd6\x99\x4a\x48\x00\x24\xc6\x38\x35\x39\x2a" //....Z..JH.$.859* |
/* 04c0 */ "\x52\x89\x42\x94\x81\x3f\xd0\x21\x0a\x5c\xe6\x69\x25\x97\x39\x94" //R.B..?.!...i%.9. |
/* 04d0 */ "\x21\x40\x84\x2c\x63\x10\xa5\x2c\x1b\xbd\x09\xad\x74\x73\x92\x0c" //!@.,c..,....ts.. |
/* 04e0 */ "\x28\xfc\xb5\xad\x11\x41\xad\x6b\x48\xbf\xd1\x47\x39\x4d\x6b\xa5" //(....A.kH..G9Mk. |
/* 04f0 */ "\xad\x60\x38\x17\x0f\x13\x07\xb9\x9e\xf2\xbc\x25\x5d\x04\x1e\xf1" //.`8........%]... |
/* 0500 */ "\x82\xb0\x00\x33\x6f\x78\xe2\x68\x02\x58\x01\x07\x7d\xb7\x9c\x51" //...3ox.h.X..}..Q |
/* 0510 */ "\xb0\x5b\x20\xa6\xc6\x30\x9a\xd7\x84\xb9\x10\x00\x48\xb4\xd4\xb1" //.[ ..0......H... |
/* 0520 */ "\x8e\x87\xc2\x59\x6f\x7b\x59\xe1\x7e\xb9\xc7\x21\x58\x3a\xf0\x50" //...Yo{Y.~..!X:.P |
/* 0530 */ "\x85\x12\x8a\x5e\xeb\xd3\xac\x28\xd4\xb3\x9c\xb0\x84\x52\xd6\x8d" //...^...(.....R.. |
/* 0540 */ "\x30\xc1\xc8\x62\x8d\x84\x0a\x22\xd6\xb4\x71\x46\x8d\x55\x9b\x70" //0..b..."..qF.U.p |
/* 0550 */ "\x3a\x80\x31\x8f\xe5\x47\x1f\x27\xca\x2c\xd3\x9e\x69\xd5\x00\x22" //:.1..G.'.,..i.." |
/* 0560 */ "\xc6\x30\x5c\x2c\x56\x59\xa7\x20\x00\x80\xc3\x53\x5a\xfe\x54\x06" //.0.,VY. ...SZ.T. |
/* 0570 */ "\x60\xfc\x32\x6b\x5c\x6a\xac\x71\x46\xb5\xad\x10\x00\x36\xb5\xce" //`.2k.j.qF....6.. |
/* 0580 */ "\xaa\xc3\x14\x6b\x85\xb8\x17\x91\xa9\x8a\xc7\x80\x05\x58\x47\x6d" //...k.........XGm |
/* 0590 */ "\x0d\xe1\x9f\x16\x31\x8e\x37\xce\x16\xef\x95\x93\x4a\x56\x0f\x02" //....1.7.....JV.. |
/* 05a0 */ "\x07\x60\x7e\x57\x2f\x26\x07\x2f\xaa\x00\x44\x4a\xa7\xc5\xdc\xd2" //.`~W/&./..DJ.... |
/* 05b0 */ "\x95\x63\x18\x91\x08\x14\x7b\x75\x16\x9a\x9a\x71\xa9\x58\xc6\x01" //.c....{u...q.X.. |
/* 05c0 */ "\x08\x61\x4a\x5c\x42\x20\xb1\x8e\x4c\x62\x40\x00\x43\x1b\xb5\xad" //.aJ.B ..Lb@.C... |
/* 05d0 */ "\x44\xa2\x8e\x30\xca\x5f\xb7\xc8\x21\x14\x73\x96\xd6\xbb\x9c\x72" //D..0._..!.s....r |
/* 05e0 */ "\xde\xf7\xfd\xa0\x31\x8d\xc6\x19\x32\x8a\x26\xb5\xe0\xbe\xe7\xca" //....1...2.&..... |
/* 05f0 */ "\x44\xa2\x85\x8c\x74\x73\x92\xc6\x38\x97\x0f\xe7\xfc\x81\x26\x7e" //D...ts..8.....&~ |
/* 0600 */ "\xda\xae\x01\x5a\x10\xe0\x8e\x62\xac\xb7\x9a\xfc\x11\x70\x09\x82" //...Z...b.....p.. |
/* 0610 */ "\xc0\x00\x33\x4e\x01\x38\x99\x00\x96\x80\x40\x04\x6d\x6b\x48\x21" //..3N.8....@.mkH! |
/* 0620 */ "\x10\xe7\x3f\x49\xc5\x2d\x69\x87\xe5\x39\x0d\x44\xa9\x49\x84\x22" //..?I.-i..9.D.I." |
/* 0630 */ "\x5c\xe7\x7b\xaf\x55\xfe\x53\x06\xbd\xc7\xca\x88\x52\x96\x0d\xaa" //..{.U.S.....R... |
/* 0640 */ "\x81\xcb\x3c\xda\x6b\xf2\xa2\xde\xf6\x79\x67\x8b\x4d\x5a\x52\xa8" //..<.k....yg.MZR. |
/* 0650 */ "\x63\x02\x10\x4f\x95\x09\x3e\x5b\x08\x61\x5f\x83\xac\xb5\x25\x2a" //c..O..>[.a_...%* |
/* 0660 */ "\x0c\x62\xf3\x4e\xc0\x73\xe0\x0b\x9e\x18\x8a\x41\x8c\x53\x5a\xc8" //.b.N.s.....A.SZ. |
/* 0670 */ "\x60\x7e\x95\x8e\x03\x71\x53\x8e\x02\xc1\xfe\xa4\x16\x61\x2f\xd1" //`~...qS......a/. |
/* 0680 */ "\x63\x1f\xe8\x82\x1b\x85\x00\x16\x25\x5b\xaf\x51\xce\x7d\xef\xa7" //c.......%[.Q.}.. |
/* 0690 */ "\xca\xe2\xe3\x8e\x0e\xf4\x50\x21\x0b\x80\x4b\x80\x7a\xe0\x00\x12" //......P!..K.z... |
/* 06a0 */ "\xc5\x16\x9a\xc0\x00\x94\x78\xc0\x1b\x5a\xea\x78\x5c\x61\x6b\x5a" //......x..Z.x.akZ |
/* 06b0 */ "\xf9\x54\x61\x04\xa5\xfc\xa4\x39\xce\xe7\xf2\xa4\xa3\xe5\x62\x8a" //.Ta....9......b. |
/* 06c0 */ "\x52\xa3\x0c\x0c\x63\x00\xc1\xc4\x03\x08\x20\x21\x09\x42\x11\xa4" //R...c..... !.B.. |
/* 06d0 */ "\x94\x21\x08\x10\x84\xc2\x08\xdb\xdc\x01\x4b\x5a\x05\xc1\xb3\xcc" //.!........KZ.... |
/* 06e0 */ "\x03\xf6\xc1\x3e\x8f\xa9\x18\x40\x49\x81\x97\x8a\xb2\xdc\x3a\x1a" //...>...@I.....:. |
/* 06f0 */ "\xaf\x70\x04\x8e\x01\x6e\x02\x31\x4b\x5a\xe0\x3a\xe2\xa1\x45\xbc" //.p...n.1KZ.:..E. |
/* 0700 */ "\xa0\x76\x2e\x00\x01\xe0\xf4\x79\xa7\x49\xbd\x32\x21\x84\xa6\xb5" //.v.....y.I.2!... |
/* 0710 */ "\xc1\x8c\x70\xb2\x94\x00\x60\x17\x27\xd4\x80\xc6\x32\x18\x06\x00" //..p...`.'...2... |
/* 0720 */ "\x40\x32\x94\xe1\x5c\x38\x20\xfa\xa8\xd5\x5a\x8f\xc1\xf5\x5f\xbf" //@2...8 ...Z..._. |
/* 0730 */ "\xfd\x48\xc2\xbc\x70\x40\x01\x12\xfa\x93\x6b\x5a\xaf\xdf\xdb\x7e" //.H..p@....kZ...~ |
/* 0740 */ "\xa4\x8a\x49\x7e\xa4\x4e\xbe\xa4\xcf\xae\xed\xad\x68\xa5\x3c\xf4" //..I~.N......h.<. |
/* 0750 */ "\x21\x04\x23\xea\x47\x2c\xc8\x9f\x5d\xfd\x31\x00\x00\x11\xaa\xb7" //!.#.G,..].1..... |
/* 0760 */ "\x57\x53\x5e\x12\xc5\x8b\x80\x08\x79\x0c\x1f\xd3\x70\x11\xe9\xb1" //WS^.....y...p... |
/* 0770 */ "\x47\xa1\xe7\x8c\x02\x00\x2a\x18\xc6\xa3\x0c\xfa\xb8\x70\x62\x8e" //G.....*......pb. |
/* 0780 */ "\x97\x4e\x35\x25\x18\x61\x27\xd4\x60\x6d\x88\xb5\xad\x08\x61\x2b" //.N5%.a'.`m....a+ |
/* 0790 */ "\xf9\xfa\x95\x67\x39\x14\xfd\x17\xf5\x22\xd6\xb5\xf5\x30\xe1\x3d" //...g9...."...0.= |
/* 07a0 */ "\x5f\x52\x9c\x61\x9c\xb2\xa3\xea\x47\x83\x21\x46\x18\x92\x95\x85" //_R.a....G.!F.... |
/* 07b0 */ "\xdb\x52\xd2\x42\x1e\x4d\xac\x34\xda\xf7\xa7\x0f\xbc\x68\xb8\x00" //.R.B.M.4.....h.. |
/* 07c0 */ "\x0e\xc3\xce\x25\xef\x1a\xaf\x80\x17\x80\x46\x6b\x75\xea\x5a\xd4" //...%......Fku.Z. |
/* 07d0 */ "\xb9\xce\xaf\x3d\x81\x60\x7b\x24\x29\x4a\xde\xf7\x16\x9a\xd0\xc6" //...=.`{$)J...... |
/* 07e0 */ "\x17\x6d\xfe\x0d\x85\x59\x68\x21\x0c\x7a\xef\xcd\x8e\x05\x24\xa8" //.m...Yh!.z....$. |
/* 07f0 */ "\xa5\x35\xfb\xfd\x1c\xe6\x65\x14\xa9\xc7\x20\xc6\x24\x31\x86\x52" //.5....e... .$1.R |
/* 0800 */ "\x9b\x9e\x18\xce\x59\xce\x67\xd7\x72\x42\x13\x4c\x32\x62\x28\x42" //....Y.g.rB.L2b(B |
/* 0810 */ "\x7d\xb7\xd8\xc6\x1d\x65\xbc\x84\x20\xf2\xcf\x22\x10\x9b\x4d\x69" //}....e.. .."..Mi |
/* 0820 */ "\xef\x72\xa5\x2b\xdd\x79\x84\x22\xef\x3d\x87\x39\xc0\x84\x30\x8b" //.r.+.y.".=.9..0. |
/* 0830 */ "\x20\x3e\x2e\xe3\x0c\xa3\x9c\xe1\x06\xc7\x67\xc4\x4a\x29\x26\xea" // >........g.J)&. |
/* 0840 */ "\x0c\x97\x7d\x95\x4e\x38\xca\x53\xd2\xf6\x24\x42\x17\x38\xe7\x34" //..}.N8.S..$B.8.4 |
/* 0850 */ "\x88\xe7\xc5\x02\x92\x52\x42\x1e\x0d\x68\xd0\x27\x86\xd6\x3e\x7f" //.....RB..h.'..>. |
/* 0860 */ "\x80\xc6\x32\x42\x11\x4c\x27\x06\xe4\x4b\x09\xbc\x46\x92\x21\x0e" //..2B.L'..K..F.!. |
/* 0870 */ "\x86\x11\x06\xe7\x3c\x61\x08\xa7\xbd\xc2\x94\xa4\xc6\x31\x28\xa2" //....<a.......1(. |
/* 0880 */ "\x08\x45\xbd\xed\x25\x29\x84\x21\x80\x3b\xd7\xb9\x74\xa6\x8c\x1e" //.E..%).!.;..t... |
/* 0890 */ "\x43\x25\xe0\x00\x72\x6e\x1c\xb8\xc9\x00\x4c\x00\x02\x7b\x8d\xbb" //C%..rn....L..{.. |
/* 08a0 */ "\xb5\x4e\x01\xf5\xd0\x27\x08\x8e\xb0\x81\xf0\x7b\x05\x3e\x3b\x7f" //.N...'.....{.>;. |
/* 08b0 */ "\xcf\x56\xb0\xff\xcc\x36\xf6\x83\x8e\xc6\x53\xd0\xf9\xf4\x63\x81" //.V...6....S...c. |
/* 08c0 */ "\x6b\x00\xf9\xd4\x09\x87\xf8\x61\xc6\x41\xf4\xf9\x64\xdd\x99\x1f" //k......a.A..d... |
/* 08d0 */ "\x4f\x2f\xf3\x3d\xa9\xe7\x90\x2b\xc1\x51\x80\x6a\x23\xbb\x5e\xdf" //O/.=...+.Q.j#.^. |
/* 08e0 */ "\x5a\x39\xe1\x3b\x88\x58\x42\x16\x02\x3d\x00\x03\xf9\x61\x84\xdd" //Z9.;.XB..=...a.. |
/* 08f0 */ "\x27\x8c\x3c\x77\x6c\x9c\x14\x91\x25\x08\x5d\xda\xa7\x03\x25\x02" //'.<wl...%.]...%. |
/* 0900 */ "\xb8\x51\xbf\x73\xff\xdf\x9c\x23\xcf\x4f\x09\xd7\x5b\xe7\xd4\x8f" //.Q.s...#.O..[... |
/* 0910 */ "\x14\xcf\x70\x09\xf0\xc4\xf7\x68\xc3\xed\xc7\x97\x03\xfd\xd9\xfa" //..p....h........ |
/* 0920 */ "\x3f\x04\x4b\xbb\x9d\xc7\x9e\xa7\xf0\x4f\x9f\xe7\xc3\x73\xed\xf8" //?.K......O...s.. |
/* 0930 */ "\xf6\x9e\x1e\x05\x9e\xec\xbd\x9f\xbe\x3b\xb4\x40\xdf\x85\xdd\xd7" //.........;.@.... |
/* 0940 */ "\x63\x8c\x2b\xeb\xb0\x14\x18\x67\xe3\xbb\xaf\xc5\x2d\x68\x43\xcd" //c.+....g....-hC. |
/* 0950 */ "\xb3\x01\xf3\x6a\x54\xa5\xdd\xa8\x31\xc1\xe6\x0c\x00\x00\xd3\xf8" //...jT...1....... |
/* 0960 */ "\xb6\xe2\x9a\x00\x63\x80\x7b\x79\xc3\x81\xb0\x0e\xbe\x1e\xdd\x60" //....c.{y.......` |
/* 0970 */ "\x9d\x46\x01\x8f\x8c\x03\x2c\xc0\x32\x4c\x03\x1f\x18\x06\x59\x82" //.F....,.2L....Y. |
/* 0980 */ "\x79\xb1\xc1\x2f\x0c\x30\x4b\x97\x88\xa0\xc4\x00\x0f\xa9\x8b\xc4" //y../.0K......... |
/* 0990 */ "\x56\xd2\x00\x65\xd3\x91\x80\x7d\x39\x41\x30\x50\x23\x08\x13\x78" //V..e...}9A0P#..x |
/* 09a0 */ "\x43\xc1\x1f\x48\x40\x03\x80\x80\x67\x0c\x06\xf7\x53\x80\x70\x10" //C..H@...g...S.p. |
/* 09b0 */ "\x7c\xd4\x00\x4c\x80\x00\xc1\xf8\xae\x62\x0a\x02\x67\x80\x83\xea" //|..L.....b..g... |
/* 09c0 */ "\x1f\x43\xa0\x09\xd0\x64\x70\x12\xba\x2f\x90\xe2\x25\x85\xfb\xe4" //.C...dp../..%... |
/* 09d0 */ "\x54\x12\x03\x10\xfa\xc5\x44\x5a\x80\x11\x91\x56\x04\xff\x8c\x23" //T.....DZ...V...# |
/* 09e0 */ "\x36\x15\xc0\x47\x0c\x23\x75\x18\x3d\xb3\x0f\x18\x46\x18\x0a\x99" //6..G.#u.=...F... |
/* 09f0 */ "\x10\x86\x01\x8b\x9e\x75\xae\x82\xb0\x03\xe0\x38\xf2\xfa\x7f\x85" //.....u.....8.... |
/* 0a00 */ "\x25\xe3\x81\x23\x86\x28\x7b\x07\x5a\xb0\x0d\xf8\x7b\xae\x63\x8f" //%..#.({.Z...{.c. |
/* 0a10 */ "\x28\x77\xe7\x5f\x07\x53\x17\xcf\x0e\x60\xf8\xab\xc0\x8c\xee\x63" //(w._.S...`.....c |
/* 0a20 */ "\x2c\x1a\x48\xc1\xf4\xf5\x80\x79\x18\x57\x9d\xe2\xc8\x20\xf3\xcb" //,.H....y.W... .. |
/* 0a30 */ "\xc2\xf0\x48\x42\x39\x83\xfc\x66\x2d\x35\xc1\x1c\xa1\x8c\x05\xd3" //..HB9..f-5...... |
/* 0a40 */ "\x02\x0c\xa5\x38\x6b\xf1\x67\x39\xc1\x77\xf1\x82\xff\xe7\x0e\x2e" //...8k.g9.w...... |
/* 0a50 */ "\x3c\x06\x19\xe3\xbd\x03\xdc\x38\xdd\x1e\x60\x63\xe6\xce\x02\x85" //<......8..`c.... |
/* 0a60 */ "\x78\xce\x61\x4a\x4d\x1f\x50\x2f\xc3\x85\xf3\x5d\x31\x58\x02\xc0" //x.aJM.P/...]1X.. |
/* 0a70 */ "\x03\xc9\xda\x4c\xc0\x00\xed\xbe\xda\xc6\xd6\x02\x69\x88\x49\x68" //...L........i.Ih |
/* 0a80 */ "\xe2\x8d\x40\xe1\x18\xf3\x14\x61\xec\x90\xee\x16\x0e\x1e\x59\xd8" //..@....a......Y. |
/* 0a90 */ "\x31\x15\x10\x6f\x03\x18\xb8\x1b\x40\xd7\x02\x13\x00\x2f\x11\x88" //1..o....@..../.. |
/* 0aa0 */ "\x59\xa7\x30\x03\x7b\x69\x87\x63\x18\x25\xd1\x53\x8e\x61\x91\x98" //Y.0.{i.c.%.S.a.. |
/* 0ab0 */ "\x16\xfd\xec\x2b\x09\x1c\x28\xcc\x01\x38\x64\xa0\x43\xef\xc8\x14" //...+..(..8d.C... |
/* 0ac0 */ "\x81\x54\xe3\x9c\x87\xde\x0b\x87\xdb\x7b\x00\x5d\xfe\xfe\x27\xe0" //.T.......{.]..'. |
/* 0ad0 */ "\x38\x0c\xbf\xdf\xc4\xbd\x2e\xc2\xbc\xd0\x23\x87\xd1\x1f\x87\x2c" //8.........#...., |
/* 0ae0 */ "\x2f\x08\xa0\x00\x7a\x61\xf2\xc3\xde\xba\x5d\xe7\xac\x1c\xbb\x98" ///...za....]..... |
/* 0af0 */ "\x0a\x3d\x4f\x34\x92\xd3\xa4\x58\x74\x6e\x10\x42\x30\xd8\xfc\x70" //.=O4...Xtn.B0..p |
/* 0b00 */ "\x0a\x50\x03\x13\x5a\xf8\x0c\x24\x42\x0c\x18\x9d\x24\x3b\xc7\x2c" //.P..Z..$B...$;., |
/* 0b10 */ "\xc0\x05\xc0\x6d\xeb\x03\x06\x16\x63\x0d\xe1\x91\x0b\xe0\x06\x60" //...m....c......` |
/* 0b20 */ "\xc3\xf9\xc1\xae\x58\xe6\x0c\x3d\xa8\x19\xc3\x27\x97\xc9\x8c\xc0" //....X..=...'.... |
/* 0b30 */ "\x0d\xee\xa8\xb5\xad\x30\x03\xfb\x79\xe0\x87\x22\xb0\xf7\x31\x13" //.....0..y.."..1. |
/* 0b40 */ "\x07\x64\x40\xb7\x25\x13\x06\x0f\x7d\x60\x42\x48\xe5\x0e\xe0\x09" //.d@.%...}`BH.... |
/* 0b50 */ "\x0c\x01\x40\x18\x73\x2d\xd0\x72\x3e\x7a\xce\x72\xc0\x16\x01\x85" //..@.s-.r>z.r.... |
/* 0b60 */ "\x83\x18\x00\x5a\x3e\x7b\xba\x00\x33\x02\x07\xc7\x83\x18\x65\x5c" //...Z>{..3.....e. |
/* 0b70 */ "\x23\xfd\x5c\x8a\x83\xdc\x99\x9c\xfb\x60\x43\xe7\xbf\xac\x94\x21" //#........`C....! |
/* 0b80 */ "\x30\x07\xfc\xf7\x69\x40\x00\xfe\x16\x1f\x8b\x85\x03\x04\x9a\xc7" //0...i@.......... |
/* 0b90 */ "\x0e\xe7\x2c\xe1\xce\x15\x88\x60\x2d\xb8\x21\x80\x08\xa8\xe0\x2d" //..,....`-.!....- |
/* 0ba0 */ "\xcb\xbf\xdf\xf0\x16\xdf\xcc\x10\xdc\x10\x30\x6e\x4c\x9a\x00\x01" //..........0nL... |
/* 0bb0 */ "\xd0\x79\x2d\xe3\x3f\x00\x35\xc3\x06\x2a\xff\x05\x55\x6e\xbc\x45" //.y-.?.5..*..Un.E |
/* 0bc0 */ "\x01\x10\x82\x0b\xdc\x04\x81\x20\x33\xeb\xb8\x96\x16\xf8\x50\x99" //....... 3.....P. |
/* 0bd0 */ "\x4a\x79\xc0\x85\xe8\x00\x66\x92\x56\x0c\x39\x12\x81\x76\x57\x8a" //Jy....f.V.9..vW. |
/* 0be0 */ "\x00\x46\x08\xca\x03\x75\x6a\x33\x96\x31\xdc\x20\x01\x18\x0a\x5b" //.F...uj3.1. ...[ |
/* 0bf0 */ "\x21\x8a\x36\x02\x96\xfa\x9b\xbc\xf7\x01\x4b\x69\xe9\x4a\x35\x00" //!.6.......Ki.J5. |
/* 0c00 */ "\x03\x8a\xf8\xc5\xe9\x4a\x89\x80\x1b\x77\x86\x5c\x10\x01\x28\x06" //.....J...w....(. |
/* 0c10 */ "\x09\xad\x78\x62\x08\x58\xc7\x18\xc0\x41\xbb\x5f\xf0\xaf\xa3\x01" //..xb.X...A._.... |
/* 0c20 */ "\x06\x77\x10\xc0\x01\xf0\x10\x6f\x8d\xd2\x09\xd5\x01\x80\x80\xe3" //.w.....o........ |
/* 0c30 */ "\xe5\x46\x02\x0d\xeb\xf3\x45\x1b\x00\x01\xc4\xfc\xd1\x8c\x44\x00" //.F....E.......D. |
/* 0c40 */ "\xdf\xcd\x18\x38\xc3\x3c\xd0\xa9\xc7\x22\xb8\x05\xaf\xca\x21\xc3" //...8.<..."....!. |
/* 0c50 */ "\x5c\xcc\x02\xd7\x58\x0b\x6d\x80\x5b\x3c\xcc\x02\xb1\x18\x05\xb2" //....X.m.[<...... |
/* 0c60 */ "\x30\x03\xfc\x62\x3e\x48\xc0\x2d\x9a\x5c\x10\x7c\xcd\x26\xe0\x00" //0..b>H.-...|.&.. |
/* 0c70 */ "\x73\x2f\x33\x63\x30\x00\xc2\x59\xa0\xde\x53\x63\x2f\x35\x28\xee" //s/3c0..Y..Sc/5(. |
/* 0c80 */ "\x30\xcc\x3b\x8e\xa0\x0a\xba\xcb\x40\x68\x18\x6c\x85\x47\xc1\xf6" //0.;.....@h.l.G.. |
/* 0c90 */ "\xe1\x8a\x33\x00\xc7\xfa\x23\x84\x60\x97\xc0\x06\x02\xec\x54\xe3" //..3...#.`.....T. |
/* 0ca0 */ "\x80\x30\x01\xec\x01\xad\x1e\x17\x8c\x01\xd5\xc5\xf5\x23\x00\x74" //.0...........#.t |
/* 0cb0 */ "\xfc\xff\x02\xba\x38\x00\x03\x9b\xf3\xa7\xc6\x6a\x02\x72\x00\x40" //....8......j.r.@ |
/* 0cc0 */ "\x05\xce\x96\x39\xd6\x30\xc0\x02\x7d\x77\xc2\x53\xb1\x87\x1c\x47" //...9.0..}w.S...G |
/* 0cd0 */ "\x96\x7c\x21\xf5\x3c\x8d\xa3\xb1\x92\xff\x7f\xc1\x49\xaf\x8f\x0b" //.|!.<.......I... |
/* 0ce0 */ "\x38\x29\x65\xce\x8a\x3e\x64\x79\xf8\x3f\x86\x0e\xdf\xa2\xfb\x72" //8)e..>dy.?.....r |
/* 0cf0 */ "\x07\xf0\xe5\x05\xd7\xfe\xdc\x78\x16\x3e\xee\x3f\xfa\xe2\xd8\x3a" //.......x.>.?...: |
/* 0d00 */ "\xe9\xf7\x9c\x0d\x9f\x7b\x57\xdb\x7f\x3a\x28\xa7\x82\x61\xc0\x78" //.....{W..:(..a.x |
/* 0d10 */ "\x60\x10\xbf\xdf\xe9\xfc\xce\xc0\x44\x3c\xe7\x9c\xbf\x0b\xbf\x95" //`.......D<...... |
/* 0d20 */ "\x4d\xe2\x2e\x11\xfd\x0f\x03\x6c\xe3\xe6\x97\xce\x60\xc6\x07\xd5" //M......l....`... |
/* 0d30 */ "\x87\x59\x6f\xc7\x79\xfa\xbe\x73\xf5\x5e\x0f\x89\x8c\x44\x3e\xf1" //.Yo.y..s.^...D>. |
/* 0d40 */ "\x3d\xf9\xf2\x3e\x3b\xcb\x81\xfe\xca\x0f\x99\x3f\xda\x7f\x0e\x23" //=..>;......?...# |
/* 0d50 */ "\x18\x3f\x09\xf1\xd8\x3e\xea\x38\x4b\xbe\x64\xf8\x0a\x3b\x51\x3e" //.?...>.8K.d..;Q> |
/* 0d60 */ "\x64\xf8\xe2\x7f\x6e\x38\x2a\xf0\x3f\xcb\x45\xf1\x58\x12\x70\x1e" //d...n8*.?.E.X.p. |
/* 0d70 */ "\x05\xf2\xe0\x42\x2d\x80\x66\xfc\xc2\x18\xde\x01\x9b\x8b\xfd\xff" //...B-.f......... |
/* 0d80 */ "\x00\xcd\xfa\x18\x48\xbe\x38\x45\x51\xc8\x00\x1d\xdb\x8a\x7e\x37" //....H.8EQ.....~7 |
/* 0d90 */ "\x40\x03\xac\x33\x11\x99\x5d\x17\xb4\x84\xd6\xa2\x78\x04\xa6\x3b" //@..3..].....x..; |
/* 0da0 */ "\x87\x3b\x3e\x30\xca\xbd\x0c\xdb\xfb\x49\xc4\x06\xbb\x0b\x15\xea" //.;>0.....I...... |
/* 0db0 */ "\x99\x18\x05\x28\x2b\xd9\xf1\x50\x02\xc1\xdb\xce\xc4\xee\xd2\x71" //...(+..P.......q |
/* 0dc0 */ "\xf1\xc3\x1d\x9f\x18\x30\xda\xbb\x0a\x46\x0c\x1c\x2a\xcb\x6e\x11" //.....0...F..*.n. |
/* 0dd0 */ "\x80\x58\x0f\xae\x43\xf8\x2e\xce\x38\x14\x47\xcc\x7b\x16\x2e\xff" //.X..C...8.G.{... |
/* 0de0 */ "\x3a\xb8\x1b\x5f\x00\x09\xe1\x7b\x5f\x39\xc0\xbe\x3d\xad\x03\xfc" //:.._...{_9..=... |
/* 0df0 */ "\x66\xd8\x43\x81\xda\x16\x3e\x28\x62\x8b\xe3\x67\x5a\x87\x5f\xb0" //f.C...>(b..gZ._. |
/* 0e00 */ "\xdf\x3f\xa7\x68\x2a\xed\x12\x1d\xc0\x12\xc5\x18\x67\x68\x29\x55" //.?.h*.......gh)U |
/* 0e10 */ "\x96\x8f\x76\x71\x8c\x01\x51\x18\x02\x8e\x7e\x64\xe0\x1e\xbc\x70" //..vq..Q...~d...p |
/* 0e20 */ "\x06\xb4\xf4\x7b\x7d\xf8\xc0\x27\x61\x6f\x64\xc1\xd6\x00\x15\xd8" //...{}..'aod..... |
/* 0e30 */ "\xef\x00\x3b\xf4\x60\xb9\xb7\xb2\x18\x4d\x97\xc0\x1e\x08\xc4\x18" //..;.`....M...... |
/* 0e40 */ "\xcf\xa0\xfb\xb7\x86\x8b\x3a\xe8\x18\x56\xaa\x4e\xc0\x00\xf0\x2a" //......:..V.N...* |
/* 0e50 */ "\xe3\xc7\xd6\xda\x00\x79\x80\x24\xf8\x6e\xf3\xda\x58\x84\x12\xe0" //.....y.$.n..X... |
/* 0e60 */ "\x00\x05\x83\x04\x18\x30\x62\x70\x61\x0c\x62\x33\xd8\xc5\x4a\xb5" //.....0bpa.b3..J. |
/* 0e70 */ "\x5b\xc1\x78\x86\xd6\xb0\x28\x0d\x62\xcb\x4b\x6e\x34\x10\xfe\xf3" //[.x...(.b.Kn4... |
/* 0e80 */ "\x88\xdf\xe3\x00\x64\x17\x9c\x6e\x15\x00\x7e\x27\xcc\x02\x3f\x18" //....d..n..~'..?. |
/* 0e90 */ "\x02\x8e\x70\x5f\x23\x08\x96\x30\xd2\x76\x94\xec\x43\x99\x42\x00" //..p_#..0.v..C.B. |
/* 0ea0 */ "\x47\x80\x00\x78\x24\xc1\xe4\x5b\x7b\x00\x3d\xc0\x12\xee\x19\xb8" //G..x$..[{.=..... |
/* 0eb0 */ "\xf0\x86\x8f\x9a\xc0\x67\x95\x80\x16\x9e\x4d\x9a\x06\x23\x21\x62" //.....g....M..#!b |
/* 0ec0 */ "\x3e\x58\x20\xc1\xf1\x4c\x1d\xbe\xc5\x47\xd1\x83\xbf\xe0\x15\xb8" //>X ..L...G...... |
/* 0ed0 */ "\xd2\x02\x63\x4c\xa0\x09\xc6\x52\xea\x00\x4a\x06\x58\xaa\x6e\x5b" //..cL...R..J.X.n[ |
/* 0ee0 */ "\x5a\xe8\x00\xab\xce\x38\x03\x8e\x64\xe2\xf5\x00\x28\x26\x00\xb2" //Z....8..d...(&.. |
/* 0ef0 */ "\x78\x15\x85\x0c\xd7\xc0\x7f\x00\x30\xdc\x78\x00\x73\x10\xec\xd7" //x.......0.x.s... |
/* 0f00 */ "\xd6\x79\x4d\x40\x03\xf6\xac\x1e\x80\x01\xaa\xf3\x26\xc5\x4c\x04" //.yM@........&.L. |
/* 0f10 */ "\xfb\x00\x06\xd6\x26\xa1\x78\x91\xe4\xd7\x90\x63\x15\x22\x6b\xe3" //....&.x....c."k. |
/* 0f20 */ "\xc8\x0d\xc0\x09\xc0\x2c\x1e\xf6\xa0\x08\x78\xcd\x8a\xa4\x30\xc4" //.....,....x...0. |
/* 0f30 */ "\x8d\xf3\x62\x04\xc3\x4b\xf0\x3b\x03\x4e\x86\x01\xd9\xf0\xd7\x50" //..b..K.;.N.....P |
/* 0f40 */ "\x72\x04\x57\x25\x90\x5d\xd8\xbe\x50\x6e\x03\x67\x9e\xb2\x7c\x80" //r.W%.]..Pn.g..|. |
/* 0f50 */ "\xcc\x08\x3e\x09\x43\xaf\x32\xfc\xa0\xc4\x09\xb6\x18\xc3\x6f\x66" //..>.C.2.......of |
/* 0f60 */ "\xf9\x41\x78\x10\x57\xe6\x33\xfc\xa0\xb4\x06\xcd\x3d\x69\xf9\x01" //.Ax.W.3.....=i.. |
/* 0f70 */ "\x4f\xcc\x91\xd5\x9a\xbe\x50\x4e\x04\x9d\x0c\x21\xb3\xb5\xfc\xa0" //O.....PN...!.... |
/* 0f80 */ "\x94\x0a\x5b\x14\x80\x5d\xdb\x3e\x50\x46\x04\x55\x25\xa0\x5f\xdb" //..[..].>PF.U%._. |
/* 0f90 */ "\x6c\x1e\x49\x62\x0d\x4b\xa0\x00\x60\x29\x84\xb2\xac\xdf\x60\xbf" //l.Ib.K..`)....`. |
/* 0fa0 */ "\xb0\x07\xe1\xd8\x35\x76\xff\x0f\xbb\xd3\xdb\x82\x31\x08\x55\x61" //....5v......1.Ua |
/* 0fb0 */ "\x5c\x00\x10\x42\x10\x0d\x36\xdf\x85\xd2\xe7\x0b\xdd\xc3\x9f\xb1" //...B..6......... |
/* 0fc0 */ "\x41\x7e\xa3\x3a\x7c\x86\x1d\x7e\x9f\x90\xc1\x95\xf1\x83\x30\x40" //A~.:|..~......0@ |
/* 0fd0 */ "\x00\xf8\x02\x35\x7b\xaf\x61\x78\x98\x06\xc0\x21\x45\xdb\x7e\x04" //...5{.ax...!E.~. |
/* 0fe0 */ "\x28\x80\x5f\xa8\x5d\xb7\xbc\xfc\xa8\xc0\x21\xa7\xaf\x90\x04\xfd" //(._.].....!..... |
/* 0ff0 */ "\xc7\xbf\x90\x03\xff\xc7\xcf\x90\xc3\xbb\xd0\xfb\xf2\x00\x3e\x1e" //..............>. |
/* 1000 */ "\x3f\x7c\x86\x10\xb6\x87\xff\x91\x0c\x00\x1f\x19\x81\x87\xe4\xf8" //?|.............. |
/* 1010 */ "\x00\x0f\x81\x23\x81\x45\x80\x01\x1f\xe0\x3b\x46\x21\x3b\x10\xf0" //...#.E....;F!;.. |
/* 1020 */ "\xf6\x9e\x37\x65\xdb\x7f\x3c\xd8\x37\xc3\x69\xb0\x39\x04\x0f\x82" //..7e..<.7.i.9... |
/* 1030 */ "\x14\xc9\x60\x75\x6c\x38\x40\x19\xf9\x66\x89\x6d\x0a\xbd\x20\xbb" //..`ul8@..f.m.. . |
/* 1040 */ "\xb1\xfa\xe0\x2f\x03\x0a\x92\xd0\xeb\xd4\x0b\xff\xbd\x20\x52\x07" //.../......... R. |
/* 1050 */ "\x0c\x8a\x22\x53\xa0\x17\x7f\x77\x40\x8c\x0c\x3e\x09\x27\x9a\x90" //.."S...w@..>.'.. |
/* 1060 */ "\xd9\xfd\xb9\x01\xf0\x3a\x5c\x72\x47\x56\xa0\x5f\xdb\xbe\x60\x33" //.....:.rGV._..`3 |
/* 1070 */ "\x82\x3a\xcd\x3d\x60\xb7\xb8\xfc\xc0\x54\x0e\x59\x14\xfb\x10\xe7" //.:.=`....T.Y.... |
/* 1080 */ "\x60\xbf\xf3\xa3\x60\x06\x68\xe6\x0c\xe3\x3e\xc1\xd1\x33\x89\xc0" //`...`.h...>..3.. |
/* 1090 */ "\x96\xe9\xe9\x15\x9d\xdb\xdf\xec\x03\xb4\x81\x44\x2e\xf0\x2b\xbb" //...........D..+. |
/* 10a0 */ "\xc7\xf4\x01\xc0\xef\xd7\xf6\xbb\x7c\x82\xee\xf5\xfd\x11\x2c\x56" //........|.....,V |
/* 10b0 */ "\xb3\x7c\x2f\x22\x07\x6f\x8e\x41\x3c\x16\x7c\xfa\xef\x42\x46\x2b" //.|/".o.A<.|..BF+ |
/* 10c0 */ "\x34\x90\xb8\x10\x84\x0a\x1b\xe2\x23\xfd\x82\xfe\x3b\xc1\xcd\x03" //4.......#...;... |
/* 10d0 */ "\xab\x30\x00\xd8\x2f\xe3\x70\x32\xe8\x22\x25\x3a\x81\x7f\x60\x02" //.0../.p2."%:..`. |
/* 10e0 */ "\xb0\x5f\xc6\x7c\xca\x05\xa3\x48\x2e\xec\x00\x96\x0b\xf8\xbf\xcc" //._.|...H........ |
/* 10f0 */ "\x51\xa7\xb0\x0b\xbb\x00\x35\x83\x01\x1d\x92\x65\xac\x16\xf6\x00" //Q.....5....e.... |
/* 1100 */ "\x8b\x06\x02\x30\x5a\xe3\x84\x36\x76\x00\xab\x05\xfc\x4b\xc0\x4a" //...0Z..6v....K.J |
/* 1110 */ "\x1d\x79\x80\x32\xc1\x7f\x10\xfd\x4b\x34\xf7\xc0\x40\xdb\x05\xfc" //.y.2....K4..@... |
/* 1120 */ "\x3e\x05\x6a\x8e\x20\x5b\xd8\x03\xec\x17\xf0\xd8\x11\x74\x13\xc4" //>.j. [.......t.. |
/* 1130 */ "\x41\x1b\x05\xfc\x32\x04\xd1\x2d\xf0\xa0\x4a\xc1\x7f\x0a\xe2\x1e" //A...2..-..J..... |
/* 1140 */ "\xb1\x57\x98\x05\x2c\x17\xf0\x8f\xe9\x80\xad\x82\xfe\x0f\x02\xa6" //.W..,........... |
/* 1150 */ "\x47\x18\x6d\xec\x02\xf6\x0b\xf8\x34\x04\x1a\x8c\xc0\x33\x60\xbf" //G.m.....4....3`. |
/* 1160 */ "\x82\x40\x9b\xa1\x80\x36\x76\x01\xab\x05\xfc\x0e\x04\xa5\xe9\xd3" //.@...6v......... |
/* 1170 */ "\x00\xdd\x82\xff\x03\x10\x82\x4e\x6a\xd2\x9b\xbb\x00\xed\x82\xff" //.......Nj....... |
/* 1180 */ "\x02\x96\x45\x24\x37\x7b\x9b\xf6\x1d\xa7\x51\x1b\x82\x29\x0d\xa1" //..E$7{....Q..).. |
/* 1190 */ "\x14\x66\xe0\x88\x11\x65\x9e\x80\xf7\x44\x40\x86\x50\xd8\x21\x94" //.f...e...D@.P.!. |
/* 11a0 */ "\x38\x04\x52\x89\x20\x8a\x50\xe8\x11\xc8\x09\xad\x9e\x84\x32\x01" //8.R. .P.......2. |
/* 11b0 */ "\x01\x86\xcd\x68\x54\x08\xe7\xd2\x88\x04\x53\xef\x3f\x24\x10\x41" //...hT.....S.?$.A |
/* 11c0 */ "\x28\x60\x10\x48\x08\x04\x13\x02\xc1\x20\x31\xbb\xbe\x0e\xfa\x72" //(`.H..... 1....r |
/* 11d0 */ "\xf7\x50\x81\x80\x30\x0a\xcb\x07\x38\xc4\xca\x03\x3d\xe8\x50\xe6" //.P..0...8...=.P. |
/* 11e0 */ "\xe8\xb8\x5b\x7a\x6c\xc9\xf8\x00\x1a\x2f\x2c\xdc\x50\xf1\x74\xe3" //..[zl..../,.P.t. |
/* 11f0 */ "\x83\xf1\x12\x9c\x83\x6f\xa0\x79\x7d\x01\x21\xba\xd0\x00\x80\x2f" //.....o.y}.!..../ |
/* 1200 */ "\x1e\xba\x80\x0b\x04\x04\x06\xeb\x70\x7f\x01\x80\xd8\x6e\x97\x09" //........p....n.. |
/* 1210 */ "\xf8\x0c\x06\x83\x74\xb8\x54\x81\xa8\x56\x07\xba\x25\x01\xee\x87" //....t.T..V..%... |
/* 1220 */ "\x20\x73\xa0\x0a\x40\x1c\xe0\x20\x38\x89\x54\x01\x18\xb9\xe2\xb0" // s..@.. 8.T..... |
/* 1230 */ "\xd6\x03\xe2\x9c\x27\xc6\x2e\xf0\xc6\x25\x80\x08\x20\x1f\x79\x78" //....'....%.. .yx |
/* 1240 */ "\x80\x91\x5b\x28\x1e\xc1\x61\x68\xb0\x0d\x9e\xcb\x3d\x86\x45\x39" //..[(..ah....=.E9 |
/* 1250 */ "\x67\x2c\x17\xfb\x80\x00\x5f\xdc\x46\x20\x36\x26\x1a\x00\xed\x02" //g,...._.F 6&.... |
/* 1260 */ "\x39\xe0\x1c\x50\x40\x00\xea\x5c\xb5\xb1\xa8\x00\xa1\x00\x71\x59" //9..P@.........qY |
/* 1270 */ "\x50\x01\xf8\xb4\x38\x57\xd1\x00\x0f\x17\x1b\x21\x82\x20\x5b\xc9" //P...8W.....!. [. |
/* 1280 */ "\x28\xd2\xb8\xa7\x17\x78\xe2\xc6\x82\x30\x5b\xd1\x29\xd4\xb8\xe7" //(....x...0[.)... |
/* 1290 */ "\xce\xb8\x1c\x02\xee\xc7\xf3\x98\xb1\xf5\xf3\x08\x16\xfb\x2c\xf5" //..............,. |
/* 12a0 */ "\x36\x19\x8b\x51\x9f\x99\x40\xbf\xd0\xab\xc5\x12\x5f\xcd\x83\x07" //6..Q..@....._... |
/* 12b0 */ "\x80\x8d\x9f\x69\xf3\x20\x06\xce\xd1\x2d\xfb\x0f\xcd\x10\x39\x05" //...i. ...-....9. |
/* 12c0 */ "\xdd\x12\x9d\x85\xdd\xdf\x32\x20\xd4\x0b\xfd\x8e\xbd\x2f\x9a\x8e" //......2 ...../.. |
/* 12d0 */ "\x71\x77\xdb\x02\x88\x15\x65\xbc\x5a\x50\x26\x3b\x7b\x95\xbf\x8b" //qw....e.ZP&;{... |
/* 12e0 */ "\xd4\x71\x69\x40\xd8\x6d\xe9\xd6\xfb\xf6\x04\x55\x7f\x67\x86\x80" //.qi@.m.....U.g.. |
/* 12f0 */ "\xd4\x69\x86\x17\x2b\x73\x6f\x61\x61\x78\xc5\x47\x12\xfd\xf6\x12" //.i..+soaax.G.... |
/* 1300 */ "\x0b\xb9\x25\x18\xba\x08\x77\x50\xc2\xc6\xb1\x88\x52\x82\x10\x46" //..%...wP....R..F |
/* 1310 */ "\x00\x0f\xac\xa0\x5f\xc9\x68\xd8\x5f\x25\xfe\xa6\x41\x77\xb2\xcf" //...._.h._%..Aw.. |
/* 1320 */ "\x7c\x91\x84\x02\xef\x26\x9a\xfc\xcc\x10\x2d\xe8\xfe\x60\xc2\x04" //|....&....-..`.. |
/* 1330 */ "\x43\x67\xc3\xed\x81\xef\x95\x14\x2a\xf7\x00\xe0\xf4\x13\x9a\x8a" //Cg......*....... |
/* 1340 */ "\xfe\xc9\x4e\xc2\xfe\x2f\xbf\x1e\x03\x41\xff\xbe\x10\x20\x1b\x3c" //..N../...A... .< |
/* 1350 */ "\xaf\xf0\xe0\x49\x46\xfa\xb8\x30\x5b\xc2\x64\xbe\x00\xa9\x15\x59" //...IF..0[.d....Y |
/* 1360 */ "\x3b\xb2\xca\x07\x60\xbf\xff\x48\xfa\x74\x03\x67\x86\xff\x27\xd3" //;...`..H.t.g..'. |
/* 1370 */ "\x50\x2f\xff\x4f\x09\x15\x5b\xc3\x6f\xa7\x10\x0b\xb9\xa6\x25\xbe" //P/.O..[.o.....%. |
/* 1380 */ "\x7d\x34\x06\x17\xc4\x39\xf4\x4c\x76\xf6\xe8\x63\x00\xff\xd0\x48" //}4...9.Lv..c...H |
/* 1390 */ "\x2e\xf7\x30\x0e\x2f\x6e\x11\x71\xcf\x3d\x40\x02\x88\x88\x50\x07" //..0./n.q.=@...P. |
/* 13a0 */ "\x48\x18\xe0\x2e\xd4\xea\x00\x14\x38\x40\x02\x9b\x01\x9c\xf7\xed" //H.......8@...... |
/* 13b0 */ "\x73\x7b\x5c\x2a\x5c\x4f\xa5\x0b\x87\x33\x85\x2e\x25\x80\x28\x78" //s{.*.O...3..%.(x |
/* 13c0 */ "\xa8\x69\xd7\x23\x0e\x98\xb1\x70\xe9\x76\xe9\x64\xeb\x83\x18\x55" //.i.#...p.v.d...U |
/* 13d0 */ "\xca\xfa\xdf\x46\x2a\x6e\x62\xa7\x7a\xc0\xb4\x2e\x96\x51\x20\x04" //...F*nb.z....Q . |
/* 13e0 */ "\x80\xa4\xe0\x05\xd7\x91\x8c\x94\xef\x4d\x3c\xc1\x0c\x36\xf9\x6f" //.........M<..6.o |
/* 13f0 */ "\x9f\x30\xfb\x6f\x34\xce\x20\x46\x8f\xa2\xb1\x57\xbd\x07\x6c\x16" //.0.o4. F...W..l. |
/* 1400 */ "\xff\x68\xc7\xc9\x48\x2e\xe8\xff\x8e\xa0\x40\x9e\xd9\x8f\xa7\x10" //.h..H.....@..... |
/* 1410 */ "\x3a\xb7\xc9\xb0\x1b\x3f\xee\xc7\xd9\xb8\xb8\x61\x7c\x25\x9c\xe7" //:....?.....a|%.. |
/* 1420 */ "\x11\xae\x4b\x7b\x8d\xbe\x04\xe7\x6f\xae\xdf\xd8\x18\x7c\xe6\x55" //..K{....o....|.U |
/* 1430 */ "\x96\xf4\xa1\x79\x56\x0f\x7a\x4f\x3a\x23\x3b\x9b\xbb\xdb\x5f\x7a" //...yV.zO:#;..._z |
/* 1440 */ "\x1a\xf8\xec\x01\xd5\x18\x06\x39\x88\xe0\x23\xc1\xae\x30\xf1\xdf" //.......9..#..0.. |
/* 1450 */ "\x3e\x3e\x4c\xfd\x28\xfc\x4c\x04\x07\x7f\xa6\x3e\x3b\xfb\xdf\x81" //>>L.(.L....>;... |
/* 1460 */ "\x6f\xc2\x77\xd4\x0d\xdf\xa2\x4f\xb8\x00\xc2\x18\x00"             //o.w....O..... |
// Sent dumped on RDP Client (5) 5229 bytes |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](30) used=141 free=16137 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=68) |
// front::draw:draw_tile((768, 528, 64, 64) (576, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](8208) used=147 free=16131 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](30) used=277 free=16001 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=69) |
// front::draw:draw_tile((192, 592, 64, 32) (0, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](4112) used=283 free=15995 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](30) used=355 free=15923 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=70) |
// front::draw:draw_tile((256, 592, 64, 32) (64, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[6](4112) used=366 free=15912 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[7](30) used=449 free=15829 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=71) |
// front::draw:draw_tile((320, 592, 64, 32) (128, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[8](4112) used=455 free=15823 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[9](30) used=514 free=15764 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=72) |
// front::draw:draw_tile((384, 592, 64, 32) (192, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[10](4112) used=520 free=15758 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[11](30) used=617 free=15661 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=73) |
// front::draw:draw_tile((448, 592, 64, 32) (256, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[12](4112) used=623 free=15655 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[13](30) used=881 free=15397 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=74) |
// front::draw:draw_tile((512, 592, 64, 32) (320, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[14](4112) used=887 free=15391 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[15](30) used=1155 free=15123 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=75) |
// front::draw:draw_tile((576, 592, 64, 32) (384, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[16](4112) used=1161 free=15117 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[17](30) used=1262 free=15016 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=76) |
// front::draw:draw_tile((640, 592, 64, 32) (448, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[18](4112) used=1268 free=15010 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[19](30) used=1321 free=14957 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=77) |
// front::draw:draw_tile((704, 592, 64, 32) (512, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[20](4112) used=1327 free=14951 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[21](30) used=1411 free=14867 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=78) |
// front::draw:draw_tile((768, 592, 64, 32) (576, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[22](4112) used=1417 free=14861 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[23](30) used=1498 free=14780 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=79) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[24](32) used=1504 free=14774 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=200 starty=1198 endx=200 endy=145 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[25](32) used=1532 free=14746 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=200 starty=145 endx=200 endy=1198 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[26](32) used=1538 free=14740 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=201 starty=1198 endx=200 endy=145 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[27](32) used=1546 free=14732 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=200 starty=145 endx=201 endy=1198 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[28](32) used=1556 free=14722 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=1198 starty=200 endx=145 endy=200 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[29](32) used=1571 free=14707 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=145 starty=200 endx=1198 endy=200 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[30](32) used=1577 free=14701 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=1198 starty=201 endx=145 endy=200 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[31](32) used=1585 free=14693 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=145 starty=200 endx=1198 endy=201 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[32](82) used=1595 free=14683 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[33](66) used=1661 free=14617 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[34](66) used=1711 free=14567 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[35](66) used=1761 free=14517 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[36](66) used=1811 free=14467 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[37](20) used=1861 free=14417 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[38](297) used=1881 free=14397 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[39](66) used=1931 free=14347 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[40](66) used=1981 free=14297 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[41](66) used=2031 free=14247 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[42](297) used=2081 free=14197 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[43](82) used=2113 free=14165 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[44](66) used=2179 free=14099 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[45](66) used=2229 free=14049 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[46](297) used=2279 free=13999 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[47](82) used=2311 free=13967 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[48](66) used=2377 free=13901 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[49](66) used=2427 free=13851 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[50](297) used=2477 free=13801 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[51](66) used=2509 free=13769 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[52](66) used=2559 free=13719 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[53](66) used=2609 free=13669 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[54](297) used=2659 free=13619 |
// Widget_load: image file [./tests/fixtures/xrdp24b-redemption.png] is PNG file |
// front::draw:draw_tile((738, 613, 64, 64) (0, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[55](8208) used=2694 free=13584 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[56](30) used=3172 free=13106 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(738,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=80) |
// front::draw:draw_tile((802, 613, 64, 64) (64, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[57](8208) used=3181 free=13097 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[58](30) used=3892 free=12386 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(802,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=81) |
// front::draw:draw_tile((866, 613, 64, 64) (128, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[59](8208) used=3898 free=12380 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[60](30) used=4669 free=11609 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(866,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=82) |
// front::draw:draw_tile((930, 613, 64, 64) (192, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[61](8208) used=4675 free=11603 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[62](30) used=5357 free=10921 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(930,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=83) |
// front::draw:draw_tile((738, 677, 64, 61) (0, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[63](7824) used=5363 free=10915 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[64](30) used=6302 free=9976 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(738,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=84) |
// front::draw:draw_tile((802, 677, 64, 61) (64, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[65](7824) used=6313 free=9965 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[66](30) used=7625 free=8653 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(802,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=85) |
// front::draw:draw_tile((866, 677, 64, 61) (128, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[67](7824) used=7631 free=8647 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[68](30) used=9027 free=7251 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(866,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=86) |
// front::draw:draw_tile((930, 677, 64, 61) (192, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[69](7824) used=9033 free=7245 |
// GraphicsUpdatePDU::flush_orders: order_count=69 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 6453 bytes |
/* 0000 */ "\x00\x99\x35\x80\x21\x2e\x19\x45\x00\x03\x7e\xe4\x53\x8b\xe0\x02" //..5.!..E..~.S... |
/* 0010 */ "\x26\x00\x9a\xcf\xb4\x6e\xfd\xa9\xe3\x80\x92\xa1\x81\x52\x58\xab" //&....n.......RX. |
/* 0020 */ "\xfb\x83\x80\xe2\x87\xc5\x8d\x82\x14\x26\x5f\x4d\xed\x27\x10\x17" //.........&_M.'.. |
/* 0030 */ "\xb9\x25\x00\x14\x85\xd3\xb3\xe3\xb1\x44\xe0\x0e\x69\x93\x8b\xe0" //.%.......D..i... |
/* 0040 */ "\x0e\x69\xa0\x5c\x31\x55\x7b\xb4\x63\xc0\x80\x01\xcc\x46\xe1\x5d" //.i..1U{.c....F.] |
/* 0050 */ "\x66\x91\x28\xa5\xc2\xf9\xda\x3e\x51\x00\x00\xf0\x99\x0b\xca\x36" //f.(....>Q......6 |
/* 0060 */ "\xe6\x00\x8a\x01\xde\x49\xed\x67\x91\x1d\x49\xe7\x93\xfc\x60\x02" //.....I.g..I...`. |
/* 0070 */ "\x28\x00\x02\xc5\x5e\x5c\xd8\xcf\x95\x4b\x21\x74\xa8\x01\x00\x1d" //(...^....K!t.... |
/* 0080 */ "\x7d\x96\x15\x0b\x91\x0a\x5d\x03\x15\x66\x98\x31\x5a\xe5\xe0\x03" //}.....]..f.1Z... |
/* 0090 */ "\x66\x09\xfc\x8f\x1f\xb0\x50\x73\x00\x1c\x46\x09\xfc\x8e\xc4\x4c" //f.....Ps..F....L |
/* 00a0 */ "\x3a\x45\x9f\x71\x7a\xf6\xc8\xef\xc9\x16\x40\x20\x72\x00\x8d\x88" //:E.qz.....@ r... |
/* 00b0 */ "\xe0\x18\xac\xf9\x83\x91\xd7\x0c\x56\x9c\xc5\x69\xb0\xc0\xdd\x8c" //........V..i.... |
/* 00c0 */ "\xf8\xbc\x58\x00\x28\x08\xb7\x69\xf2\x80\x11\x07\x81\x00\x68\xde" //..X.(..i......h. |
/* 00d0 */ "\x13\xc5\x10\x01\x1c\x00\xe3\x03\xee\x3a\x10\xa5\x4a\x44\xc0\x17" //.........:..JD.. |
/* 00e0 */ "\x8c\x58\x69\x18\xb1\x1e\x31\x63\xb4\xe2\x84\xc9\xc3\x3d\x8c\x10" //.Xi...1c.....=.. |
/* 00f0 */ "\x5e\xe0\x01\x58\xce\x67\xa2\x01\x87\x69\xe5\x1f\x8e\x43\xc3\x38" //^..X.g...i...C.8 |
/* 0100 */ "\x96\x00\x24\x61\xb8\xd0\x00\x06\x2d\x22\x62\xd2\x98\xe0\xbb\x18" //..$a....-"b..... |
/* 0110 */ "\xcd\x8b\xad\x8f\xc0\x32\x90\x00\x06\xa9\xe0\x1c\x54\x80\x12\x7b" //.....2......T..{ |
/* 0120 */ "\x64\x0d\x24\xa4\x00\xbf\x14\x30\x01\x60\xc6\x38\x7a\x78\x42\xbb" //d.$....0.`.8zxB. |
/* 0130 */ "\x20\xe7\xe1\x96\x2e\xaa\x8f\x60\xc6\x06\xce\x76\x0f\xcb\xd8\x0f" // ......`...v.... |
/* 0140 */ "\x6d\x54\x6a\xac\xf3\xe2\x73\xff\x89\xe5\x24\x00\x0e\xeb\xe2\x7c" //mTj...s...$....| |
/* 0150 */ "\x6e\x60\x09\x40\x01\x24\x00\xde\xbe\x08\x00\x58\x31\x88\x85\x78" //n`.@.$.....X1..x |
/* 0160 */ "\x72\x29\x3c\x01\xeb\xd4\x91\xec\x5b\xc1\x28\xcc\x60\x6c\xe0\x1d" //r)<.....[.(.`l.. |
/* 0170 */ "\x04\x18\xc5\x29\x84\x9c\x9e\x10\x33\x81\xc2\x69\xf0\x34\xd8\x5d" //...)....3..i.4.] |
/* 0180 */ "\x2e\x34\x93\x22\xb3\xcc\x64\xd3\x98\x34\xe5\x16\x82\x49\x49\xa1" //.4."..d..4...II. |
/* 0190 */ "\x8a\x26\xd0\xae\x69\x94\x2a\x9a\x60\x00\x2c\x28\xbe\x09\x4b\x8e" //.&..i.*.`.,(..K. |
/* 01a0 */ "\x34\x4b\x41\xa8\xd0\x3a\xb5\x8a\xbc\x83\x6f\x80\x5d\xe4\x96\xe2" //4KA..:....o.]... |
/* 01b0 */ "\x0b\x83\x88\x05\xe0\x7a\x0e\x9d\x0c\x2a\x92\xd9\xa7\xb0\x3a\xb1" //.....z...*....:. |
/* 01c0 */ "\x0d\x9e\x01\x77\xa0\x5f\xda\x39\x4d\xa4\x56\xe7\x20\x0b\xc0\xc4" //...w._.9M.V. ... |
/* 01d0 */ "\x18\xbe\x08\x15\x25\xa3\x7d\x99\x90\x5d\xdb\xfe\xb8\x8a\xdc\x00" //....%.}..]...... |
/* 01e0 */ "\x0b\x05\x86\xc5\x24\xf3\x56\x4a\x70\x0f\xec\x3a\xfd\x34\x8a\xeb" //....$.VJp..:.4.. |
/* 01f0 */ "\x84\x11\x54\xb8\xe5\x9a\x7b\x62\xef\x22\xe8\xd8\x80\xa0\xdd\x47" //..T...{b.".....G |
/* 0200 */ "\x20\xb7\xeb\xfa\x7d\x38\x96\x8c\x03\x67\xa0\x5f\xfa\x2d\x06\x60" // ...}8...g._.-.` |
/* 0210 */ "\xa1\xf0\x42\xa9\x2b\x25\x3a\x05\xe1\xc7\x6f\x58\xeb\x88\x15\x82" //..B.+%:...oX.... |
/* 0220 */ "\x27\x43\x28\xd3\xd0\x2f\xc0\xed\xdd\x02\x7e\xc8\x84\xa0\x00\x3c" //'C(../....~....< |
/* 0230 */ "\x00\x36\xf6\x45\xdf\x40\x12\xf0\x4a\xe3\x15\x83\x81\x82\x40\x2c" //.6.E.@..J.....@, |
/* 0240 */ "\x18\xc4\x3a\xb9\x09\x4f\xae\x23\x85\xee\x1c\x1e\x23\x84\x0c\xfb" //..:..O.#....#... |
/* 0250 */ "\x79\x40\xc2\x72\xce\x18\x13\xc0\x92\x78\x44\xc7\xb4\x60\xc0\x0e" //y@.r.....xD..`.. |
/* 0260 */ "\x03\x43\xa4\x7a\xfa\x05\x13\x61\x64\x94\x14\x5a\x0b\x2c\xe6\x4d" //.C.z...ad..Z.,.M |
/* 0270 */ "\x31\xa3\xcc\x42\x25\x49\x32\x29\x54\x68\xb2\x17\x0e\x85\xd3\xe0" //1..B%I2)Th...... |
/* 0280 */ "\x78\x79\xcc\x01\x78\x85\xf0\xd7\x5c\x24\xb6\xc4\x1b\x7d\x0a\xbc" //xy..x....$...}.. |
/* 0290 */ "\xc7\x4e\x05\xa3\x33\xcb\x69\x51\xc4\xe8\x67\x36\xe0\xab\x17\x61" //.N..3.iQ..g6...a |
/* 02a0 */ "\xf9\x67\xb0\x5f\xe1\x1d\xc4\x96\xf0\x1b\x3c\x0e\xac\x0b\x46\x83" //.g._......<...F. |
/* 02b0 */ "\xcd\x69\x71\xce\x70\x21\x8f\xac\x83\xf9\xf9\xfd\x04\x94\x64\x89" //.iq.p!........d. |
/* 02c0 */ "\x6b\x67\xf0\x81\x9c\x01\x06\x83\x48\x2e\xe4\x3f\xa1\x46\x9e\xda" //kg......H..?.F.. |
/* 02d0 */ "\xa3\x9d\x4d\x83\x5f\x49\xd7\xf9\x23\xab\x41\xe6\xbd\x6d\x1d\x96" //..M._I..#.A..m.. |
/* 02e0 */ "\xa3\xe7\x24\x5f\x78\x23\x46\xf9\xd5\x00\xbb\xa1\xdb\xe8\xdd\x9d" //..$_x#F......... |
/* 02f0 */ "\xb0\xea\xa8\xa1\x57\x9a\x25\xb5\x00\x33\xe0\x0c\x07\x35\x29\x60" //....W.%..3...5)` |
/* 0300 */ "\x00\x6b\x1e\xd2\xc5\x58\x01\x33\x05\x70\x38\xa0\xc5\x40\x04\xd2" //.k...X.3.p8..@.. |
/* 0310 */ "\x4a\x03\xed\x67\x13\x87\x13\xf7\x14\x49\xe2\x83\x3c\x4b\x22\xa1" //J..g.....I..<K". |
/* 0320 */ "\x83\x6b\xe7\x8a\x26\x7d\x83\xa6\x81\x8c\x2d\x31\xe2\x8b\xc4\xd1" //.k..&}....-1.... |
/* 0330 */ "\xc5\x16\x53\x00\x00\xca\x3c\x57\x89\x30\x02\x6f\x1e\xb7\x1e\xf5" //..S...<W.0.o.... |
/* 0340 */ "\x83\x8f\x64\xc0\x3c\x36\xe0\x56\xe2\x83\x1d\x39\x5c\x4d\x6b\x8f" //..d.<6.V...9.Mk. |
/* 0350 */ "\x3c\xb0\x7f\xb9\x4d\x00\x03\x47\xff\x78\xa2\x80\x27\x00\x13\x70" //<...M..G.x..'..p |
/* 0360 */ "\x78\x72\x81\x93\x80\x0b\x37\x28\x19\xc0\x45\xce\x4d\x2e\x2f\x78" //xr....7(..E.M./x |
/* 0370 */ "\xf8\x31\xc2\x0f\x10\x5f\x98\xe7\xf9\x3c\xa0\x71\xe5\x21\x1c\xa0" //.1..._...<.q.!.. |
/* 0380 */ "\xad\x38\x00\x0d\x13\xc3\x58\xa1\x00\x27\x80\x61\x2a\xf7\xb0\x86" //.8....X..'.a*... |
/* 0390 */ "\x00\x16\xee\x65\x71\xeb\x76\x04\x81\x8c\x60\x25\xe6\x78\x5e\x93" //...eq.v...`%.x^. |
/* 03a0 */ "\xc0\x03\x42\x57\xc0\xc3\xe9\x00\x11\x10\x0a\x40\x05\xf8\x00\x07" //..BW.......@.... |
/* 03b0 */ "\xe3\x25\xc0\x9f\x3a\x03\x40\x40\x2f\x00\x0c\xa2\x91\x1f\x9e\x65" //.%..:.@@/......e |
/* 03c0 */ "\x16\xa4\xfc\x64\x44\x01\x94\x7b\xec\xc7\xcc\x84\x51\xeb\x85\x24" //...dD..{....Q..$ |
/* 03d0 */ "\xdc\xda\x95\xfa\xaa\x90\x00\xca\x15\xf9\xe4\x3a\x5c\x09\x49\xfa" //...........:..I. |
/* 03e0 */ "\x06\x51\xef\xa9\x1f\x32\x00\xcd\x71\x8b\x80\x0f\x07\x51\x80\x2f" //.Q...2..q....Q./ |
/* 03f0 */ "\x97\xfb\x85\xfc\x63\x16\x24\xbe\x0e\x38\x38\xed\xf0\xc0\x88\x80" //....c.$..88..... |
/* 0400 */ "\x00\x92\x4f\x87\x00\x52\x8f\x87\x00\x22\x1f\x0e\x3e\x0e\x80\x64" //..O..R..."..>..d |
/* 0410 */ "\xbe\x02\xa0\x1f\x01\x48\x87\x80\xa4\x13\xe1\x58\x2d\x00\x18\x80" //.....H.....X-... |
/* 0420 */ "\x13\xe1\x63\xf6\x5f\x06\x7f\x96\x00\x5f\xcb\x3f\xe9\x1f\x06\x3f" //..c._...._.?...? |
/* 0430 */ "\xb4\x7c\x2c\xbe\x0e\x1f\xcb\x00\x3f\xe5\xaf\xee\xa0\xff\x88\xf8" //.|,.....?....... |
/* 0440 */ "\x58\x60\xd4\xc7\xc1\xbf\xe5\x80\x27\xf2\xdf\xe0\xc0\x1d\x00\x19" //X`......'....... |
/* 0450 */ "\x80\x10\x80\x1e\xc0\x08\x00\x0d\xd0\x7d\xf4\x5f\x06\x40\xff\xec" //.........}._.@.. |
/* 0460 */ "\x03\x80\x00\x84\x04\x40\x42\x25\x52\xa5\x5f\x85\x21\x23\x75\xb3" //.....@B%R._.!#u. |
/* 0470 */ "\xf3\xd0\x70\x30\x1e\xa4\x41\xef\x84\x41\xe1\x24\xf9\x18\x40\x7e" //..p0..A..A.$..@~ |
/* 0480 */ "\xfb\xe1\x40\xf7\xcc\x60\xd9\xd0\x08\x58\x10\x40\x18\x18\x20\x2f" //..@..`...X.@.. / |
/* 0490 */ "\x8e\x30\x05\xf1\xc6\xe0\xf4\x0f\x61\x47\x8d\x94\x00\x44\x0f\x91" //.0......aG...D.. |
/* 04a0 */ "\x00\x9f\x67\x0f\x35\x62\x0d\xfc\xb4\x20\xf8\x54\x07\x60\xf3\x54" //..g.5b... .T.`.T |
/* 04b0 */ "\x7c\x28\x06\x60\x03\xb0\x7d\x87\xc1\x9f\xe5\x80\x3f\xf2\xd3\xe0" //|(.`..}.....?... |
/* 04c0 */ "\xf6\x80\xc4\x0e\xcc\x38\x76\x0c\x80\x0f\x80\x10\xbe\x35\xa1\x00" //.....8v......5.. |
/* 04d0 */ "\x05\x02\x80\x02\x04\x03\x04\x03\x84\x03\x82\x70\xc6\xc0\x23\xc2" //...........p..#. |
/* 04e0 */ "\x53\xc3\x1b\x50\x1b\x80\x00\x10\x47\x01\xb7\xc3\x93\x8f\xe4\xf8" //S..P....G....... |
/* 04f0 */ "\x71\xf4\x9f\x61\xf0\x74\xf2\xa6\x01\x3e\x02\x9f\x2a\x6c\x0b\x00" //q..a.t...>..*l.. |
/* 0500 */ "\x06\xff\xcf\x85\x87\xc1\xc3\xf9\x60\x15\xfc\xb9\x38\x7c\x72\xfa" //........`...8|r. |
/* 0510 */ "\x1a\x2c\x00\xfd\x90\x88\xa0\x0a\xdf\x1a\xd5\x80\x02\xb0\xdf\x28" //.,.............( |
/* 0520 */ "\x28\x10\x14\x10\x20\x28\x23\xd0\xd8\x05\xf8\x4a\x7d\x0d\xa8\x3d" //(... (#....J}..= |
/* 0530 */ "\x80\x03\x81\x93\xe1\xd7\xcc\xdf\xe0\xe9\xe5\x4c\x03\x3c\x05\x3e" //...........L.<.> |
/* 0540 */ "\x54\xaf\x3a\x47\xc2\xe2\xf8\x38\x7f\x2c\x03\x7f\x96\x7f\x07\x0f" //T.:G...8.,...... |
/* 0550 */ "\x3e\x47\xc2\xb6\x00\x39\x07\xd1\x7c\x19\xf4\x34\x0f\x80\x00\x2d" //>G...9..|..4...- |
/* 0560 */ "\x70\x46\x35\x7c\x6b\x6a\x00\x0a\x0b\x00\x0c\x09\x0d\x03\x04\xe0" //pF5|kj.......... |
/* 0570 */ "\x9c\xf0\x96\x01\xde\x12\xe3\x03\xe2\x0c\xe1\xad\x1e\x12\xdb\xf9" //................ |
/* 0580 */ "\x60\x1f\xfc\xb9\x20\x00\xd8\x10\x39\xf0\xa0\x19\x00\x0e\x01\xf4" //`... ...9....... |
/* 0590 */ "\x5f\x06\x7f\x96\x02\x1f\xcb\x3f\xc9\x1f\x0a\x50\x01\x20\x00\xa0" //_......?...P. .. |
/* 05a0 */ "\x00\xd8\xe3\x0c\x09\x00\x04\x40\xfb\x2f\x83\x20\x33\x0e\x20\x4c" //.......@./. 3. L |
/* 05b0 */ "\x7b\x05\x2d\xd8\x13\x84\xfd\xf1\xad\xfb\xcf\x34\x1c\x06\x1e\x10" //{.-........4.... |
/* 05c0 */ "\x20\x0e\x07\x51\xc0\x50\xf8\xd3\xc0\x54\x30\xf8\xc9\x06\x91\x40" // ..Q.P...T0....@ |
/* 05d0 */ "\x03\x61\xb4\x40\x48\x18\x03\xe0\x44\x0b\x08\x35\x02\xef\xa4\x8c" //.a.@H...D..5.... |
/* 05e0 */ "\x09\xc0\x48\x21\x0e\x00\x00\x10\x20\x01\x04\x19\x80\xc9\x08\x9c" //..H!.... ....... |
/* 05f0 */ "\x05\x06\x61\x81\x57\xa1\x06\x40\x31\x01\x00\x48\xf9\xca\xc0\x94" //..a.W..@1..H.... |
/* 0600 */ "\x08\x00\x21\x06\x90\x2f\x01\x00\x20\x74\xff\x60\x02\x0f\xbd\x00" //..!../.. t.`.... |
/* 0610 */ "\x06\x02\xf8\x29\xf8\x83\x60\x13\xfc\x8c\x3b\x52\xfe\x81\x78\x0a" //...)..`...;R..x. |
/* 0620 */ "\x0c\xe3\xc1\x47\x0f\xa4\x40\x17\x80\x90\x44\x04\xc8\x44\xff\xc4" //...G..@...D..D.. |
/* 0630 */ "\x58\x05\xa0\x24\x0d\x1e\x06\x50\x30\xed\xd3\xf1\x05\xbe\xf0\x4e" //X..$...P0......N |
/* 0640 */ "\x04\x83\x68\x00\x08\xfd\x88\x07\xce\x08\x78\x52\x4a\x3e\x71\xc0" //..h.......xRJ>q. |
/* 0650 */ "\x5b\xc2\x51\x58\xf9\x45\x8f\x88\x60\xf0\x82\x51\xf2\x10\x0f\x88" //[.QX.E..`..Q.... |
/* 0660 */ "\x50\xf0\x83\xe4\x3e\x84\xac\x7c\xc7\xe0\x20\xd4\x3e\x61\xa3\xca" //P...>..|.. .>a.. |
/* 0670 */ "\x83\x0f\x00\x48\x80\x97\xa2\x1e\x52\x04\x20\xda\x3c\x80\x38\x11" //...H....R. .<.8. |
/* 0680 */ "\xf9\x51\x58\xfa\x00\x04\x1a\x47\xe8\x81\x1f\x88\x6a\x61\xb4\x07" //.QX....G....ja.. |
/* 0690 */ "\xfa\x55\xf3\xd1\x0c\x6c\x62\x38\x41\xb0\x0c\xc0\x48\x1e\x3c\x12" //.U...lb8A...H.<. |
/* 06a0 */ "\x9c\x7b\x28\xd0\x83\x60\x6b\xfb\xf0\x41\xeb\x08\xb0\x05\xe3\x0f" //.{(..`k..A...... |
/* 06b0 */ "\x60\x01\xc1\x03\xc2\x0d\x41\xb7\xea\xc7\xad\xe6\x92\x83\x48\x81" //`.....A.......H. |
/* 06c0 */ "\x20\xd4\x10\x6c\x0e\x2c\x36\x8f\x75\xbf\x29\x80\x3d\x86\xd0\x21" // ..l.,6.u.).=..! |
/* 06d0 */ "\xff\x98\x0f\xdc\x41\x10\xf8\xb0\xd1\xf1\x5c\x10\x5f\x15\x85\x79" //....A......._..y |
/* 06e0 */ "\xa9\x06\xb1\xf3\x08\x33\x0f\x8a\x20\x84\x7c\x58\x60\xf8\xa0\x03" //.....3.. .|X`... |
/* 06f0 */ "\x0f\x8b\x18\x47\xb9\xf8\x22\x91\xc1\x3e\x7c\xf2\x90\x00\x04\xc0" //...G.."..>|..... |
/* 0700 */ "\xd0\x6b\x04\x11\x8e\x01\x54\x40\xf0\x00\x09\x05\x41\xb4\x20\xd2" //.k....T@....A. . |
/* 0710 */ "\x10\x64\x04\x0e\x00\x07\x18\x7a\xd1\xed\xf5\x00\x39\x06\x31\x06" //.d.....z....9.1. |
/* 0720 */ "\x20\x68\x20\x60\x20\x58\x20\x48\xc1\xee\xc2\x0b\x9c\x27\x09\x56" // h ` X H.....'.V |
/* 0730 */ "\x06\x43\x45\x80\x6c\x42\xa4\x0a\x00\x00\x73\xac\x12\x03\x8c\xe0" //.CE.lB....s..... |
/* 0740 */ "\x09\x44\x02\x8d\xed\x32\x0d\x22\xa0\x06\x01\x80\x40\x06\xc1\x34" //.D...2."....@..4 |
/* 0750 */ "\x00\x68\xe8\x4c\x05\xec\x24\x75\x9d\x86\xd1\x50\x03\x20\x78\x01" //.h.L..$u...P. x. |
/* 0760 */ "\x80\xdc\x40\x1d\xfe\x90\x8f\x89\x9b\xd1\x0c\x05\x24\xc1\x9f\x29" //..@.........$..) |
/* 0770 */ "\x66\x14\x0e\x34\xfd\x18\xfc\x80\x22\x06\x80\x18\x0a\x3f\xd1\x53" //f..4...."....?.S |
/* 0780 */ "\xb8\xa0\xb0\x5f\xca\x40\x03\x8b\xaf\x82\xf0\x11\x30\x90\x00\x48" //..._.@......0..H |
/* 0790 */ "\x13\x0d\xa0\x01\x23\x0a\x57\xa0\x2b\x41\x22\xd0\x15\x80\x90\x00" //....#.W.+A"..... |
/* 07a0 */ "\x5f\xda\xa8\x00\xc0\x45\x02\x45\xa0\x51\xc0\x9e\xae\x0f\xdf\x09" //_....E.E.Q...... |
/* 07b0 */ "\x00\x30\x1a\x7f\x88\x67\x03\xc0\x44\x13\xf8\xbb\x6a\xa1\x5e\x00" //.0...g..D...j.^. |
/* 07c0 */ "\x42\xf9\x81\xb0\x30\xc1\xc3\x09\x71\xbe\x72\xa1\xf3\xa4\x02\xb0" //B...0...q.r..... |
/* 07d0 */ "\x03\xec\xa4\x73\xc1\xa3\x5f\x06\xcb\x0e\x0c\x77\x2c\x7c\xe3\xd7" //...s.._....w,|.. |
/* 07e0 */ "\xce\x90\x0e\xc9\x21\x30\x1f\x05\xc1\x17\x82\xdf\x41\xe5\x84\xbb" //....!0......A... |
/* 07f0 */ "\xfe\x30\xa6\x8b\xe7\x47\xa7\x4d\x3f\x39\x89\xc5\xdf\x3a\x0e\x00" //.0...G.M?9...:.. |
/* 0800 */ "\x60\x24\x9f\x39\x87\xd8\x00\xfe\x13\x3d\xf8\x14\x6f\xe7\x12\x00" //`$.9.....=..o... |
/* 0810 */ "\x18\x0f\xc8\x0b\x40\x5f\x3e\x63\xda\x15\xeb\xda\x24\xf5\x63\xe8" //....@_>c....$.c. |
/* 0820 */ "\x3c\x22\xf5\xd4\x42\x7e\x74\xf8\xf6\x19\xfe\x73\xd6\xef\x9c\x00" //<"..B~t....s.... |
/* 0830 */ "\xb4\x00\xf8\xdc\x2f\xe9\xc7\xce\x82\x04\x8f\x34\xc3\xd7\x82\x8b" //..../......4.... |
/* 0840 */ "\x21\x38\x2a\x51\xef\x70\x20\x01\x80\x0c\x04\x54\x27\xc1\xb1\xeb" //!8*Q.p ....T'... |
/* 0850 */ "\x90\x0c\x04\x82\x31\xf4\xde\x20\x54\x3f\xa1\x1b\xe2\x21\x40\x01" //....1.. T?...!@. |
/* 0860 */ "\x35\x00\x52\x0a\xc0\x0f\xae\x1e\xbc\x81\x58\x13\x48\x02\xc0\x4d" //5.R.......X.H..M |
/* 0870 */ "\x40\x20\x5f\xdc\xee\x1e\xca\x80\x28\x02\x07\xb2\x6a\xe0\x00\x25" //@ _.....(...j..% |
/* 0880 */ "\x03\x45\xc5\x95\xe5\xa0\x96\x38\xe8\x48\x45\x40\x19\x06\x01\xc0" //.E.....8.HE@.... |
/* 0890 */ "\xbe\x8d\x82\x43\x20\xc0\x38\x96\x0c\xd0\x01\x2e\x00\x13\x09\x7a" //...C .8........z |
/* 08a0 */ "\x09\x66\x8e\x84\x83\xf1\x0a\x61\x5b\x97\x90\xde\x91\x8a\x4a\xc0" //.f.....a[.....J. |
/* 08b0 */ "\x4c\x0d\x67\xec\x9f\x02\x5b\x23\xa1\x20\xde\x14\x80\x82\x08\x07" //L.g...[#. ...... |
/* 08c0 */ "\x87\x42\x61\x2c\x01\xf1\xd0\x90\x58\x17\x12\x00\xc5\x40\x23\xca" //.Ba,....X....@#. |
/* 08d0 */ "\x60\x0f\x49\x47\x23\x45\x00\x00\x61\xab\xff\x3d\x5a\x12\x81\x71" //`.IG#E..a..=Z..q |
/* 08e0 */ "\x2d\x04\x60\xe3\x07\xb2\x23\x19\xf0\xaa\x04\x0a\x18\x87\xa9\xe1" //-.`...#......... |
/* 08f0 */ "\x46\x1c\x68\x71\x88\x61\xdb\x18\xf7\xb0\x00\x3b\x10\x5c\x38\x08" //F.hq.a.....;..8. |
/* 0900 */ "\xc0\xff\x02\x48\x1f\x80\xf8\xec\x3f\xed\x37\x17\xd9\x7b\x09\xf9" //...H....?.7..{.. |
/* 0910 */ "\x83\x6f\x8b\x1d\x4c\xc3\xfe\xa0\x7c\x56\x04\x43\x0f\xf9\xed\xf8" //.o..L...|V.C.... |
/* 0920 */ "\x27\xdc\xc1\xff\x7d\xc6\x24\x59\x00\x0f\x43\x9f\x02\x5e\xfc\xd2" //'...}.$Y..C..^.. |
/* 0930 */ "\x59\x09\x58\x09\x36\x09\x15\x09\x13\x01\xb8\xfa\xc1\x2c\x00\x69" //Y.X.6........,.i |
/* 0940 */ "\xe9\xe0\x22\x00\xe5\xae\xa0\x05\xc7\x02\x6e\x75\x1c\x2b\x44\x11" //..".......nu.+D. |
/* 0950 */ "\xc0\x03\x45\x1c\x1f\xa4\xe3\x1b\x8d\xd0\x09\x4b\x06\x20\x1f\x02" //..E........K. .. |
/* 0960 */ "\x68\x00\x1c\x09\xd2\x41\xea\x00\xab\x08\xff\x18\xb8\x10\x80\xca" //h....A.......... |
/* 0970 */ "\x47\x40\x03\xb8\xa2\x84\x20\x30\xe1\x4f\x92\x59\xf9\x28\x98\x9f" //G@.... 0.O.Y.(.. |
/* 0980 */ "\xc9\x2c\x7c\x93\xc0\x57\xc9\x7d\x27\x15\x22\x08\xf8\xd4\x06\x80" //.,|..W.}'."..... |
/* 0990 */ "\x15\x49\x80\x8b\x04\xf1\x12\x38\xf8\x0c\x8c\x3c\x35\x01\x40\x0a" //.I.....8...<5.@. |
/* 09a0 */ "\xe7\x01\x11\xc0\x91\x18\x0a\x58\xa8\xd4\x06\x00\x16\x23\xe9\x43" //.......X.....#.C |
/* 09b0 */ "\x97\xdc\x28\x0a\x0d\x40\x6c\x02\x82\x3c\x15\x58\xd4\x0c\x26\x35" //..(..@l..<.X..&5 |
/* 09c0 */ "\x01\x20\x1e\x11\xf4\xc0\x4a\x02\x74\x14\x35\x02\x40\x1f\x20\xc0" //. ....J.t.5.@. . |
/* 09d0 */ "\x61\x6b\x80\x03\x9f\xe8\x01\x0f\xbd\x30\x8f\xc0\x50\x00\x44\x3d" //ak.......0..P.D= |
/* 09e0 */ "\xc6\x13\x80\x83\xf8\x49\x20\x0a\x0f\xf0\x21\xd3\xee\x03\x3c\x24" //.....I ...!...<$ |
/* 09f0 */ "\xb0\x09\x87\xff\x80\xa4\x06\xe3\xe0\x42\x00\xa8\x7f\xe6\x0a\x40" //.........B.....@ |
/* 0a00 */ "\x6e\xc2\x5e\x2a\x0f\x07\x7b\x8c\xeb\xf9\x97\xb0\x97\xbf\x01\x18" //n.^*..{......... |
/* 0a10 */ "\x30\x99\xd0\x54\x25\xdb\xe8\x28\x9e\x04\x80\x10\xce\x04\x2e\x21" //0..T%..(.......! |
/* 0a20 */ "\xd1\x29\x1d\x1a\x80\x80\x05\x85\xc0\x80\xb8\x69\x85\xe0\x32\xef" //.).........i..2. |
/* 0a30 */ "\x2b\x10\x05\x02\xf8\x06\x1e\x3e\xe2\x67\xe1\x44\x80\x54\x2b\x8c" //+......>.g.D.T+. |
/* 0a40 */ "\x29\xe7\xe7\x23\x01\x5e\x2e\x0f\x04\xfc\xe3\xd4\x74\x26\x05\x3c" //)..#.^......t&.< |
/* 0a50 */ "\xf5\x7b\xcb\x4a\x80\x35\x03\x04\xbd\x88\x80\x05\x42\x5f\x3f\x19" //.{.J.5......B_?. |
/* 0a60 */ "\x94\x78\x6b\xe8\x82\x80\x7d\xea\x7d\xf9\xe6\xa1\x5f\x9e\x60\x01" //.xk...}.}..._.`. |
/* 0a70 */ "\x01\x7e\xf9\x8b\x47\x83\x23\x19\x4d\xbd\xd0\x42\xf0\x4b\x00\x01" //.~..G.#.M..B.K.. |
/* 0a80 */ "\x80\xe0\x57\x20\x0b\x06\x17\x18\x62\xa8\x20\x14\x12\x38\x13\x80" //..W ....b. ..8.. |
/* 0a90 */ "\x7e\x1c\x23\x5e\x13\x40\x48\x00\x78\xd0\xae\x00\x1c\xae\x62\x81" //~.#^.@H.x.....b. |
/* 0aa0 */ "\xea\x23\x06\x00\x1c\x70\x11\x54\x00\xae\x3f\x5c\xc1\xe6\x15\x03" //.#...p.T..?..... |
/* 0ab0 */ "\x0b\x7d\xbd\x68\xa8\x01\x7e\x88\x20\x0b\xf7\xe0\x54\x7f\x8a\x42" //.}.h..~. ...T..B |
/* 0ac0 */ "\xa0\x07\x0b\xfa\x0a\x00\x0f\xf2\x0f\x0f\x70\x53\x54\x01\x04\x82" //..........pST... |
/* 0ad0 */ "\x40\x60\x30\x00\x01\xa8\x13\x00\xfa\x06\x0e\xc2\x3e\x04\xa2\x80" //@`0.........>... |
/* 0ae0 */ "\x61\x8a\xa4\x06\x40\x3d\xe2\x58\x80\x00\x8d\xf9\x2c\xd2\x01\x50" //a...@=.X....,..P |
/* 0af0 */ "\x06\x45\xfe\xc6\x0f\x14\x28\x01\x43\x7c\x81\xd5\x16\x9f\x9e\x00" //.E....(.C|...... |
/* 0b00 */ "\xf1\x30\x83\xe2\x3c\x4a\x08\x85\x60\x22\xf7\xdc\x79\xf8\x2b\x44" //.0..<J..`"..y.+D |
/* 0b10 */ "\x20\x01\x14\x81\x3d\x84\xb4\x76\x6e\x00\x40\x58\x00\x5f\xd8\x47" // ...=..vn.@X._.G |
/* 0b20 */ "\xc4\xe0\x4b\x01\x24\x80\x1c\x66\xd8\xd6\x14\xc0\x3f\xc6\x75\x72" //..K.$..f....?.ur |
/* 0b30 */ "\xfd\xcc\x49\xb6\x21\xe3\x36\x58\x09\x67\x00\xe3\x37\x00\x02\xb8" //..I.!.6X.g..7... |
/* 0b40 */ "\xf9\xf4\xf4\x13\x2d\x00\xe3\x41\x12\x00\xb0\x00\xae\x41\x09\x67" //....-..A.....A.g |
/* 0b50 */ "\xe7\x70\xd8\x84\x00\xa0\x00\x78\x1b\xd8\x4d\xcb\x91\xc3\x03\xf7" //.p.....x..M..... |
/* 0b60 */ "\x20\x3f\x58\x09\xf7\x97\x1f\x9e\xc3\xbc\x68\x09\x00\xf8\xec\x19" // ?X.......h..... |
/* 0b70 */ "\xf3\x8c\x38\x4c\x26\x9d\xc5\xfc\x44\x00\xf9\xf5\x16\x01\x51\xdc" //..8L&...D.....Q. |
/* 0b80 */ "\x30\xcd\x10\x18\x00\xa7\x1a\xe6\x3b\x06\x0f\xc0\x6c\x1c\x6e\x23" //0.......;...l.n# |
/* 0b90 */ "\xb6\x53\x8e\x4c\x50\x07\xbe\x62\x00\x2b\xf1\x44\x1f\x82\x2c\x01" //.S.LP..b.+.D..,. |
/* 0ba0 */ "\x5f\x15\xc9\x98\x3f\x02\x40\xf2\xfc\x61\x1c\xe8\x60\xfc\x50\x41" //_...?.@..a..`.PA |
/* 0bb0 */ "\xf8\xa2\x00\x15\x40\x0b\x90\x85\xb0\x77\xbf\x71\xc9\x85\x20\x00" //....@....w.q.. . |
/* 0bc0 */ "\x38\xef\x1c\x9c\x63\x60\x4a\x60\x14\x01\xb6\x11\xf8\x11\x00\xf9" //8...c`J`........ |
/* 0bd0 */ "\x00\x08\x9b\x00\x67\xbc\x16\x0f\xe6\x81\x30\x8f\xc0\x3c\x64\xfa" //....g.....0..<d. |
/* 0be0 */ "\xcc\x03\xe6\x1e\xf9\xc9\x00\xa0\x8d\x16\x02\x2d\x07\x00\x0a\x40" //...........-...@ |
/* 0bf0 */ "\x0a\x90\x05\x30\x05\xa0\x0a\x48\x3f\x33\x0a\x6a\xb8\x18\x80\x7c" //...0...H?3.j...| |
/* 0c00 */ "\xda\x81\xc8\x00\x40\x05\x28\x03\xcc\x00\x1e\x00\x20\x0a\xe0\x96" //....@.(..... ... |
/* 0c10 */ "\x06\x37\x24\x48\x02\xa0\x03\xc3\xdf\x84\x40\x02\xff\xf4\x26\xc0" //.7$H......@...&. |
/* 0c20 */ "\x16\xc0\x3e\xfb\xf8\x0c\x02\x98\x65\x16\x20\x40\x1e\x72\x0e\x78" //..>.....e. @.r.x |
/* 0c30 */ "\x84\xc0\x01\xf3\xe7\xe2\x87\xdf\x3e\xf1\x00\x2f\xd6\xb1\xf7\x8c" //........>../.... |
/* 0c40 */ "\x03\xe3\x7c\x35\x4c\x1c\x9f\x90\x1b\x00\x58\xdf\x82\x1e\x4a\x01" //..|5L.....X...J. |
/* 0c50 */ "\x70\x3d\x40\x07\xb8\xd2\xc7\xe7\x7d\xa8\x90\x70\x8a\x79\x28\x07" //p=@.....}..p.y(. |
/* 0c60 */ "\xf6\x14\x01\xee\x41\xf1\xeb\xe7\xd8\x80\x01\x4f\xcb\x14\x0c\x89" //....A......O.... |
/* 0c70 */ "\xb8\xf8\xa1\xbe\x49\xac\x33\x33\x1c\x09\x9c\x2b\x42\xb8\x40\x2d" //....I.33...+B.@- |
/* 0c80 */ "\xc4\xb6\x20\x03\xdf\x25\xc4\x95\xe1\xa6\x01\x35\x01\xf0\x70\x7f" //.. ..%.....5..p. |
/* 0c90 */ "\x38\xe0\xb0\x03\xe0\x1a\x1b\x80\xf9\x7c\x07\xef\x90\xdf\xcd\x7c" //8........|.....| |
/* 0ca0 */ "\x92\x07\xc9\x70\x43\x7e\x67\xc9\x70\x9a\x01\xf1\x4e\x7d\xb7\xc9" //...pC~g.p...N}.. |
/* 0cb0 */ "\x8a\x07\xc9\x20\x71\xaf\x7a\xe0\x37\xc1\x32\x00\xe0\x20\x1e\x7a" //... q.z.7.2.. .z |
/* 0cc0 */ "\x7d\xb0\x17\x81\x1e\x92\x8f\xde\x02\xf3\x28\x73\xc0\x31\xc6\x18" //}.........(s.1.. |
/* 0cd0 */ "\x15\xec\x49\xe3\x54\x81\x00\x00\xd8\x07\x87\x78\x8f\x07\xe0\x56" //..I.T......x...V |
/* 0ce0 */ "\x00\x04\x01\xe7\xef\xaf\x1c\x0b\x10\x0f\x6c\x3e\x64\x48\x07\xb8" //..........l>dH.. |
/* 0cf0 */ "\x0c\x47\xac\x01\x5e\xc6\x70\x18\x8b\x00\xa0\x65\x2c\x80\x06\x0d" //.G..^.p....e,... |
/* 0d00 */ "\xc2\x94\x15\xf5\x01\x6c\x1c\x10\x4c\x00\x5f\x60\x80\x16\x18\xc0" //.....l..L._`.... |
/* 0d10 */ "\x27\xf2\x20\x07\x08\x95\x88\x07\xb8\xaa\x39\x8e\xbc\x6a\xe0\x79" //'. .......9..j.y |
/* 0d20 */ "\x1c\x2c\xc3\xdf\xe5\xd1\x15\x89\xdb\xdc\x08\xc3\xd0\x1a\x00\xa7" //.,.............. |
/* 0d30 */ "\x16\xa6\x33\xa7\x00\x0f\xf1\x09\x0f\x72\xd1\x77\x36\x73\x98\x50" //..3......r.w6s.P |
/* 0d40 */ "\x05\x38\xba\x00\x03\x60\x40\x03\xd8\x03\x18\x3b\x02\x60\x1e\xa0" //.8...`@....;.`.. |
/* 0d50 */ "\x71\x76\x8c\x72\xc8\xf9\x51\xdb\xf8\x00\x15\xf6\xd4\x0e\x82\xb0" //qv.r..Q......... |
/* 0d60 */ "\x00\x13\x02\xa0\x0a\x20\x71\x85\x8e\xba\x30\x3f\x60\x0a\xc1\xe4" //..... q...0?`... |
/* 0d70 */ "\xd0\x0d\x02\x00\x15\x90\x00\x3c\x7c\xa0\x24\x09\x80\x56\x40\x02" //.......<|.$..V@. |
/* 0d80 */ "\xf5\xf2\x80\x30\x3e\x1f\xc1\x49\x07\x0d\xf8\x1e\x82\x10\x0f\xa0" //...0>..I........ |
/* 0d90 */ "\x0a\xd8\x02\x98\x30\x08\x28\x00\x6a\x0b\x00\x1e\x20\x15\xa0\x05" //....0.(.j... ... |
/* 0da0 */ "\xd8\x30\x6e\x63\xca\x60\x0a\x00\x0c\x84\x2e\x13\x20\x14\x80\x0a" //.0nc.`...... ... |
/* 0db0 */ "\x70\x06\x0a\x48\x02\xec\x01\x44\x01\x4c\x00\x2c\x00\x17\x32\x6f" //p..H...D.L.,..2o |
/* 0dc0 */ "\xb8\x11\x02\x01\x40\x53\x00\x03\x8f\x01\x80\x71\x70\x93\xd1\x08" //....@S.....qp... |
/* 0dd0 */ "\xe6\x09\xb7\x82\x0b\x85\xe0\x06\x0f\x02\xc4\x7d\x2b\x5a\xd1\x63" //...........}+Z.c |
/* 0de0 */ "\x1d\x2d\x6a\xd0\x73\x86\xce\x42\xf8\xe5\x05\x16\x9a\xb3\xd7\xf0" //.-j.s..B........ |
/* 0df0 */ "\x9f\xac\x75\xd5\x14\x21\x47\xae\xed\x35\xfb\xff\x06\x84\x43\x00" //..u..!G..5....C. |
/* 0e00 */ "\xac\x54\x60\x73\x1d\x2a\x1f\x6e\xed\x5f\x52\x70\x07\xc4\x8e\x60" //.T`s.*.n._Rp...` |
/* 0e10 */ "\xfe\x25\x40\x0e\x44\x10\x03\x06\xbd\xdf\xad\x76\xa2\x4b\x4d\x8e" //.%@.D......v.KM. |
/* 0e20 */ "\xd1\x06\xb4\xda\xed\x55\x00\x3a\x5f\x39\x66\x01\x0c\x76\x4c\x0e" //.....U.:_9f..vL. |
/* 0e30 */ "\x54\x01\x12\x71\xf5\x1a\x0d\x69\x66\x61\xb4\x70\x97\x0c\x60\x06" //T..q...ifa.p..`. |
/* 0e40 */ "\xf7\x7f\x30\xdd\x40\x0c\x9f\x0a\x53\xa3\x57\xee\xf7\x0c\x3a\x88" //..0.@...S.W...:. |
/* 0e50 */ "\xc0\x31\x0c\x01\x76\x50\xfa\xc9\x0f\x66\x63\xd5\xda\xa0\x14\x90" //.1..vP...fc..... |
/* 0e60 */ "\x04\xff\xf5\x93\x0f\xac\x78\xfa\xd0\x00\x02\xd1\x5f\xbf\x82\x60" //......x....._..` |
/* 0e70 */ "\x12\x9a\x90\x0d\x40\x80\x0c\x1e\x6e\xd8\x03\x45\x80\x4a\xe4\x6a" //....@...n..E.J.j |
/* 0e80 */ "\x04\x40\xe1\x12\xba\x07\xe0\x07\xf7\x86\xe4\x20\x67\xfb\xaa\x00" //.@......... g... |
/* 0e90 */ "\x91\xa1\xec\x57\x28\xba\x51\x67\xc2\xf5\x00\x45\x10\xcf\x26\x02" //...W(.Qg...E..&. |
/* 0ea0 */ "\x05\x30\x09\xd0\x62\x06\x01\x80\x6d\x18\x00\x18\x07\x67\xe7\x58" //.0..b...m....g.X |
/* 0eb0 */ "\x9f\x5f\xea\x00\x80\x80\x20\x35\x00\x48\xf0\x3f\x70\x08\xc0\x29" //._.... 5.H.?p..) |
/* 0ec0 */ "\xb2\xc1\x80\x85\xc8\x0c\x5e\x08\x59\xed\x38\x2f\xf9\xd1\xb1\x5f" //......^.Y.8/..._ |
/* 0ed0 */ "\xbf\xce\xaf\xd5\x00\x2b\x38\x08\x0c\x04\x12\xd3\x50\x05\xb6\x7a" //.....+8.....P..z |
/* 0ee0 */ "\x5d\x80\x59\xa6\x11\x8b\x06\x04\x18\x70\x45\xe0\xc8\x11\x0c\x01" //].Y......pE..... |
/* 0ef0 */ "\x62\xaf\xdf\xe0\x67\x37\x6a\xbd\xd5\xf6\xff\x50\x05\x23\xfd\x8c" //b...g7j....P.#.. |
/* 0f00 */ "\x02\xf9\x33\x01\x8e\xee\xee\xe1\x2f\xc8\x04\x30\x0c\x01\x64\xaf" //..3...../..0..d. |
/* 0f10 */ "\xdf\xc1\x7d\x48\xfb\x2a\xc6\x01\xda\x0c\x7b\x3d\x02\x49\xb5\x46" //..}H.*....{=.I.F |
/* 0f20 */ "\xaf\xc1\x7e\xce\x79\xe6\x46\x05\xaa\x00\xc4\x08\x00\x3e\x3d\x41" //..~.y.F......>=A |
/* 0f30 */ "\x4a\x6d\x4e\x37\x49\xb5\xd4\xe6\xed\x77\xba\xd4\x01\x43\x02\xfc" //JmN7I....w...C.. |
/* 0f40 */ "\xbb\x38\x0a\x32\x10\x05\xaa\x01\x0c\x3c\x94\x1f\xed\xdc\x4d\x40" //.8.2.....<....M@ |
/* 0f50 */ "\xf2\x39\xc0\x5b\xc1\xc1\x4e\x0c\x0f\x98\x8c\x0a\xfb\x0c\xdf\xf6" //.9.[..N......... |
/* 0f60 */ "\xe3\x82\xdd\x0a\xfd\xf7\xd3\x70\x45\x91\x52\x1f\x94\xe0\x77\x78" //.......pE.R...wx |
/* 0f70 */ "\x0a\xe6\x85\x7c\x2b\x1c\x0d\x67\xc3\x30\xe0\xc3\x68\x07\xf3\x8b" //...|+..g.0..h... |
/* 0f80 */ "\xe7\xbc\xf2\x20\x84\x60\x28\x64\x23\xfb\xb0\x14\x93\x01\x8d\x41" //... .`(d#......A |
/* 0f90 */ "\x03\x07\xc8\x54\x04\xbc\x3c\xc0\x44\x00\x7e\x00\xef\x04\x48\x86" //...T..<.D.~...H. |
/* 0fa0 */ "\x02\x77\x42\x3d\xdc\xe0\x33\x38\x09\xd1\x80\xa4\xc3\x1e\x14\x8c" //.wB=..38........ |
/* 0fb0 */ "\x05\x77\x0c\x02\x1e\x44\x39\x30\xda\x02\x3d\xdb\x7c\x7a\x82\x08" //.w...D90..=.|z.. |
/* 0fc0 */ "\x35\x8e\x5f\x0f\x0f\x10\x66\x18\x0a\xa5\x18\x73\xfb\xb1\xe3\xc8" //5._...f....s.... |
/* 0fd0 */ "\x41\xac\x07\x7d\x77\x84\x81\x1e\x5b\x7c\x77\x99\xc1\x7f\xba\x24" //A..}w...[|w....$ |
/* 0fe0 */ "\x0e\xac\x36\x8c\x03\x68\xf3\xe0\x4f\xbf\x41\x40\x04\x03\x05\x29" //..6..h..O.A@...) |
/* 0ff0 */ "\x08\x12\x08\x22\x08\x36\x07\x66\x1b\x40\x4f\xa7\xdf\xee\x28\xc8" //...".6.f.@O...(. |
/* 1000 */ "\x35\x08\x12\x0d\x61\x06\xd0\xf3\xfe\x08\x35\x00\x9f\x62\x18\x05" //5...a.....5..b.. |
/* 1010 */ "\x7e\x58\x81\x63\xe5\x9c\x3b\x53\x10\x65\x1d\x4e\xe3\x06\x6d\x30" //~X.c..;S.e.N..m0 |
/* 1020 */ "\x01\x0a\xa0\x00\x30\x15\x80\xbb\x98\x00\x7c\x83\x60\x00\x30\xc5" //....0.....|.`.0. |
/* 1030 */ "\x6c\x8f\x00\x3b\x7b\x90\x6a\x04\x3c\xab\x58\x01\x84\x00\x1d\x03" //l..;{.j.<.X..... |
/* 1040 */ "\x41\xb4\x60\x03\xa0\xc7\x2a\x87\x9c\xc0\x01\x98\x0a\xda\x20\x00" //A.`...*....... . |
/* 1050 */ "\x05\x1c\xa6\xde\x91\x30\x06\xb0\xda\x20\x9e\x2b\x4c\x30\x16\x09" //.....0... .+L0.. |
/* 1060 */ "\x00\x3b\xd6\x46\x01\x16\x1b\x47\xe2\x88\x40\x01\x07\x08\x20\x87" //.;.F...G..@... . |
/* 1070 */ "\x2f\xd5\xa3\xc3\x22\x08\x87\x59\xd7\x85\x0c\x02\x8c\x36\x80\xbf" ///..."..Y.....6.. |
/* 1080 */ "\x1f\xba\x7c\x3c\x08\xf8\xa5\x8f\x8a\x00\x28\xf2\x94\x52\x08\x12" //..|<......(..R.. |
/* 1090 */ "\x20\x88\x32\x84\x19\xc6\x03\x03\x5a\x3a\x91\x30\x1e\xa5\xff\x76" // .2.....Z:.0...v |
/* 10a0 */ "\x36\x0c\x60\x9c\x76\x03\x98\x08\x60\xdf\xb5\x88\x0a\x4a\x04\x7a" //6.`.v...`....J.z |
/* 10b0 */ "\x00\xa8\x00\x06\x27\x81\x45\x9c\x9d\xa8\x44\x17\x27\xdd\x88\x2e" //....'.E...D.'... |
/* 10c0 */ "\x10\x1c\x05\x7f\x14\x00\xa8\xe8\x4d\x0a\x38\x13\x42\x7c\x09\xec" //........M.8.B|.. |
/* 10d0 */ "\x42\x7a\x09\xa1\x2c\x84\xc3\x70\x03\xfd\xf5\xdd\x5c\x00\x13\xc4" //Bz..,..p........ |
/* 10e0 */ "\x66\x29\x4a\x4c\x6e\x2c\x76\xe5\xa0\x93\xac\x38\xb6\xc0\x17\x06" //f)JLn,v....8.... |
/* 10f0 */ "\x0c\x06\x4e\x81\x47\x4c\xaf\xdc\xa7\x62\x0f\x7e\xaf\x0d\xc7\x62" //..N.GL...b.~...b |
/* 1100 */ "\x68\x50\xbc\x01\x44\x01\xc5\x27\xca\x25\x7f\x1a\x34\x05\x24\xa0" //hP..D..'.%..4.$. |
/* 1110 */ "\x30\x39\x96\x19\xe5\x2d\x60\x24\xb4\x09\x75\x2e\x3f\x77\x6b\xe5" //09...-`$..u.?wk. |
/* 1120 */ "\x8a\x9e\x9d\x31\x77\x4b\x76\xdb\x01\xc0\x46\x00\x6a\x00\x6d\xcd" //...1wKv...F.j.m. |
/* 1130 */ "\x7c\x6a\x22\x02\xac\x65\xd3\xac\x3a\x44\xff\x6f\x6c\xff\x20\x26" //|j"..e..:D.ol. & |
/* 1140 */ "\x35\x90\x18\x0c\x77\xf1\x18\x7e\x42\x7f\x77\xa8\x02\x41\xfa\x2f" //5...w..~B.w..A./ |
/* 1150 */ "\xa2\xd2\x3e\x90\x2a\xf4\x32\xa0\x07\x20\x10\x01\x84\x8f\xd7\xe7" //..>.*.2.. ...... |
/* 1160 */ "\xcb\x67\xa4\x43\xa3\x51\xd3\x29\xf2\xdb\xf4\x96\x3f\x6f\xfe\xa0" //.g.C.Q.)....?o.. |
/* 1170 */ "\x32\x0b\x7f\x83\xc4\x25\x60\x30\x7a\xfd\xfe\x7a\x64\xf4\x13\x4f" //2....%`0z..zd..O |
/* 1180 */ "\x00\x7e\xbf\xd7\xef\xf3\x6a\x66\x02\x8c\x02\x30\xe0\xb0\x34\x74" //.~....jf...0..4t |
/* 1190 */ "\xcb\x01\x08\x20\x55\xd1\x11\xe6\xcf\x01\x84\x79\x30\xac\x17\x60" //... U......y0..` |
/* 11a0 */ "\x18\x0d\x79\x8f\xc9\xa8\x1c\x8a\xd0\xdb\x73\xba\xd9\x3f\x48\x0c" //..y.......s..?H. |
/* 11b0 */ "\x83\x97\xfa\x7f\x56\x6d\xf1\xe0\x10\x8d\x64\x07\x01\x92\x2d\xfc" //....Vm....d...-. |
/* 11c0 */ "\x7e\xe2\x04\xc5\x60\x8e\x04\xe1\x06\xf0\x1a\x06\x03\xf8\x4f\xe9" //~...`.........O. |
/* 11d0 */ "\xd4\xa8\x02\x55\x40\x09\x00\xcf\xc0\x60\x02\xbf\xc8\x20\x39\x01" //...U@....`... 9. |
/* 11e0 */ "\x63\x29\xb5\x40\x67\x4b\x5f\x8a\xfd\x4a\xa8\x01\x21\x53\x7c\x64" //c).@gK_..J..!S|d |
/* 11f0 */ "\xf4\x13\xc2\x2a\x80\x15\x85\xa8\x06\x87\x76\x15\x80\xc7\xee\xfd" //...*......v..... |
/* 1200 */ "\x4b\xd3\xfa\x73\x7f\xe0\x8a\x01\x1f\x9b\x61\xaf\x0c\xb9\xc5\x40" //K..s......a....@ |
/* 1210 */ "\x12\x40\x57\xcb\x4e\x17\x4a\xbd\x4c\x1e\x8a\x87\xf8\x70\xd3\xe1" //.@W.N.J.L....p.. |
/* 1220 */ "\xc3\x01\x88\x0d\x40\x16\xc6\x82\x03\x01\x1d\x43\x00\xf9\xeb\x1d" //....@......C.... |
/* 1230 */ "\x5c\x06\x02\xfd\x1d\xa2\xa1\x5d\xaa\x00\x96\x18\x5f\x85\x04\x01" //.......]...._... |
/* 1240 */ "\x1f\x54\x01\x5f\xfc\x88\x0c\x94\x06\x02\x7a\x96\xc0\x05\xe2\xf8" //.T._......z..... |
/* 1250 */ "\x90\x1c\xf9\x85\xef\x15\x83\xc3\xe0\x48\x05\xc3\xf4\x24\x0f\x3f" //.........H...$.? |
/* 1260 */ "\x28\x46\xd3\xe2\x9a\x23\xe7\xe8\x8e\x1d\x79\x19\x5d\x3a\xa8\x01" //(F...#....y.]:.. |
/* 1270 */ "\xb0\x04\x04\xc0\x6b\xf5\x6a\x80\x15\x80\xef\xc0\x02\x2e\x09\xe5" //....k.j......... |
/* 1280 */ "\xb0\x18\x0b\xfd\xbf\x01\xe3\x8e\xfd\x7c\x60\xf0\xf8\x0c\x06\x58" //.........|`....X |
/* 1290 */ "\x03\x02\x7d\xbf\xab\x9c\xb0\x01\xf8\x72\x2c\x30\x3e\x0d\x51\x03" //..}......r,0>.Q. |
/* 12a0 */ "\x7f\xa3\x0f\x4f\xbf\x3c\x64\x43\x67\x01\x93\xd7\xc5\x00\x1c\xfe" //...O.<dCg....... |
/* 12b0 */ "\xc7\xf1\x40\xa2\x57\x41\x26\x16\x00\x4f\xd8\x04\x41\x81\x80\xb3" //..@.WA&..O..A... |
/* 12c0 */ "\x70\x96\x5f\xeb\xde\x79\x43\x3f\x1b\xd5\x4a\x80\x14\x85\x68\x06" //p._..yC?..J...h. |
/* 12d0 */ "\x07\x5b\xbf\x50\xed\x16\xd8\x43\x00\x2f\x0c\x31\xea\x5d\x44\x00" //.[.P...C./.1.]D. |
/* 12e0 */ "\xa4\x06\x05\x1f\xa7\x78\xf4\x08\xc0\x21\xf9\x96\x0a\xc8\x0d\x40" //.....x...!.....@ |
/* 12f0 */ "\x04\x8e\xec\x03\x04\x59\xbb\x12\x5a\x58\x6d\x12\x89\x83\x00\x3c" //.....Y..ZXm....< |
/* 1300 */ "\x74\x26\x0e\x3a\x87\x7e\x86\x0f\x4d\x9f\xe8\xc7\xf3\xe5\xe8\xeb" //t&.:.~..M....... |
/* 1310 */ "\xea\x9b\x3f\xfa\x2e\x95\x51\x28\x31\x3e\x27\x29\x55\xa9\x8f\x92" //..?...Q(1>')U... |
/* 1320 */ "\xc9\x8e\xa0\xc0\x37\x1d\x09\x65\xf9\x47\xa1\x11\x6c\x05\x4c\xa4" //....7..e.G..l.L. |
/* 1330 */ "\x51\xc0\x20\x6f\x58\x0c\xfc\xf8\x12\x3b\x01\x35\x19\xc0\xa3\x51" //Q. oX....;.5...Q |
/* 1340 */ "\xc9\x61\x06\x02\xc1\x2d\x26\x90\x09\x68\x05\xc7\x02\x2a\x05\x70" //.a...-&..h...*.p |
/* 1350 */ "\x3a\x72\xa0\x11\x80\x8e\xa0\x8b\x00\x68\xc4\x10\x07\x00\x56\x2e" //:r.......h....V. |
/* 1360 */ "\x18\x12\xac\x23\x02\x41\x9c\x60\x47\xc8\xc0\x19\x33\x03\x67\x00" //...#.A.`G...3.g. |
/* 1370 */ "\xb9\x00\x3e\x04\xe0\x3d\xf3\xc6\x04\x9d\x89\x68\x07\x60\xe4\x0c" //..>..=.....h.`.. |
/* 1380 */ "\x8b\x01\xc3\x9e\xc2\x43\x30\x38\x6b\x02\x38\xc5\xcb\x00\x71\x46" //.....C08k.8...qF |
/* 1390 */ "\x02\x39\x5c\xb0\xc7\xd1\x06\xc1\x80\x7b\x23\x02\x34\x41\xb8\x4e" //.9.......{#.4A.N |
/* 13a0 */ "\x3a\xfd\x84\x6c\x02\xee\xa2\xf1\xcb\x71\x04\x24\x60\x59\x47\xd8" //:..l.....q.$`YG. |
/* 13b0 */ "\x3e\x04\xf6\x30\x71\xf6\x54\x5b\xc2\x7d\x9a\xe8\x66\xc0\x8c\xaf" //>..0q.T[.}..f... |
/* 13c0 */ "\x22\x41\x20\x06\x1a\xc4\x60\x1a\x78\x05\xb0\xf0\xa9\x01\x74\x6e" //"A ...`.x.....tn |
/* 13d0 */ "\x60\x47\x16\x05\x62\x8e\xca\x4f\x25\xb8\x1c\xb8\x6c\x10\x6a\x1e" //`G..b..O%...l.j. |
/* 13e0 */ "\x09\x14\x60\x5b\x1a\xa7\x80\x60\x07\x76\x05\x78\x54\x00\xac\xdf" //..`[...`.v.xT... |
/* 13f0 */ "\xc4\x06\xc2\xb1\xd2\x32\x1f\x3c\x44\x14\x09\xc5\x11\x71\x50\x02" //.....2.<D....qP. |
/* 1400 */ "\x1c\xf1\x08\x10\x82\x91\x81\x72\x29\x64\x27\xb4\x5c\x60\x68\x72" //.......r)d'..`hr |
/* 1410 */ "\x0d\x63\x83\x5b\xc9\x8b\x97\x8d\xa7\xea\x3a\x89\x22\x1f\x4d\xd7" //.c.[......:.".M. |
/* 1420 */ "\x71\x2d\xf0\xb3\x02\x46\x38\x86\x88\x25\x00\x3e\x34\x60\x57\xf8" //q-...F8..%.>4`W. |
/* 1430 */ "\xf1\x1b\x03\x88\x81\x7d\x54\xf7\x30\x5f\x01\x99\x3c\x34\x06\x61" //.....}T.0_..<4.a |
/* 1440 */ "\x88\x78\xb2\x30\x31\x5c\x1b\x04\xe2\x32\x48\xf8\xe1\x6c\x06\x52" //.x.01....2H..l.R |
/* 1450 */ "\x00\x08\xc0\x5d\x8f\x0b\x46\x07\x22\x03\xff\xc7\x00\x38\xf9\x2f" //...]..F."....8./ |
/* 1460 */ "\x7c\x57\xc9\x7b\xb6\x2e\x60\x1f\xc6\x7d\xc5\x18\x1c\x1c\x11\xe6" //|W.{..`..}...... |
/* 1470 */ "\xd7\x06\xd8\xf9\x2c\x0d\xf7\x88\x3e\x02\xbb\x60\x60\x68\xf9\x2c" //....,...>..``h., |
/* 1480 */ "\x0b\xcf\x18\x14\x1d\xd1\x94\x20\x03\x80\x13\xd8\x1b\xc2\x45\x02" //....... ......E. |
/* 1490 */ "\x47\xa0\x3e\x84\x04\x10\x74\x78\x78\x0c\x2d\x81\x33\x43\xdc\x97" //G.>...txx.-.3C.. |
/* 14a0 */ "\x55\x12\x08\x47\xa5\x30\x02\xe7\xa0\xeb\xb0\x06\x41\x8c\x7a\x4e" //U..G.0......A.zN |
/* 14b0 */ "\xb0\x37\xb0\x03\xe8\xc0\x29\x07\xd1\x7a\x5a\x25\x9e\xa4\x7d\x18" //.7....)..zZ%..}. |
/* 14c0 */ "\x04\xc0\xea\x90\x47\xf4\x5e\x96\x60\x69\xb7\x62\xf7\xa9\xde\x27" //....G.^.`i.b...' |
/* 14d0 */ "\x7a\x66\x87\x7b\xce\x42\xa8\x00\x1b\x3f\x3e\x6c\x59\x41\x55\xb9" //zf.{.B...?>lYAU. |
/* 14e0 */ "\xf3\x32\x01\x2a\x00\x3d\x40\x0a\xc0\x12\x2c\x07\xbc\xed\xee\xc0" //.2.*.=@...,..... |
/* 14f0 */ "\x2d\x70\x15\xf2\x54\x0c\x07\x7e\xc0\x7a\x00\x4f\x9c\x1a\xe3\x0a" //-p..T..~.z.O.... |
/* 1500 */ "\x1e\x01\x81\xc9\x8c\x5d\x65\xab\xb6\xfe\x78\x91\x8a\xec\xc0\x38" //.....]e...x....8 |
/* 1510 */ "\x9d\xcd\xf2\xe0\x07\x9e\x7b\x12\xee\xbe\x5c\x63\x98\x28\xc5\x03" //......{....c.(.. |
/* 1520 */ "\x6f\x96\x81\x1a\xc9\x48\x00\x46\xb9\x7c\x3b\x28\xa4\xc6\x33\xeb" //o....H.F.|;(..3. |
/* 1530 */ "\xbf\x1f\x67\x6d\x97\x28\x67\x02\xe0\x1e\x0f\x57\x54\x00\x79\xf0" //..gm.(g....WT.y. |
/* 1540 */ "\xaa\x18\x74\x19\xc2\xa5\x87\xa7\x23\xeb\xc4\x08\x40\x07\x0a\x3e" //..t.....#...@..> |
/* 1550 */ "\x00\x00\x10\x07\xc6\x60\x2c\x03\xfc\xbb\xde\x95\x3a\xcb\x78\x2e" //.....`,.....:.x. |
/* 1560 */ "\xb9\x3a\x44\x29\x4b\xe2\xad\x6b\x5f\xe5\x45\xe4\xae\x04\xc9\x88" //.:D)K..k_.E..... |
/* 1570 */ "\xea\x80\x24\xea\xad\xf5\x1f\x29\x03\x9f\xe1\xe8\xf0\x00\xf6\x04" //..$....)........ |
/* 1580 */ "\x3b\x73\x41\x77\x64\x8c\x38\xd4\xc4\x0d\x8b\xc4\xf5\x8a\xef\x93" //;sAwd.8......... |
/* 1590 */ "\x3c\xdf\xfe\x70\x81\x0b\x9a\x58\x90\x02\xa0\x1a\xca\x52\x42\x09" //<..p...X.....RB. |
/* 15a0 */ "\x92\xde\x0c\xa5\x34\x01\x4c\x0a\x04\xf3\x04\x4f\xee\xf2\x21\x0c" //....4.L....O..!. |
/* 15b0 */ "\x08\xfa\xa8\x02\x3e\xdb\xc0\x60\x51\xde\x9b\x0a\x80\x1d\x0b\xcc" //....>..`Q....... |
/* 15c0 */ "\x4f\x03\x45\x40\x12\x7f\x77\x01\x81\x52\xd6\x98\x02\xc6\xb9\x88" //O.E@..w..R...... |
/* 15d0 */ "\x87\xbc\x12\x23\xc6\xaf\xa8\xf5\xde\xa0\x0d\x22\xe5\x32\xc2\x0d" //...#.......".2.. |
/* 15e0 */ "\xee\x79\xd4\x06\xa3\xcd\x22\x40\xd0\x7c\x56\x04\xb5\x2d\x00\xc0" //.y...."@.|V..-.. |
/* 15f0 */ "\x8c\x60\x84\x1e\xf4\x01\x20\x79\x34\x06\x95\xed\x47\xdd\x61\x08" //.`.... y4...G.a. |
/* 1600 */ "\x90\x0d\x40\x1b\xd8\x6e\x01\x63\xaf\xae\xf9\x53\xe5\x78\x9b\x4d" //..@..n.c...S.x.M |
/* 1610 */ "\x68\x00\x1f\xb1\x40\x0b\xfa\x0f\x68\x40\x37\xb4\x2c\x17\x0f\x4d" //h...@...h@7.,..M |
/* 1620 */ "\xb8\x49\x2d\xe0\x30\x18\xb3\x1e\x05\x50\xaf\xaa\x03\x23\x21\xc3" //.I-.0....P...#!. |
/* 1630 */ "\x71\x51\xc3\x05\x81\x63\xe2\xa0\x03\x00\xe3\x3a\x04\xf2\x3a\xa3" //qQ...c.....:..:. |
/* 1640 */ "\xec\xc8\x05\xf3\x94\xb1\xa8\x80\xc0\x97\xa3\xbd\x52\x40\x4c\xff" //............R@L. |
/* 1650 */ "\x74\x06\xd4\xd6\x03\xea\xf3\x08\x44\x83\x02\xf8\xb2\x8b\xe0\x06" //t.......D....... |
/* 1660 */ "\xa0\x19\xec\x27\x87\x90\x5a\xb0\x0c\x06\x7a\x23\xce\x86\x60\x37" //...'..Z...z#..`7 |
/* 1670 */ "\xfa\xb7\x4e\xf5\x40\x06\x9f\xfc\x1e\x53\x9c\x4c\x06\xf6\xe8\x06" //..N.@....S.L.... |
/* 1680 */ "\xc1\x80\x20\x5e\x34\x8a\x18\xc0\x0d\x47\xc3\x70\x0a\xb5\xe8\xb7" //.. ^4....G.p.... |
/* 1690 */ "\xe9\x01\xa0\x73\xa0\x57\xef\xf7\xde\xb6\x52\x6d\xcf\x5c\x7b\x5f" //...s.W....Rm..{_ |
/* 16a0 */ "\x01\x81\x62\x41\xa7\xb9\x61\x00\x7f\xc6\x8f\x28\xbc\x68\xc4\xc1" //..bA..a....(.h.. |
/* 16b0 */ "\x80\x0a\x11\x00\x04\x0f\x12\xee\xc5\x8c\x62\xa0\x0d\xc2\x81\xeb" //..........b..... |
/* 16c0 */ "\xc0\x08\x0c\x09\xff\x09\x59\x3f\xda\xa0\x09\x51\xe2\xbc\x10\x82" //......Y?...Q.... |
/* 16d0 */ "\x60\x61\x74\x0a\x80\x2a\x50\x85\xc0\x42\xa1\xce\x6c\x58\x9c\x05" //`at..*P..B..lX.. |
/* 16e0 */ "\x4b\x5a\x21\x62\x45\x29\x80\xe1\xfa\xfa\x01\x81\xc7\x9f\x27\xa7" //KZ!bE)........'. |
/* 16f0 */ "\x51\xe7\xce\x20\xa8\x19\xfc\xf8\xf5\x2c\x75\x0e\xa0\x09\x8d\x11" //Q.. .....,u..... |
/* 1700 */ "\xd8\x75\xf0\xc1\x81\x90\x80\x03\xf1\x69\xaf\x55\xc7\x15\xd6\x00" //.u.......i.U.... |
/* 1710 */ "\x11\x04\x54\x00\xa8\xe7\x20\x3d\x9e\x14\x26\x00\x8c\x03\x8a\x81" //..T... =..&..... |
/* 1720 */ "\xb7\x76\xec\x40\x38\x6d\x44\x06\x21\x04\x0b\xa8\x00\xf8\x85\xc7" //.v.@8mD.!....... |
/* 1730 */ "\x3d\x74\x8e\x04\xc0\x63\xd2\x5c\x01\xbe\x8a\x73\x88\x00\xb5\x62" //=t...c.....s...b |
/* 1740 */ "\x14\x92\x07\x1b\x41\x5a\xe0\x5d\x40\x09\xfb\xb1\x68\x09\xeb\x81" //....AZ.]@...h... |
/* 1750 */ "\xa1\xf9\xf3\xa3\xe8\x20\x06\x08\x3f\x5f\x3d\x22\x8e\x84\xc7\x54" //..... ..?_="...T |
/* 1760 */ "\xea\x00\xbd\x98\x10\x47\xe7\xce\x50\xe0\x0b\x06\x07\x30\x58\xc8" //.....G..P....0X. |
/* 1770 */ "\xe8\x57\x38\xe5\x40\x0f\x14\xca\xc4\xfa\xef\x44\xf9\x60\x25\xaa" //.W8.@......D.`%. |
/* 1780 */ "\x76\x01\xb7\x10\xfd\x64\x1e\x3a\x12\xfa\x55\x7e\x86\x1f\x4f\x87" //v....d.:..U~..O. |
/* 1790 */ "\xa6\xd3\xe8\x25\xf4\x67\x04\xe6\xa1\x57\xd1\x95\xe7\x4a\xf4\xd5" //...%.g...W...J.. |
/* 17a0 */ "\xfe\x8d\x1e\x92\x9e\xa5\xc7\x42\x63\x81\x2d\x18\x15\xb1\xc8\x74" //.......Bc.-....t |
/* 17b0 */ "\x29\x42\x2c\x63\xa8\x01\xd3\xde\xf8\x07\x44\x8b\x10\x76\x30\x43" //)B,c......D..v0C |
/* 17c0 */ "\xf4\x60\x70\xc4\x17\x8f\xd0\x0b\x03\xd5\xaa\x00\x97\xba\xf0\x0d" //.`p............. |
/* 17d0 */ "\x47\xce\x90\xda\xd7\x4f\x7b\xc1\x0e\x48\x14\x67\x03\xed\x06\x78" //G....O{..H.g...x |
/* 17e0 */ "\x12\xb8\x43\xb8\x34\xc5\x45\x9b\x82\x48\x63\x29\x0a\xb0\x43\x94" //..C.4.E..Hc)..C. |
/* 17f0 */ "\x32\x7a\x9e\x30\x5a\xbb\xee\x46\x52\xd9\x54\x67\xb7\x70\x1c\x7f" //2z.0Z..FR.Tg.p.. |
/* 1800 */ "\x90\x15\xc0\xfd\x53\x92\xb5\x1c\x22\xe2\x89\x3e\xbb\xd4\x62\x51" //....S..."..>..bQ |
/* 1810 */ "\x40\x1c\x4d\xe2\x15\x80\xa7\xf0\xa2\x01\x48\x00\x40\x7a\x82\xa0" //@.M.......H.@z.. |
/* 1820 */ "\x58\x92\xfe\x05\x20\x2a\x9e\x97\x00\x0a\xb8\x00\x60\x0c\xc2\xcf" //X... *......`... |
/* 1830 */ "\x97\x98\x1a\x38\x09\xc7\x3c\x44\x3e\x33\x81\x25\xd8\x11\x90\x09" //...8..<D>3.%.... |
/* 1840 */ "\x01\x27\xf1\x14\x60\x49\x58\x04\xc1\x1b\xf3\x40\xe5\xcb\x02\x38" //.'..`IX....@...8 |
/* 1850 */ "\x1e\x2d\x91\x1e\x80\x90\x11\x6f\xfc\x60\xc1\x1c\xa8\xe6\x08\xe5" //.-.....o.`...... |
/* 1860 */ "\x5e\xc2\x70\x3c\x98\x7b\x04\x7e\xc6\x08\xe5\x8b\x1f\xf7\x98\x06" //^.p<.{.~........ |
/* 1870 */ "\x07\x71\x9a\x7f\x87\x54\x8c\x11\xae\xa0\x00\xf8\xa1\xd2\x20\x27" //.q...T........ ' |
/* 1880 */ "\x01\xa6\xf8\x04\x40\x16\x21\x02\x44\xe9\x56\x12\x80\xcc\xbc\x0d" //....@.!.D.V..... |
/* 1890 */ "\x18\x13\x6a\x39\xd4\x84\xa0\x33\x7f\x23\xa4\x02\xb8\x13\x5d\xd0" //..j9...3.#....]. |
/* 18a0 */ "\x7c\x23\x01\x9e\x78\x58\x00\x3e\x25\xd0\x29\xee\x74\x06\x0b\xe1" //|#..xX.>%.).t... |
/* 18b0 */ "\x69\x20\x14\xa6\xd8\x04\xf1\x51\xfb\x9f\xc8\x46\x03\x0a\x1d\x60" //i .....Q...F...` |
/* 18c0 */ "\x08\x61\x1f\x05\xf1\xb8\x46\x02\xde\x29\x81\x47\x00\x3c\xee\x82" //.a....F..).G.<.. |
/* 18d0 */ "\x10\x17\x41\x3f\x96\xc2\xf5\xac\x03\x02\x79\xc1\x42\x50\x8a\x01" //..A?......y.BP.. |
/* 18e0 */ "\x82\x80\x60\x88\x7f\xeb\x4b\xd7\xe1\x23\x63\xeb\x58\xb8\xfd\xf1" //..`...K..#c.X... |
/* 18f0 */ "\x58\xaf\xc9\x34\xfc\x91\x86\x0a\x4c\x80\x2f\x92\x15\xc1\x49\x8f" //X..4....L./...I. |
/* 1900 */ "\xcc\x59\x09\x0f\x80\x8d\x05\x00\x07\xf4\x6d\x38\x7f\xc5\x8f\xf8" //.Y........m8.... |
/* 1910 */ "\xc5\x3b\xef\xad\x18\x29\xf6\x21\x5f\x25\x6d\xfe\x30\x8f\xf2\x55" //.;...).!_%m.0..U |
/* 1920 */ "\x2f\xe2\xe8\x86\x10\x80\xd5\xfc\x57\x18\x2d\x51\x01\xad\x84\x80" ///.......W.-Q.... |
/* 1930 */ "\x63\x76\x19\x56\x00"                                             //cv.V. |
// Sent dumped on RDP Client (5) 6453 bytes |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](30) used=1082 free=15196 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(930,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=87) |
// front::draw:draw_tile((0, 704, 32, 32) (32, 32, 32, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](2064) used=1088 free=15190 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](30) used=1110 free=15168 |
// order(13 clip(145,200,110,1)):memblt(cache_id=1 rect(0,704,32,32) rop=cc srcx=0 srcy=0 cache_idx=0) |
// Widget_load: image file [./tests/fixtures/ad8b.png] is PNG file |
// front::draw:draw_tile((100, 100, 26, 32) (80, 50, 26, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](1808) used=1125 free=15153 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](30) used=1440 free=14838 |
// order(13 clip(145,200,110,1)):memblt(cache_id=1 rect(100,100,26,32) rop=cc srcx=0 srcy=0 cache_idx=1) |
// Front::end_update() |
// GraphicsUpdatePDU::flush_orders: order_count=6 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 1100 bytes |
/* 0000 */ "\x00\x84\x4c\x80\x21\x45\x04\xc9\xdd\xa2\xbc\x1f\x84\xe8\x79\x45" //..L.!E........yE |
/* 0010 */ "\x20\x8a\xe0\x18\x05\x88\x90\x03\x06\x81\x08\x24\xa5\x06\x31\x96" // ..........$..1. |
/* 0020 */ "\x31\xa4\xe2\x6d\xa6\x20\xf2\x02\x10\xaa\xcb\x78\xd5\x31\x33\x9a" //1..m. .....x.13. |
/* 0030 */ "\xa0\x0c\xd3\xc5\x71\xd0\x9a\x81\x7a\x13\x44\xfa\xef\x43\xfb\x2a" //....q...z.D..C.* |
/* 0040 */ "\xbc\xf4\x7f\xa0\xa1\x76\xdf\x81\x4b\x99\x23\x89\xdd\x55\xca\x09" //.....v..K.#..U.. |
/* 0050 */ "\xc9\x9e\x3a\x0b\xc0\x2f\x41\x78\x03\xe3\x86\x80\x9e\xd9\xfa\x1f" //..:../Ax........ |
/* 0060 */ "\xb0\xe5\xe4\x30\x84\x0e\x59\xf8\xf0\x3f\xb9\x00\x13\xee\x3a\x02" //...0..Y..?....:. |
/* 0070 */ "\x30\x00\x5c\xfd\xb5\x40\x0f\x87\x43\x89\xdc\x8c\xf4\x7b\xa9\x73" //0....@..C....{.s |
/* 0080 */ "\x9f\x2a\xd9\x82\x3f\x5b\xed\xef\x74\xbc\x60\x6c\xc0\xa1\x8c\x01" //.*..?[..t.`l.... |
/* 0090 */ "\xb4\xf1\xf0\x13\xa5\x7b\xa0\x2c\xfc\xd9\xfd\x6e\x87\xb3\x8a\x7d" //.....{.,...n...} |
/* 00a0 */ "\x9f\xe5\xcb\x6a\x01\x26\xd3\x5c\x73\x79\x18\xa0\x75\xc9\xce\x00" //...j.&..sy..u... |
/* 00b0 */ "\xe4\x5f\xda\x80\xf0\xb1\x23\xa0\xb4\xf4\x0c\xbe\x76\x68\x0c\x39" //._....#.....vh.9 |
/* 00c0 */ "\xcf\xf9\xb8\xcb\xaa\x00\x98\x68\x39\xe4\xea\xf3\xe0\x11\xc7\xc4" //.......h9....... |
/* 00d0 */ "\x11\x89\xd5\x5c\xe3\x67\x8d\xc4\xfc\xa9\xc4\xed\xcf\xde\xf1\xc3" //.....g.......... |
/* 00e0 */ "\xc2\x94\xbb\x6f\xe8\xd1\x00\x76\x2c\x1c\x1c\xf4\x1b\x12\x74\x47" //...o...v,.....tG |
/* 00f0 */ "\x85\x67\x8e\x64\xf8\x1e\x3f\x2c\xac\xd3\xbf\x9b\xd3\x2e\x89\xf4" //.g.d..?,........ |
/* 0100 */ "\x0d\xed\x68\x03\x29\xc0\x3d\x2f\x28\x80\xbc\x5f\x60\x7d\x06\xe0" //..h.).=/(.._`}.. |
/* 0110 */ "\x17\xf2\x4f\x91\x9d\x24\x03\x3f\x7a\x58\x7f\x80\x0e\xc9\xe6\x57" //..O..$.?zX.....W |
/* 0120 */ "\xcd\x02\xfb\x21\xea\x59\xf1\xfd\xfa\x05\xf5\xe0\x13\xc4\x4e\xa9" //...!.Y........N. |
/* 0130 */ "\xb3\xef\x71\x21\x0f\x24\xb7\xdd\x80\x4a\x47\x55\x80\x2b\x42\x57" //..q!.$...JGU.+BW |
/* 0140 */ "\xca\x7d\xf9\x9f\x5d\xfe\x53\xa1\x02\xa0\x09\xc2\x01\x50\x04\xaf" //.}..].S......P.. |
/* 0150 */ "\xdf\xc0\x71\x5b\x20\x67\x16\x4f\xa8\x5c\xd8\x1e\x9c\x90\x57\xcf" //..q[ g.O......W. |
/* 0160 */ "\x6a\xc7\x98\x20\x0f\xc6\xb0\x08\xf5\xec\xc0\x21\x9d\x9f\xec\xba" //j.. .......!.... |
/* 0170 */ "\x2e\x86\x7d\x6c\xa1\x63\xb4\x03\x08\x45\x40\x0e\x4b\xe9\x97\x8d" //..}l.c...E@.K... |
/* 0180 */ "\xe3\x0d\xfb\xaa\x00\x8b\x34\xef\xe0\x3d\xfc\xce\x01\xf1\xf5\xe0" //......4..=...... |
/* 0190 */ "\x0c\xb1\x8f\xe6\xbd\x44\xc5\x94\x61\x9c\x4f\xf0\xc0\x04\xce\x12" //.....D..a.O..... |
/* 01a0 */ "\xc0\x43\x38\x20\x0c\x12\x7d\x8a\x11\x8c\x3d\x10\x55\x00\x5a\x5a" //.C8 ..}...=.U.ZZ |
/* 01b0 */ "\xd6\x02\xc1\x04\xfb\x05\xf3\x5e\x33\x88\x26\x27\x6e\x89\x31\x8e" //.......^3.&'n.1. |
/* 01c0 */ "\x23\x16\x70\x96\x88\x0d\xd2\x38\x33\x89\xfe\x10\x21\x06\x3f\x17" //#.p....83...!.?. |
/* 01d0 */ "\xc4\x39\xcc\x05\x8f\x87\x5b\x80\xe8\x13\x89\x84\x4d\xa6\xb5\x00" //.9....[.....M... |
/* 01e0 */ "\x4e\x74\x4a\x80\x2f\x11\x17\x40\xe6\x26\x35\x7b\xa6\x28\x8c\x38" //NtJ./..@.&5{.(.8 |
/* 01f0 */ "\x14\xfd\xe1\x96\x17\x10\x73\xe4\x9e\x25\x6a\x80\x2e\x3b\xbd\x54" //......s..%j..;.T |
/* 0200 */ "\x01\x25\xbc\x1f\x01\x1c\x05\xc0\x18\x97\x9d\xdb\xcd\xc2\x05\xc7" //.%.............. |
/* 0210 */ "\xf1\x4b\x5a\xa8\xf0\x0c\x65\x35\x50\x21\x0e\x02\xb9\x70\x16\x8e" //.KZ...e5P!...p.. |
/* 0220 */ "\x84\x08\x11\x4e\x08\x0b\x54\x01\x7d\xde\xed\xf6\xc0\x25\xce\x7e" //...N..T.}....%.~ |
/* 0230 */ "\xec\x0c\xfc\x63\x01\xc1\xd2\x62\x00\x06\xa4\xa8\x96\x55\xb8\x1c" //...c...b.....U.. |
/* 0240 */ "\x51\xa6\xd3\x57\x1c\x4e\x82\xc0\x06\x6e\x83\x0a\x25\xce\x39\x08" //Q..W.N...n..%.9. |
/* 0250 */ "\xc5\x8a\x2c\x08\x86\x97\x63\x56\xc0\xc5\x19\x56\x5b\x87\x22\x99" //..,...cV...V[.". |
/* 0260 */ "\x15\xd9\x42\xa7\xbd\xe2\xcd\x00\x00\xed\x08\x42\x09\xc2\x21\x82" //..B........B..!. |
/* 0270 */ "\xc0\x58\x1e\xe9\x89\x94\x10\x16\xa4\xac\x93\x3a\x83\x18\xc0\x6d" //.X.........:...m |
/* 0280 */ "\x8b\x57\x39\xe6\x0a\x60\x51\x2c\x02\x70\xab\x00\x5d\x00\x2e\x40" //.W9..`Q,.p..]..@ |
/* 0290 */ "\x17\x00\x0b\x20\x0b\xa0\x05\x30\x05\x50\x02\x48\x30\x45\xa0\x00" //... ...0.P.H0E.. |
/* 02a0 */ "\x49\xb9\x84\x7e\x0c\x00\x3e\x41\x82\x38\x58\x2c\x40\x15\x82\x64" //I..~..>A.8X,@..d |
/* 02b0 */ "\xc3\x4c\xcc\x23\xf8\x23\xf9\x00\x15\x90\x05\xe0\xb2\x40\xe3\x23" //.L.#.#.......@.# |
/* 02c0 */ "\x08\xfc\x0f\x05\x94\x05\x30\x4e\x30\x75\x8f\xe6\x2c\x02\xbf\x99" //......0N0u..,... |
/* 02d0 */ "\x82\x5c\x8c\x5f\x32\x07\x98\x02\xfb\x9d\x3e\x64\x40\xa0\x03\xd8" //..._2.....>d@... |
/* 02e0 */ "\x28\x8d\x80\x1e\x43\xf0\x2c\x15\xbe\xc1\x37\x08\x1b\x08\xf8\x00" //(...C.,...7..... |
/* 02f0 */ "\xfe\x00\x08\x7d\x39\xc1\x25\x6e\xec\x2f\xa6\xb0\x0a\xe1\x3e\x67" //...}9.%n./....>g |
/* 0300 */ "\xc9\x82\x01\xec\x13\x9d\x1f\x24\xc0\x3d\x82\x7c\xe3\xe4\xa0\x03" //.......$.=.|.... |
/* 0310 */ "\xdf\x6e\xe4\x02\xbe\x14\x60\xbc\x3a\xf4\x83\xf5\x82\xc5\x39\x80" //.n....`.:.....9. |
/* 0320 */ "\x42\xb8\x00\x1e\x2d\xb6\x02\x76\xca\x10\x10\x08\x61\x70\xe8\xa0" //B...-..v....ap.. |
/* 0330 */ "\x08\x63\xe5\x45\x80\x0c\x04\x7c\x07\x00\xda\xb1\x0d\xf3\x0a\x3e" //.c.E...|.......> |
/* 0340 */ "\x3e\x43\x0f\xd7\xd7\x9e\x58\x72\x9d\xf6\x54\x41\x8a\x34\x0a\xe7" //>C....Xr..TA.4.. |
/* 0350 */ "\x35\xb6\x49\x68\xb6\x78\xac\x06\xd7\x1d\xa2\x8c\x51\xa9\x37\xfb" //5.Ih.x......Q.7. |
/* 0360 */ "\xf8\x10\x17\xd3\x5a\xe3\xac\xb6\x78\xac\x0a\xd1\x15\xb7\xcb\x59" //....Z...x......Y |
/* 0370 */ "\x86\x28\xc0\x9d\xd6\xa0\x7f\xeb\x63\x6a\x8e\xdc\x65\xad\x03\x14" //.(......cj..e... |
/* 0380 */ "\x60\xbf\x99\x16\xd9\x2d\xce\x6a\xd4\x31\x46\x0f\x6d\xfa\x0a\x80" //`....-.j.1F.m... |
/* 0390 */ "\x18\x7f\x74\x75\xc6\x5a\x2f\xcd\x74\x80\x04\x03\x01\xb6\x49\x70" //..tu.Z/.t.....Ip |
/* 03a0 */ "\x44\xd0\x17\x08\x7f\x2c\xf1\x5c\x10\xfe\x1c\xe1\x96\xb9\xcd\x45" //D....,.........E |
/* 03b0 */ "\xf9\x01\x84\xc0\x60\x36\xff\xcb\x23\xff\x8c\x1f\x44\xc3\xc2\x8a" //....`6..#...D... |
/* 03c0 */ "\xdd\x78\x5d\x96\xff\x90\x42\x5f\x5e\x05\x26\xc2\x64\x9c\xd6\xe7" //.x]...B_^.&.d... |
/* 03d0 */ "\xf5\x06\xff\x9c\x07\xb2\x8c\x51\xb8\xb2\x3c\x00\x6c\xf1\x2b\xc4" //.......Q..<.l.+. |
/* 03e0 */ "\x0a\x80\x18\x59\x80\x4f\x82\x42\xd8\x09\x95\x73\x9a\x8d\x79\x99" //...Y.O.B...s..y. |
/* 03f0 */ "\x71\x96\x8d\x31\x79\x35\x69\xf9\x21\x52\x1a\x80\x18\x60\x40\x0f" //q..1y5i.!R...`@. |
/* 0400 */ "\xcf\x8f\x3f\x40\x9b\x10\xc5\x1b\xf2\xb0\x8e\xf9\x8f\xd4\x6b\x6c" //..?@..........kl |
/* 0410 */ "\x97\xe8\x5d\x40\x14\x28\xc0\x87\xd6\x4c\x0c\xa6\xa7\x05\x31\x8c" //..]@.(...L....1. |
/* 0420 */ "\x51\x88\x43\x7c\x80\x09\xfb\x88\x15\xba\x4b\x68\x8a\x8d\x7c\x95" //Q.C|......Kh..|. |
/* 0430 */ "\x40\x14\x64\xa0\x06\x06\x79\x67\x7d\xc0\xc4\xc1\x36\xfc\x51\xde" //@.d...yg}...6.Q. |
/* 0440 */ "\x52\x01\x0e\x01\x64\x00\x64\xc8\xf8\x00\x10\x00"                 //R...d.d..... |
// Sent dumped on RDP Client (5) 1100 bytes |
// Listener closed |
// Incoming socket 5 (ip=10.10.47.175) |
// Socket RDP Client (5) : closing connection |
// RDP Client (0): total_received=1778, total_sent=19531 |
} /* end outdata */;

const char indata[] =
{
// Listen: binding socket 4 on 0.0.0.0:3389 |
// Listen: listening on socket 4 |
// Incoming socket to 5 (ip=10.10.47.175) |
// Reading font file ./tests/fixtures/sans-10.fv1 |
// font name <Bitstream Vera Sans> size <10> |
// Font file ./tests/fixtures/sans-10.fv1 defines glyphs up to 256 |
// Front::incoming() |
// Front::incoming:CONNECTION_INITIATION |
// Front::incoming::receiving x224 request PDU |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x13"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 15 bytes |
// Recv done on RDP Client (5) 15 bytes |
/* 0000 */ "\x0e\xe0\x00\x00\x00\x00\x00\x01\x00\x08\x00\x01\x00\x00\x00"     //............... |
// Dump done on RDP Client (5) 15 bytes |
// CR Recv: PROTOCOL TLS 1.0 |
// Front::incoming::sending x224 connection confirm PDU |
// -----------------> Front::TLS Support Enabled |
// CC Send: PROTOCOL TLS 1.0 |
// Sending on RDP Client (5) 19 bytes |
// /* 0000 */ "\x03\x00\x00\x13\x0e\xd0\x00\x00\x00\x00\x00\x02\x01\x08\x00\x01" //................ |
// /* 0010 */ "\x00\x00\x00"                                                     //... |
// Sent dumped on RDP Client (5) 19 bytes |
// RIO *::enable_server_tls() start |
// RIO *::SSL_CTX_set_options() |
// RIO *::enable_server_tls() done |
// Front::incoming::Basic Settings Exchange |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x01\xac"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 424 bytes |
// Recv done on RDP Client (5) 424 bytes |
/* 0000 */ "\x02\xf0\x80\x7f\x65\x82\x01\xa0\x04\x01\x01\x04\x01\x01\x01\x01" //....e........... |
/* 0010 */ "\xff\x30\x19\x02\x01\x22\x02\x01\x02\x02\x01\x00\x02\x01\x01\x02" //.0...".......... |
/* 0020 */ "\x01\x00\x02\x01\x01\x02\x02\xff\xff\x02\x01\x02\x30\x19\x02\x01" //............0... |
/* 0030 */ "\x01\x02\x01\x01\x02\x01\x01\x02\x01\x01\x02\x01\x00\x02\x01\x01" //................ |
/* 0040 */ "\x02\x02\x04\x20\x02\x01\x02\x30\x1c\x02\x02\xff\xff\x02\x02\xfc" //... ...0........ |
/* 0050 */ "\x17\x02\x02\xff\xff\x02\x01\x01\x02\x01\x00\x02\x01\x01\x02\x02" //................ |
/* 0060 */ "\xff\xff\x02\x01\x02\x04\x82\x01\x3f\x00\x05\x00\x14\x7c\x00\x01" //........?....|.. |
/* 0070 */ "\x81\x36\x00\x08\x00\x10\x00\x01\xc0\x00\x44\x75\x63\x61\x81\x28" //.6........Duca.( |
/* 0080 */ "\x01\xc0\xd8\x00\x04\x00\x08\x00\x00\x04\x00\x03\x01\xca\x03\xaa" //................ |
/* 0090 */ "\x0c\x04\x00\x00\xb0\x1d\x00\x00\x52\x00\x44\x00\x50\x00\x2d\x00" //........R.D.P.-. |
/* 00a0 */ "\x54\x00\x45\x00\x53\x00\x54\x00\x00\x00\x00\x00\x00\x00\x00\x00" //T.E.S.T......... |
/* 00b0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 00c0 */ "\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 00d0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 00e0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 00f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0100 */ "\x00\x00\x00\x00\x01\xca\x01\x00\x00\x00\x00\x00\x10\x00\x0f\x00" //................ |
/* 0110 */ "\x2d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //-............... |
/* 0120 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0130 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0140 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0150 */ "\x00\x00\x02\x00\x01\x00\x00\x00\x04\xc0\x0c\x00\x11\x00\x00\x00" //................ |
/* 0160 */ "\x00\x00\x00\x00\x02\xc0\x0c\x00\x1b\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0170 */ "\x03\xc0\x38\x00\x04\x00\x00\x00\x72\x64\x70\x64\x72\x00\x00\x00" //..8.....rdpdr... |
/* 0180 */ "\x00\x00\x80\x80\x72\x64\x70\x73\x6e\x64\x00\x00\x00\x00\x00\xc0" //....rdpsnd...... |
/* 0190 */ "\x64\x72\x64\x79\x6e\x76\x63\x00\x00\x00\x80\xc0\x63\x6c\x69\x70" //drdynvc.....clip |
/* 01a0 */ "\x72\x64\x72\x00\x00\x00\xa0\xc0"                                 //rdr..... |
// Dump done on RDP Client (5) 424 bytes |
// GCC::UserData tag=c001 length=216 |
// Received from Client GCC User Data CS_CORE (216 bytes) |
// cs_core::version [80004] RDP 5.0, 5.1, 5.2, and 6.0 clients) |
// cs_core::desktopWidth  = 1024 |
// cs_core::desktopHeight = 768 |
// cs_core::colorDepth    = [ca01] [RNS_UD_COLOR_8BPP] superseded by postBeta2ColorDepth |
// cs_core::SASSequence   = [aa03] [Unknown] |
// cs_core::keyboardLayout= 040c |
// cs_core::clientBuild   = 7600 |
// cs_core::clientName    = RDP-TEST |
// cs_core::keyboardType  = [0004] IBM enhanced (101-key or 102-key) keyboard |
// cs_core::keyboardSubType      = [0000] OEM code |
// cs_core::keyboardFunctionKey  = 12 function keys |
// cs_core::imeFileName    =  |
// cs_core::postBeta2ColorDepth  = [ca01] [8 bpp] |
// cs_core::clientProductId = 1 |
// cs_core::serialNumber = 0 |
// cs_core::highColorDepth  = [0010] [16-bit 565 RGB mask] |
// cs_core::supportedColorDepths  = [000f] [24/16/15/32] |
// cs_core::earlyCapabilityFlags  = [002d] |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_SUPPORT_ERRINFO_PDU |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_SUPPORT_STATUSINFO_PDU |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_STRONG_ASYMMETRIC_KEYS |
// cs_core::earlyCapabilityFlags:RNS_UD_CS_VALID_CONNECTION_TYPE |
// cs_core::clientDigProductId=[00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
// cs_core::connectionType  = 2 |
// cs_core::pad1octet  = 0 |
// cs_core::serverSelectedProtocol = 1 |
// GCC::UserData tag=c004 length=12 |
// Receiving from Client GCC User Data CS_CLUSTER (12 bytes) |
// cs_cluster::flags [0011] |
// cs_cluster::redirectedSessionID = 0 |
// GCC::UserData tag=c002 length=12 |
// Received from Client GCC User Data CS_SECURITY (12 bytes) |
// CSSecGccUserData::encryptionMethods 27 |
// CSSecGccUserData::extEncryptionMethods 0 |
// GCC::UserData tag=c003 length=56 |
// Received from Client GCC User Data CS_NET (56 bytes) |
// cs_net::channelCount   = 4 |
// cs_net::channel '   rdpdr' [1004] INITIALIZED COMPRESS_RDP |
// cs_net::channel '  rdpsnd' [1005] INITIALIZED |
// cs_net::channel ' drdynvc' [1006] INITIALIZED COMPRESS_RDP |
// cs_net::channel ' cliprdr' [1007] INITIALIZED COMPRESS_RDP SHOW_PROTOCOL |
// Sending to client GCC User Data SC_CORE (12 bytes) |
// sc_core::version [80004] RDP 5.0, 5.1, 5.2, 6.0, 6.1, 7.0, 7.1 and 8.0 servers) |
// sc_core::clientRequestedProtocols  = 1 |
// Sending to client GCC User Data SC_NET (16 bytes) |
// sc_net::MCSChannelId   = 1003 |
// sc_net::channelCount   = 4 |
// sc_net::channel[1004]::id = 1004 |
// sc_net::channel[1005]::id = 1005 |
// sc_net::channel[1006]::id = 1006 |
// sc_net::channel[1007]::id = 1007 |
// Sending to client GCC User Data SC_SECURITY (12 bytes) |
// sc_security::encryptionMethod = 0 |
// sc_security::encryptionLevel  = 0 |
// Sending on RDP Client (5) 109 bytes |
// /* 0000 */ "\x03\x00\x00\x6d\x02\xf0\x80\x7f\x66\x63\x0a\x01\x00\x02\x01\x00" //...m....fc...... |
// /* 0010 */ "\x30\x1a\x02\x01\x22\x02\x01\x03\x02\x01\x00\x02\x01\x01\x02\x01" //0..."........... |
// /* 0020 */ "\x00\x02\x01\x01\x02\x03\x00\xff\xf8\x02\x01\x02\x04\x3f\x00\x05" //.............?.. |
// /* 0030 */ "\x00\x14\x7c\x00\x01\x2a\x14\x76\x0a\x01\x01\x00\x01\xc0\x00\x4d" //..|..*.v.......M |
// /* 0040 */ "\x63\x44\x6e\x80\x28\x01\x0c\x0c\x00\x04\x00\x08\x00\x01\x00\x00" //cDn.(........... |
// /* 0050 */ "\x00\x03\x0c\x10\x00\xeb\x03\x04\x00\xec\x03\xed\x03\xee\x03\xef" //................ |
// /* 0060 */ "\x03\x02\x0c\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00"             //............. |
// Sent dumped on RDP Client (5) 109 bytes |
// Front::incoming::Channel Connection |
// Front::incoming::Recv MCS::ErectDomainRequest |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x04\x01\x00\x01\x00"                                 //........ |
// Dump done on RDP Client (5) 8 bytes |
// Front::incoming::Recv MCS::AttachUserRequest |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x08"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 4 bytes |
// Recv done on RDP Client (5) 4 bytes |
/* 0000 */ "\x02\xf0\x80\x28"                                                 //...( |
// Dump done on RDP Client (5) 4 bytes |
// Front::incoming::Send MCS::AttachUserConfirm |
// Sending on RDP Client (5) 11 bytes |
// /* 0000 */ "\x03\x00\x00\x0b\x02\xf0\x80\x2e\x00\x00\x00"                     //........... |
// Sent dumped on RDP Client (5) 11 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xe9"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// Sending on RDP Client (5) 15 bytes |
// /* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xe9\x03\xe9"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xeb"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// Sending on RDP Client (5) 15 bytes |
// /* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xeb\x03\xeb"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xec"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[0] = 1004 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
// /* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xec\x03\xec"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xed"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[1] = 1005 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
// /* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xed\x03\xed"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xee"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[2] = 1006 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
// /* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xee\x03\xee"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x0c"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 8 bytes |
// Recv done on RDP Client (5) 8 bytes |
/* 0000 */ "\x02\xf0\x80\x38\x00\x00\x03\xef"                                 //...8.... |
// Dump done on RDP Client (5) 8 bytes |
// cjrq[3] = 1007 -> cjcf |
// Sending on RDP Client (5) 15 bytes |
// /* 0000 */ "\x03\x00\x00\x0f\x02\xf0\x80\x3e\x00\x00\x00\x03\xef\x03\xef"     //.......>....... |
// Sent dumped on RDP Client (5) 15 bytes |
// Front::incoming::RDP Security Commencement |
// TLS mode: exchange packet disabled |
// Front::incoming() |
// Front::incoming::Secure Settings Exchange |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x01\x89"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 389 bytes |
// Recv done on RDP Client (5) 389 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x81\x7a\x40\x00\x00\x00\x00" //...d....p.z@.... |
/* 0010 */ "\x00\x00\x00\xb3\x47\x0b\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00" //....G....@...... |
/* 0020 */ "\x00\x00\x00\x71\x00\x61\x00\x5c\x00\x61\x00\x64\x00\x6d\x00\x69" //...q.a...a.d.m.i |
/* 0030 */ "\x00\x6e\x00\x69\x00\x73\x00\x74\x00\x72\x00\x61\x00\x74\x00\x65" //.n.i.s.t.r.a.t.e |
/* 0040 */ "\x00\x75\x00\x72\x00\x40\x00\x77\x00\x69\x00\x6e\x00\x32\x00\x6b" //.u.r.@.w.i.n.2.k |
/* 0050 */ "\x00\x38\x00\x72\x00\x32\x00\x3a\x00\x72\x00\x64\x00\x70\x00\x3a" //.8.r.2.:.r.d.p.: |
/* 0060 */ "\x00\x78\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x1a\x00\x31" //.x.............1 |
/* 0070 */ "\x00\x30\x00\x2e\x00\x31\x00\x30\x00\x2e\x00\x34\x00\x37\x00\x2e" //.0...1.0...4.7.. |
/* 0080 */ "\x00\x31\x00\x37\x00\x35\x00\x00\x00\x40\x00\x43\x00\x3a\x00\x5c" //.1.7.5...@.C.:.. |
/* 0090 */ "\x00\x57\x00\x49\x00\x4e\x00\x44\x00\x4f\x00\x57\x00\x53\x00\x5c" //.W.I.N.D.O.W.S.. |
/* 00a0 */ "\x00\x73\x00\x79\x00\x73\x00\x74\x00\x65\x00\x6d\x00\x33\x00\x32" //.s.y.s.t.e.m.3.2 |
/* 00b0 */ "\x00\x5c\x00\x6d\x00\x73\x00\x74\x00\x73\x00\x63\x00\x61\x00\x78" //...m.s.t.s.c.a.x |
/* 00c0 */ "\x00\x2e\x00\x64\x00\x6c\x00\x6c\x00\x00\x00\xc4\xff\xff\xff\x50" //...d.l.l.......P |
/* 00d0 */ "\x00\x61\x00\x72\x00\x69\x00\x73\x00\x2c\x00\x20\x00\x4d\x00\x61" //.a.r.i.s.,. .M.a |
/* 00e0 */ "\x00\x64\x00\x72\x00\x69\x00\x64\x00\x00\x00\x00\x00\x00\x00\x00" //.d.r.i.d........ |
/* 00f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0100 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0110 */ "\x00\x0a\x00\x00\x00\x05\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0120 */ "\x00\x00\x00\x50\x00\x61\x00\x72\x00\x69\x00\x73\x00\x2c\x00\x20" //...P.a.r.i.s.,.  |
/* 0130 */ "\x00\x4d\x00\x61\x00\x64\x00\x72\x00\x69\x00\x64\x00\x00\x00\x00" //.M.a.d.r.i.d.... |
/* 0140 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0150 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0160 */ "\x00\x00\x00\x00\x00\x03\x00\x00\x00\x05\x00\x02\x00\x00\x00\x00" //................ |
/* 0170 */ "\x00\x00\x00\xc4\xff\xff\xff\x00\x00\x00\x00\x07\x00\x00\x00\x00" //................ |
/* 0180 */ "\x00\x64\x00\x00\x00"                                             //.d... |
// Dump done on RDP Client (5) 389 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x00, 0x00, 0x00, 0x00, 0xb3, 0x47, 0x0b, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,  // .....G....@..... |
// /* 0010 */ 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x61, 0x00, 0x5c, 0x00, 0x61, 0x00, 0x64, 0x00, 0x6d, 0x00,  // ....q.a...a.d.m. |
// /* 0020 */ 0x69, 0x00, 0x6e, 0x00, 0x69, 0x00, 0x73, 0x00, 0x74, 0x00, 0x72, 0x00, 0x61, 0x00, 0x74, 0x00,  // i.n.i.s.t.r.a.t. |
// /* 0030 */ 0x65, 0x00, 0x75, 0x00, 0x72, 0x00, 0x40, 0x00, 0x77, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x32, 0x00,  // e.u.r.@.w.i.n.2. |
// /* 0040 */ 0x6b, 0x00, 0x38, 0x00, 0x72, 0x00, 0x32, 0x00, 0x3a, 0x00, 0x72, 0x00, 0x64, 0x00, 0x70, 0x00,  // k.8.r.2.:.r.d.p. |
// /* 0050 */ 0x3a, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1a, 0x00,  // :.x............. |
// /* 0060 */ 0x31, 0x00, 0x30, 0x00, 0x2e, 0x00, 0x31, 0x00, 0x30, 0x00, 0x2e, 0x00, 0x34, 0x00, 0x37, 0x00,  // 1.0...1.0...4.7. |
// /* 0070 */ 0x2e, 0x00, 0x31, 0x00, 0x37, 0x00, 0x35, 0x00, 0x00, 0x00, 0x40, 0x00, 0x43, 0x00, 0x3a, 0x00,  // ..1.7.5...@.C.:. |
// /* 0080 */ 0x5c, 0x00, 0x57, 0x00, 0x49, 0x00, 0x4e, 0x00, 0x44, 0x00, 0x4f, 0x00, 0x57, 0x00, 0x53, 0x00,  // ..W.I.N.D.O.W.S. |
// /* 0090 */ 0x5c, 0x00, 0x73, 0x00, 0x79, 0x00, 0x73, 0x00, 0x74, 0x00, 0x65, 0x00, 0x6d, 0x00, 0x33, 0x00,  // ..s.y.s.t.e.m.3. |
// /* 00a0 */ 0x32, 0x00, 0x5c, 0x00, 0x6d, 0x00, 0x73, 0x00, 0x74, 0x00, 0x73, 0x00, 0x63, 0x00, 0x61, 0x00,  // 2...m.s.t.s.c.a. |
// /* 00b0 */ 0x78, 0x00, 0x2e, 0x00, 0x64, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x00, 0x00, 0xc4, 0xff, 0xff, 0xff,  // x...d.l.l....... |
// /* 00c0 */ 0x50, 0x00, 0x61, 0x00, 0x72, 0x00, 0x69, 0x00, 0x73, 0x00, 0x2c, 0x00, 0x20, 0x00, 0x4d, 0x00,  // P.a.r.i.s.,. .M. |
// /* 00d0 */ 0x61, 0x00, 0x64, 0x00, 0x72, 0x00, 0x69, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // a.d.r.i.d....... |
// /* 00e0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00f0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0100 */ 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0110 */ 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x61, 0x00, 0x72, 0x00, 0x69, 0x00, 0x73, 0x00, 0x2c, 0x00,  // ....P.a.r.i.s.,. |
// /* 0120 */ 0x20, 0x00, 0x4d, 0x00, 0x61, 0x00, 0x64, 0x00, 0x72, 0x00, 0x69, 0x00, 0x64, 0x00, 0x00, 0x00,  //  .M.a.d.r.i.d... |
// /* 0130 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0140 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0150 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00,  // ................ |
// /* 0160 */ 0x00, 0x00, 0x00, 0x00, 0xc4, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,  // ................ |
// /* 0170 */ 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,                                // ..d... |
// RDP-5 Style logon |
// Receiving from client InfoPacket |
// InfoPacket::CodePage 0 |
// InfoPacket::flags 0xb47b3 |
// InfoPacket::flags:INFO_MOUSE yes |
// InfoPacket::flags:INFO_DISABLECTRLALTDEL yes |
// InfoPacket::flags:INFO_AUTOLOGON no |
// InfoPacket::flags:INFO_UNICODE yes |
// InfoPacket::flags:INFO_MAXIMIZESHELL  yes |
// InfoPacket::flags:INFO_LOGONNOTIFY no |
// InfoPacket::flags:INFO_COMPRESSION yes |
// InfoPacket::flags:CompressionTypeMask yes |
// InfoPacket::flags:INFO_ENABLEWINDOWSKEY  yes |
// InfoPacket::flags:INFO_REMOTECONSOLEAUDIO no |
// InfoPacket::flags:FORCE_ENCRYPTED_CS_PDU yes |
// InfoPacket::flags:INFO_RAIL no |
// InfoPacket::flags:INFO_LOGONERRORS yes |
// InfoPacket::flags:INFO_MOUSE_HAS_WHEEL yes |
// InfoPacket::flags:INFO_PASSWORD_IS_SC_PIN no |
// InfoPacket::flags:INFO_NOAUDIOPLAYBACK yes |
// InfoPacket::flags:INFO_USING_SAVED_CREDS no |
// InfoPacket::flags:RNS_INFO_AUDIOCAPTURE no |
// InfoPacket::flags:RNS_INFO_VIDEO_DISABLE no |
// InfoPacket::cbDomain 2 |
// InfoPacket::cbUserName 66 |
// InfoPacket::cbPassword 2 |
// InfoPacket::cbAlternateShell 2 |
// InfoPacket::cbWorkingDir 2 |
// InfoPacket::Domain  |
// InfoPacket::UserName qa\administrateur@win2k8r2:rdp:x |
// InfoPacket::Password <hidden> |
// InfoPacket::AlternateShell  |
// InfoPacket::WorkingDir  |
// InfoPacket::ExtendedInfoPacket::clientAddressFamily 2 |
// InfoPacket::ExtendedInfoPacket::cbClientAddress 26 |
// InfoPacket::ExtendedInfoPacket::clientAddress 10.10.47.175 |
// InfoPacket::ExtendedInfoPacket::cbClientDir 64 |
// InfoPacket::ExtendedInfoPacket::clientDir C:\WINDOWS\system32\mstscax.dll |
// InfoPacket::ExtendedInfoPacket::clientSessionId 0 |
// InfoPacket::ExtendedInfoPacket::performanceFlags 7 |
// InfoPacket::ExtendedInfoPacket::cbAutoReconnectLen 0 |
// InfoPacket::ExtendedInfoPacket::autoReconnectCookie  |
// InfoPacket::ExtendedInfoPacket::reserved1 100 |
// InfoPacket::ExtendedInfoPacket::reserved2 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::Bias 120 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardName GMT Standard Time |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wYear 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wMonth 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wDayOfWeek 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wDay 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wHour 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wMinute 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wSecond 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardDate.wMilliseconds 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::StandardBias 60 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightName GMT Daylight Time |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wYear 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wMonth 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wDayOfWeek 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wDay 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wHour 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wMinute 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wSecond 0 |
// InfoPacket::ExtendedInfoPacket::ClientTimeZone::DaylightDate.wMilliseconds 0 |
// client info: performance flags before=0x00000007 after=0x00000007 default=0x00000000 present=0x00000000 not-present=0x00000000 |
// Front Keyboard Layout = 0x40c |
// Front::incoming::licencing not client_info.is_mce |
// Front::incoming::licencing send_lic_initial |
// Sec clear payload to send: |
// /* 0000 */ 0x01, 0x02, 0x3e, 0x01, 0x7b, 0x3c, 0x31, 0xa6, 0xae, 0xe8, 0x74, 0xf6, 0xb4, 0xa5, 0x03, 0x90,  // ..>.{<1...t..... |
// /* 0010 */ 0xe7, 0xc2, 0xc7, 0x39, 0xba, 0x53, 0x1c, 0x30, 0x54, 0x6e, 0x90, 0x05, 0xd0, 0x05, 0xce, 0x44,  // ...9.S.0Tn.....D |
// /* 0020 */ 0x18, 0x91, 0x83, 0x81, 0x00, 0x00, 0x04, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x69, 0x00,  // ........,...M.i. |
// /* 0030 */ 0x63, 0x00, 0x72, 0x00, 0x6f, 0x00, 0x73, 0x00, 0x6f, 0x00, 0x66, 0x00, 0x74, 0x00, 0x20, 0x00,  // c.r.o.s.o.f.t. . |
// /* 0040 */ 0x43, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x70, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x61, 0x00, 0x74, 0x00,  // C.o.r.p.o.r.a.t. |
// /* 0050 */ 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x32, 0x00, 0x33, 0x00,  // i.o.n.......2.3. |
// /* 0060 */ 0x36, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0xb8, 0x00,  // 6............... |
// /* 0070 */ 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x5c, 0x00,  // ................ |
// /* 0080 */ 0x52, 0x53, 0x41, 0x31, 0x48, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00,  // RSA1H.......?... |
// /* 0090 */ 0x01, 0x00, 0x01, 0x00, 0x01, 0xc7, 0xc9, 0xf7, 0x8e, 0x5a, 0x38, 0xe4, 0x29, 0xc3, 0x00, 0x95,  // .........Z8.)... |
// /* 00a0 */ 0x2d, 0xdd, 0x4c, 0x3e, 0x50, 0x45, 0x0b, 0x0d, 0x9e, 0x2a, 0x5d, 0x18, 0x63, 0x64, 0xc4, 0x2c,  // -.L>PE...*].cd., |
// /* 00b0 */ 0xf7, 0x8f, 0x29, 0xd5, 0x3f, 0xc5, 0x35, 0x22, 0x34, 0xff, 0xad, 0x3a, 0xe6, 0xe3, 0x95, 0x06,  // ..).?.5"4..:.... |
// /* 00c0 */ 0xae, 0x55, 0x82, 0xe3, 0xc8, 0xc7, 0xb4, 0xa8, 0x47, 0xc8, 0x50, 0x71, 0x74, 0x29, 0x53, 0x89,  // .U......G.Pqt)S. |
// /* 00d0 */ 0x6d, 0x9c, 0xed, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x48, 0x00,  // m..p..........H. |
// /* 00e0 */ 0xa8, 0xf4, 0x31, 0xb9, 0xab, 0x4b, 0xe6, 0xb4, 0xf4, 0x39, 0x89, 0xd6, 0xb1, 0xda, 0xf6, 0x1e,  // ..1..K...9...... |
// /* 00f0 */ 0xec, 0xb1, 0xf0, 0x54, 0x3b, 0x5e, 0x3e, 0x6a, 0x71, 0xb4, 0xf7, 0x75, 0xc8, 0x16, 0x2f, 0x24,  // ...T;^>jq..u../$ |
// /* 0100 */ 0x00, 0xde, 0xe9, 0x82, 0x99, 0x5f, 0x33, 0x0b, 0xa9, 0xa6, 0x94, 0xaf, 0xcb, 0x11, 0xc3, 0xf2,  // ....._3......... |
// /* 0110 */ 0xdb, 0x09, 0x42, 0x68, 0x29, 0x56, 0x58, 0x01, 0x56, 0xdb, 0x59, 0x03, 0x69, 0xdb, 0x7d, 0x37,  // ..Bh)VX.V.Y.i.}7 |
// /* 0120 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x0e, 0x00,  // ................ |
// /* 0130 */ 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x00,        // microsoft.com. |
// Sending on RDP Client (5) 337 bytes |
// /* 0000 */ "\x03\x00\x01\x51\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x81\x42\x80" //...Q...h....p.B. |
// /* 0010 */ "\x00\x00\x00\x01\x02\x3e\x01\x7b\x3c\x31\xa6\xae\xe8\x74\xf6\xb4" //.....>.{<1...t.. |
// /* 0020 */ "\xa5\x03\x90\xe7\xc2\xc7\x39\xba\x53\x1c\x30\x54\x6e\x90\x05\xd0" //......9.S.0Tn... |
// /* 0030 */ "\x05\xce\x44\x18\x91\x83\x81\x00\x00\x04\x00\x2c\x00\x00\x00\x4d" //..D........,...M |
// /* 0040 */ "\x00\x69\x00\x63\x00\x72\x00\x6f\x00\x73\x00\x6f\x00\x66\x00\x74" //.i.c.r.o.s.o.f.t |
// /* 0050 */ "\x00\x20\x00\x43\x00\x6f\x00\x72\x00\x70\x00\x6f\x00\x72\x00\x61" //. .C.o.r.p.o.r.a |
// /* 0060 */ "\x00\x74\x00\x69\x00\x6f\x00\x6e\x00\x00\x00\x08\x00\x00\x00\x32" //.t.i.o.n.......2 |
// /* 0070 */ "\x00\x33\x00\x36\x00\x00\x00\x0d\x00\x04\x00\x01\x00\x00\x00\x03" //.3.6............ |
// /* 0080 */ "\x00\xb8\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x06" //................ |
// /* 0090 */ "\x00\x5c\x00\x52\x53\x41\x31\x48\x00\x00\x00\x00\x02\x00\x00\x3f" //...RSA1H.......? |
// /* 00a0 */ "\x00\x00\x00\x01\x00\x01\x00\x01\xc7\xc9\xf7\x8e\x5a\x38\xe4\x29" //............Z8.) |
// /* 00b0 */ "\xc3\x00\x95\x2d\xdd\x4c\x3e\x50\x45\x0b\x0d\x9e\x2a\x5d\x18\x63" //...-.L>PE...*].c |
// /* 00c0 */ "\x64\xc4\x2c\xf7\x8f\x29\xd5\x3f\xc5\x35\x22\x34\xff\xad\x3a\xe6" //d.,..).?.5"4..:. |
// /* 00d0 */ "\xe3\x95\x06\xae\x55\x82\xe3\xc8\xc7\xb4\xa8\x47\xc8\x50\x71\x74" //....U......G.Pqt |
// /* 00e0 */ "\x29\x53\x89\x6d\x9c\xed\x70\x00\x00\x00\x00\x00\x00\x00\x00\x08" //)S.m..p......... |
// /* 00f0 */ "\x00\x48\x00\xa8\xf4\x31\xb9\xab\x4b\xe6\xb4\xf4\x39\x89\xd6\xb1" //.H...1..K...9... |
// /* 0100 */ "\xda\xf6\x1e\xec\xb1\xf0\x54\x3b\x5e\x3e\x6a\x71\xb4\xf7\x75\xc8" //......T;^>jq..u. |
// /* 0110 */ "\x16\x2f\x24\x00\xde\xe9\x82\x99\x5f\x33\x0b\xa9\xa6\x94\xaf\xcb" //./$....._3...... |
// /* 0120 */ "\x11\xc3\xf2\xdb\x09\x42\x68\x29\x56\x58\x01\x56\xdb\x59\x03\x69" //.....Bh)VX.V.Y.i |
// /* 0130 */ "\xdb\x7d\x37\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x0e" //.}7............. |
// /* 0140 */ "\x00\x0e\x00\x6d\x69\x63\x72\x6f\x73\x6f\x66\x74\x2e\x63\x6f\x6d" //...microsoft.com |
// /* 0150 */ "\x00"                                                             //. |
// Sent dumped on RDP Client (5) 337 bytes |
// Front::incoming::waiting for answer to lic_initial |
// Front::incoming() |
// Front::incoming::WAITING_FOR_ANSWER_TO_LICENCE |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\xab"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 167 bytes |
// Recv done on RDP Client (5) 167 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x80\x9c\x80\x00\x6d\xef\x13" //...d....p....m.. |
/* 0010 */ "\x83\x98\x00\x01\x00\x00\x00\x00\x00\x01\x03\xbb\x60\x33\xbc\x38" //............`3.8 |
/* 0020 */ "\xc7\x41\xd7\xea\x6c\x5f\x95\x59\x78\xa5\xe3\xcd\x90\x28\x47\x63" //.A..l_.Yx....(Gc |
/* 0030 */ "\xf0\x8e\x79\x98\x82\x60\xda\xfc\x5f\x88\x5f\x00\x00\x48\x00\xf9" //..y..`.._._..H.. |
/* 0040 */ "\x0c\x32\x38\xcb\x3e\x0d\xa3\x9f\xaa\x08\xe9\x57\x03\xbe\xcf\x5d" //.28.>......W...] |
/* 0050 */ "\x12\x49\xdc\xc9\x89\x67\x94\x27\x6b\x87\xf1\x4c\x5b\x9a\x7a\x60" //.I...g.'k..L[.z` |
/* 0060 */ "\x3d\x21\x1e\x1a\x30\x6e\xc8\x1a\x1a\x32\xb5\xa4\x39\x5f\xef\x56" //=!..0n...2..9_.V |
/* 0070 */ "\x6e\xed\x56\x09\x5d\x54\x7b\x77\xd7\x37\xab\x65\xc6\xe8\x00\x00" //n.V.]T{w.7.e.... |
/* 0080 */ "\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x0f\x00\x41\x64\x6d\x69\x6e" //...........Admin |
/* 0090 */ "\x69\x73\x74\x72\x61\x74\x65\x75\x72\x00\x10\x00\x09\x00\x52\x44" //istrateur.....RD |
/* 00a0 */ "\x50\x2d\x54\x45\x53\x54\x00"                                     //P-TEST. |
// Dump done on RDP Client (5) 167 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x13, 0x83, 0x98, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xbb, 0x60, 0x33, 0xbc,  // .............`3. |
// /* 0010 */ 0x38, 0xc7, 0x41, 0xd7, 0xea, 0x6c, 0x5f, 0x95, 0x59, 0x78, 0xa5, 0xe3, 0xcd, 0x90, 0x28, 0x47,  // 8.A..l_.Yx....(G |
// /* 0020 */ 0x63, 0xf0, 0x8e, 0x79, 0x98, 0x82, 0x60, 0xda, 0xfc, 0x5f, 0x88, 0x5f, 0x00, 0x00, 0x48, 0x00,  // c..y..`.._._..H. |
// /* 0030 */ 0xf9, 0x0c, 0x32, 0x38, 0xcb, 0x3e, 0x0d, 0xa3, 0x9f, 0xaa, 0x08, 0xe9, 0x57, 0x03, 0xbe, 0xcf,  // ..28.>......W... |
// /* 0040 */ 0x5d, 0x12, 0x49, 0xdc, 0xc9, 0x89, 0x67, 0x94, 0x27, 0x6b, 0x87, 0xf1, 0x4c, 0x5b, 0x9a, 0x7a,  // ].I...g.'k..L[.z |
// /* 0050 */ 0x60, 0x3d, 0x21, 0x1e, 0x1a, 0x30, 0x6e, 0xc8, 0x1a, 0x1a, 0x32, 0xb5, 0xa4, 0x39, 0x5f, 0xef,  // `=!..0n...2..9_. |
// /* 0060 */ 0x56, 0x6e, 0xed, 0x56, 0x09, 0x5d, 0x54, 0x7b, 0x77, 0xd7, 0x37, 0xab, 0x65, 0xc6, 0xe8, 0x00,  // Vn.V.]T{w.7.e... |
// /* 0070 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x41, 0x64, 0x6d, 0x69,  // ............Admi |
// /* 0080 */ 0x6e, 0x69, 0x73, 0x74, 0x72, 0x61, 0x74, 0x65, 0x75, 0x72, 0x00, 0x10, 0x00, 0x09, 0x00, 0x52,  // nistrateur.....R |
// /* 0090 */ 0x44, 0x50, 0x2d, 0x54, 0x45, 0x53, 0x54, 0x00,                          // DP-TEST. |
// Front::NEW_LICENSE_REQUEST |
// Sec clear payload to send: |
// /* 0000 */ 0xff, 0x02, 0x10, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x28, 0x14, 0x00, 0x00,  // ............(... |
// Sending on RDP Client (5) 34 bytes |
// /* 0000 */ "\x03\x00\x00\x22\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x14\x80\x00" //..."...h....p... |
// /* 0010 */ "\x10\x00\xff\x02\x10\x00\x07\x00\x00\x00\x02\x00\x00\x00\x28\x14" //..............(. |
// /* 0020 */ "\x00\x00"                                                         //.. |
// Sent dumped on RDP Client (5) 34 bytes |
// Front::incoming::send_demand_active |
// Front::send_demand_active |
// Sending to client General caps (24 bytes) |
// General caps::major 1 |
// General caps::minor 3 |
// General caps::protocol 512 |
// General caps::pad2octetA 0 |
// General caps::compression type 0 |
// General caps::extra flags 1 |
// General caps::extraflags:FASTPATH_OUTPUT_SUPPORTED yes |
// General caps::extraflags:LONG_CREDENTIALS_SUPPORTED no |
// General caps::extraflags:AUTORECONNECT_SUPPORTED no |
// General caps::extraflags:ENC_SALTED_CHECKSUM no |
// General caps::extraflags:NO_BITMAP_COMPRESSION_HDR no |
// General caps::updateCapability 0 |
// General caps::remoteUnshare 0 |
// General caps::compressionLevel 0 |
// General caps::refreshRectSupport 0 |
// General caps::suppressOutputSupport 0 |
// Sending to client Bitmap caps (28 bytes) |
// Bitmap caps::preferredBitsPerPixel 16 |
// Bitmap caps::receive1BitPerPixel 1 |
// Bitmap caps::receive4BitsPerPixel 1 |
// Bitmap caps::receive8BitsPerPixel 1 |
// Bitmap caps::desktopWidth 1024 |
// Bitmap caps::desktopHeight 768 |
// Bitmap caps::pad2octets 0 |
// Bitmap caps::desktopResizeFlag 1 (yes) |
// Bitmap caps::bitmapCompressionFlag 1 yes |
// Bitmap caps::highColorFlags 0 |
// Bitmap caps::drawingFlags 8 |
// Bitmap caps::drawingFlags:DRAW_ALLOW_DYNAMIC_COLOR_FIDELITY no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_COLOR_SUBSAMPLING no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_SKIP_ALPHA yes |
// Bitmap caps::multipleRectangleSupport 1 |
// Bitmap caps::pad2octetsB 0 |
// Sending to client Font caps (8 bytes) |
// Font caps::fontSupportFlags 1 |
// Font caps::pad2octets 0 |
// Sending to client Order caps (88 bytes) |
// Order caps::terminalDescriptor 0 |
// Order caps::pad4octetsA 1078071040 |
// Order caps::desktopSaveXGranularity 1 |
// Order caps::desktopSaveYGranularity 20 |
// Order caps::pad2octetsA 0 |
// Order caps::maximumOrderLevel 1 |
// Order caps::numberFonts 47 |
// Order caps::orderFlags 34 |
// Order caps::orderSupport[TS_NEG_DSTBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_PATBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_SCRBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEMBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEM3BLT_INDEX] 0 |
// Order caps::orderSupport[UnusedIndex1] 0 |
// Order caps::orderSupport[UnusedIndex2] 0 |
// Order caps::orderSupport[TS_NEG_DRAWNINEGRID_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_LINETO_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTI_DRAWNINEGRID_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex3] 1 |
// Order caps::orderSupport[TS_NEG_SAVEBITMAP_INDEX] 0 |
// Order caps::orderSupport[UnusedIndex4] 0 |
// Order caps::orderSupport[UnusedIndex5] 0 |
// Order caps::orderSupport[UnusedIndex6] 0 |
// Order caps::orderSupport[TS_NEG_MULTIDSTBLT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_MULTIPATBLT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_MULTISCRBLT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_MULTIOPAQUERECT_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_FAST_INDEX_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_POLYGON_SC_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_POLYGON_CB_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_POLYLINE_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex7] 0 |
// Order caps::orderSupport[TS_NEG_FAST_GLYPH_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_SC_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_CB_INDEX] 0 |
// Order caps::orderSupport[TS_NEG_INDEX_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex8] 0 |
// Order caps::orderSupport[UnusedIndex9] 0 |
// Order caps::orderSupport[UnusedIndex10] 0 |
// Order caps::orderSupport[UnusedIndex11] 0 |
// Order caps::textFlags 1697 |
// Order caps::orderSupportExFlags 0 |
// Order caps::pad4octetsB 1000000 |
// Order caps::desktopSaveSize 1000000 |
// Order caps::pad2octetsC 1 |
// Order caps::pad2octetsD 0 |
// Order caps::textANSICodePage 0 |
// Order caps::pad2octetsE 0 |
// Sending to client ColorCache caps (8 bytes) |
// ColorCache caps::colorTableCacheSize 6 |
// ColorCache caps::pad2octets 0 |
// Sending to client Pointer caps (10 bytes) |
// Pointer caps::colorPointerFlag 1 |
// Pointer caps::colorPointerCacheSize 25 |
// Pointer caps::pointerCacheSize 25 |
// Sending to client Share caps (8 bytes) |
// Share caps::nodeId 1001 |
// Share caps::pad2octets 46562 |
// Sending to client Input caps (88 bytes) |
// Input caps::inputFlags 41 |
// Input caps::pad2octetsA 0 |
// Input caps::keyboardLayout 0 |
// Input caps::keyboardType 0 |
// Input caps::keyboardSubType 0 |
// Input caps::keyboardFunctionKey 0 |
// Input caps::imeFileName 1352817568 |
// Sec clear payload to send: |
// /* 0000 */ 0x20, 0x01, 0x11, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x0a, 0x01, 0x52, 0x44,  //  .............RD |
// /* 0010 */ 0x50, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x02,  // P............... |
// /* 0020 */ 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................ |
// /* 0030 */ 0x1c, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x00,  // ................ |
// /* 0040 */ 0x01, 0x00, 0x01, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x01, 0x00,  // ................ |
// /* 0050 */ 0x00, 0x00, 0x03, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....X........... |
// /* 0060 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00,  // ......@B........ |
// /* 0070 */ 0x01, 0x00, 0x2f, 0x00, 0x22, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,  // ../."........... |
// /* 0080 */ 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01,  // ................ |
// /* 0090 */ 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x06, 0x00, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x40, 0x42,  // ..........@B..@B |
// /* 00a0 */ 0x0f, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x08, 0x00, 0x06, 0x00,  // ................ |
// /* 00b0 */ 0x00, 0x00, 0x08, 0x00, 0x0a, 0x00, 0x01, 0x00, 0x19, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00,  // ................ |
// /* 00c0 */ 0xe9, 0x03, 0xe2, 0xb5, 0x0d, 0x00, 0x58, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ......X.)....... |
// /* 00d0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00e0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00f0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0100 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0110 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// Sending on RDP Client (5) 303 bytes |
// /* 0000 */ "\x03\x00\x01\x2f\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x81\x20\x20" //.../...h....p.   |
// /* 0010 */ "\x01\x11\x00\xe9\x03\x02\x00\x01\x00\x04\x00\x0a\x01\x52\x44\x50" //.............RDP |
// /* 0020 */ "\x00\x08\x00\x00\x00\x01\x00\x18\x00\x01\x00\x03\x00\x00\x02\x00" //................ |
// /* 0030 */ "\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x1c" //................ |
// /* 0040 */ "\x00\x10\x00\x01\x00\x01\x00\x01\x00\x00\x04\x00\x03\x00\x00\x01" //................ |
// /* 0050 */ "\x00\x01\x00\x00\x08\x01\x00\x00\x00\x0e\x00\x08\x00\x01\x00\x00" //................ |
// /* 0060 */ "\x00\x03\x00\x58\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //...X............ |
// /* 0070 */ "\x00\x00\x00\x00\x00\x40\x42\x0f\x00\x01\x00\x14\x00\x00\x00\x01" //.....@B......... |
// /* 0080 */ "\x00\x2f\x00\x22\x00\x01\x01\x01\x01\x00\x00\x00\x00\x01\x01\x01" //./."............ |
// /* 0090 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x01\x00" //................ |
// /* 00a0 */ "\x01\x00\x00\x00\x00\xa1\x06\x00\x00\x40\x42\x0f\x00\x40\x42\x0f" //.........@B..@B. |
// /* 00b0 */ "\x00\x01\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x08\x00\x06\x00\x00" //................ |
// /* 00c0 */ "\x00\x08\x00\x0a\x00\x01\x00\x19\x00\x19\x00\x09\x00\x08\x00\xe9" //................ |
// /* 00d0 */ "\x03\xe2\xb5\x0d\x00\x58\x00\x29\x00\x00\x00\x00\x00\x00\x00\x00" //.....X.)........ |
// /* 00e0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 00f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0100 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0110 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
// /* 0120 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"     //............... |
// Sent dumped on RDP Client (5) 303 bytes |
// Front::incoming::ACTIVATED (new license request) |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x02\x07"                                                     //... |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 515 bytes |
// Recv done on RDP Client (5) 515 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x81\xf8\xf8\x01\x13\x00\xe9" //...d....p....... |
/* 0010 */ "\x03\x02\x00\x01\x00\xe9\x03\x06\x00\xe2\x01\x4d\x53\x54\x53\x43" //...........MSTSC |
/* 0020 */ "\x00\x13\x00\x00\x00\x01\x00\x18\x00\x01\x00\x03\x00\x00\x02\x00" //................ |
/* 0030 */ "\x00\x00\x00\x0d\x04\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x1c" //................ |
/* 0040 */ "\x00\x10\x00\x01\x00\x01\x00\x01\x00\x00\x04\x00\x03\x00\x00\x01" //................ |
/* 0050 */ "\x00\x01\x00\x00\x08\x01\x00\x00\x00\x03\x00\x58\x00\x00\x00\x00" //...........X.... |
/* 0060 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0070 */ "\x00\x01\x00\x14\x00\x00\x00\x01\x00\x00\x00\xaa\x00\x01\x01\x01" //................ |
/* 0080 */ "\x01\x01\x00\x00\x01\x01\x01\x00\x01\x00\x00\x00\x01\x01\x01\x01" //................ |
/* 0090 */ "\x01\x01\x01\x01\x00\x01\x01\x01\x00\x00\x00\x00\x00\xa1\x06\x06" //................ |
/* 00a0 */ "\x00\x00\x00\x00\x00\x00\x84\x03\x00\x00\x00\x00\x00\xe4\x04\x00" //................ |
/* 00b0 */ "\x00\x04\x00\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //...(............ |
/* 00c0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x78\x00\x00" //.............x.. |
/* 00d0 */ "\x02\x78\x00\x00\x08\x51\x01\x00\x20\x0a\x00\x08\x00\x06\x00\x00" //.x...Q.. ....... |
/* 00e0 */ "\x00\x07\x00\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x05\x00\x0c" //................ |
/* 00f0 */ "\x00\x00\x00\x00\x00\x02\x00\x02\x00\x08\x00\x0a\x00\x01\x00\x14" //................ |
/* 0100 */ "\x00\x15\x00\x09\x00\x08\x00\x00\x00\x00\x00\x0d\x00\x58\x00\x91" //.............X.. |
/* 0110 */ "\x00\x20\x00\x0c\x04\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c" //. .............. |
/* 0120 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0130 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0140 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0150 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 0160 */ "\x00\x00\x00\x0c\x00\x08\x00\x01\x00\x00\x00\x0e\x00\x08\x00\x01" //................ |
/* 0170 */ "\x00\x00\x00\x10\x00\x34\x00\xfe\x00\x04\x00\xfe\x00\x04\x00\xfe" //.....4.......... |
/* 0180 */ "\x00\x08\x00\xfe\x00\x08\x00\xfe\x00\x10\x00\xfe\x00\x20\x00\xfe" //............. .. |
/* 0190 */ "\x00\x40\x00\xfe\x00\x80\x00\xfe\x00\x00\x01\x40\x00\x00\x08\x00" //.@.........@.... |
/* 01a0 */ "\x01\x00\x01\x03\x00\x00\x00\x0f\x00\x08\x00\x01\x00\x00\x00\x11" //................ |
/* 01b0 */ "\x00\x0c\x00\x01\x00\x00\x00\x00\x14\x64\x00\x14\x00\x0c\x00\x01" //.........d...... |
/* 01c0 */ "\x00\x00\x00\x00\x00\x00\x00\x15\x00\x0c\x00\x02\x00\x00\x00\x00" //................ |
/* 01d0 */ "\x0a\x00\x01\x16\x00\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //.....(.......... |
/* 01e0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" //................ |
/* 01f0 */ "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1a\x00\x08\x00\x00" //................ |
/* 0200 */ "\x00\x00\x00"                                                     //... |
// Dump done on RDP Client (5) 515 bytes |
// sec decrypted payload: |
// /* 0000 */ 0xf8, 0x01, 0x13, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0xe9, 0x03, 0x06, 0x00, 0xe2, 0x01,  // ................ |
// /* 0010 */ 0x4d, 0x53, 0x54, 0x53, 0x43, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x01, 0x00,  // MSTSC........... |
// /* 0020 */ 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0030 */ 0x00, 0x00, 0x02, 0x00, 0x1c, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x04,  // ................ |
// /* 0040 */ 0x00, 0x03, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00,  // ................ |
// /* 0050 */ 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // X............... |
// /* 0060 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // ................ |
// /* 0070 */ 0xaa, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00,  // ................ |
// /* 0080 */ 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,  // ................ |
// /* 0090 */ 0x00, 0x00, 0xa1, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x03, 0x00, 0x00, 0x00,  // ................ |
// /* 00a0 */ 0x00, 0x00, 0xe4, 0x04, 0x00, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........(....... |
// /* 00b0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00c0 */ 0x00, 0x00, 0x78, 0x00, 0x00, 0x02, 0x78, 0x00, 0x00, 0x08, 0x51, 0x01, 0x00, 0x20, 0x0a, 0x00,  // ..x...x...Q.. .. |
// /* 00d0 */ 0x08, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 00e0 */ 0x00, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x08, 0x00,  // ................ |
// /* 00f0 */ 0x0a, 0x00, 0x01, 0x00, 0x14, 0x00, 0x15, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0100 */ 0x0d, 0x00, 0x58, 0x00, 0x91, 0x00, 0x20, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,  // ..X... ......... |
// /* 0110 */ 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0120 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0130 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0140 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 0150 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00,  // ................ |
// /* 0160 */ 0x0e, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x34, 0x00, 0xfe, 0x00, 0x04, 0x00,  // ..........4..... |
// /* 0170 */ 0xfe, 0x00, 0x04, 0x00, 0xfe, 0x00, 0x08, 0x00, 0xfe, 0x00, 0x08, 0x00, 0xfe, 0x00, 0x10, 0x00,  // ................ |
// /* 0180 */ 0xfe, 0x00, 0x20, 0x00, 0xfe, 0x00, 0x40, 0x00, 0xfe, 0x00, 0x80, 0x00, 0xfe, 0x00, 0x00, 0x01,  // .. ...@......... |
// /* 0190 */ 0x40, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00,  // @............... |
// /* 01a0 */ 0x01, 0x00, 0x00, 0x00, 0x11, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x14, 0x64, 0x00,  // ..............d. |
// /* 01b0 */ 0x14, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x0c, 0x00,  // ................ |
// /* 01c0 */ 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x01, 0x16, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..........(..... |
// /* 01d0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 01e0 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................ |
// /* 01f0 */ 0x1a, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,                          // ........ |
// Front::incoming::sec_flags=0 |
// Front received CONFIRMACTIVEPDU |
// process_confirm_active |
// lengthSourceDescriptor = 6 |
// lengthCombinedCapabilities = 482 |
// Front::capability 0 / 19 |
// Receiving from client General caps (24 bytes) |
// General caps::major 1 |
// General caps::minor 3 |
// General caps::protocol 512 |
// General caps::pad2octetA 0 |
// General caps::compression type 0 |
// General caps::extra flags 40d |
// General caps::extraflags:FASTPATH_OUTPUT_SUPPORTED yes |
// General caps::extraflags:LONG_CREDENTIALS_SUPPORTED yes |
// General caps::extraflags:AUTORECONNECT_SUPPORTED yes |
// General caps::extraflags:ENC_SALTED_CHECKSUM no |
// General caps::extraflags:NO_BITMAP_COMPRESSION_HDR yes |
// General caps::updateCapability 0 |
// General caps::remoteUnshare 0 |
// General caps::compressionLevel 0 |
// General caps::refreshRectSupport 0 |
// General caps::suppressOutputSupport 0 |
// Front::capability 1 / 19 |
// Receiving from client Bitmap caps (28 bytes) |
// Bitmap caps::preferredBitsPerPixel 16 |
// Bitmap caps::receive1BitPerPixel 1 |
// Bitmap caps::receive4BitsPerPixel 1 |
// Bitmap caps::receive8BitsPerPixel 1 |
// Bitmap caps::desktopWidth 1024 |
// Bitmap caps::desktopHeight 768 |
// Bitmap caps::pad2octets 0 |
// Bitmap caps::desktopResizeFlag 1 (yes) |
// Bitmap caps::bitmapCompressionFlag 1 yes |
// Bitmap caps::highColorFlags 0 |
// Bitmap caps::drawingFlags 8 |
// Bitmap caps::drawingFlags:DRAW_ALLOW_DYNAMIC_COLOR_FIDELITY no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_COLOR_SUBSAMPLING no |
// Bitmap caps::drawingFlags:DRAW_ALLOW_SKIP_ALPHA yes |
// Bitmap caps::multipleRectangleSupport 1 |
// Bitmap caps::pad2octetsB 0 |
// Front::capability 2 / 19 |
// Receiving from client Order caps (88 bytes) |
// Order caps::terminalDescriptor 0 |
// Order caps::pad4octetsA 0 |
// Order caps::desktopSaveXGranularity 1 |
// Order caps::desktopSaveYGranularity 20 |
// Order caps::pad2octetsA 0 |
// Order caps::maximumOrderLevel 1 |
// Order caps::numberFonts 0 |
// Order caps::orderFlags 170 |
// Order caps::orderSupport[TS_NEG_DSTBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_PATBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_SCRBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEMBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MEM3BLT_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex1] 0 |
// Order caps::orderSupport[UnusedIndex2] 0 |
// Order caps::orderSupport[TS_NEG_DRAWNINEGRID_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_LINETO_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTI_DRAWNINEGRID_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex3] 0 |
// Order caps::orderSupport[TS_NEG_SAVEBITMAP_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex4] 0 |
// Order caps::orderSupport[UnusedIndex5] 0 |
// Order caps::orderSupport[UnusedIndex6] 0 |
// Order caps::orderSupport[TS_NEG_MULTIDSTBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTIPATBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTISCRBLT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_MULTIOPAQUERECT_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_FAST_INDEX_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_POLYGON_SC_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_POLYGON_CB_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_POLYLINE_INDEX] 1 |
// Order caps::orderSupport[UnusedIndex7] 0 |
// Order caps::orderSupport[TS_NEG_FAST_GLYPH_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_SC_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_ELLIPSE_CB_INDEX] 1 |
// Order caps::orderSupport[TS_NEG_INDEX_INDEX] 0 |
// Order caps::orderSupport[UnusedIndex8] 0 |
// Order caps::orderSupport[UnusedIndex9] 0 |
// Order caps::orderSupport[UnusedIndex10] 0 |
// Order caps::orderSupport[UnusedIndex11] 0 |
// Order caps::textFlags 1697 |
// Order caps::orderSupportExFlags 6 |
// Order caps::pad4octetsB 0 |
// Order caps::desktopSaveSize 230400 |
// Order caps::pad2octetsC 0 |
// Order caps::pad2octetsD 0 |
// Order caps::textANSICodePage 1252 |
// Order caps::pad2octetsE 0 |
// Front::capability 3 / 19 |
// Receiving from client BitmapCache caps (40 bytes) |
// BitmapCache caps::pad1 0 |
// BitmapCache caps::pad2 0 |
// BitmapCache caps::pad3 0 |
// BitmapCache caps::pad4 0 |
// BitmapCache caps::pad5 0 |
// BitmapCache caps::pad6 0 |
// BitmapCache caps::cache0Entries 120 |
// BitmapCache caps::cache0MaximumCellSize 512 |
// BitmapCache caps::cache1Entries 120 |
// BitmapCache caps::cache1MaximumCellSize 2048 |
// BitmapCache caps::cache2Entries 337 |
// BitmapCache caps::cache2MaximumCellSize 8192 |
// Front::capability 4 / 19 |
// Receiving from client CAPSTYPE_COLORCACHE |
// Front::capability 5 / 19 |
// Receiving from client CAPSTYPE_ACTIVATION |
// Front::capability 6 / 19 |
// Receiving from client CAPSTYPE_CONTROL |
// Front::capability 7 / 19 |
// Receiving from client Pointer caps (10 bytes) |
// Pointer caps::colorPointerFlag 1 |
// Pointer caps::colorPointerCacheSize 20 |
// Pointer caps::pointerCacheSize 21 |
// Front::capability 8 / 19 |
// Receiving from client CAPSTYPE_SHARE |
// Front::capability 9 / 19 |
// Receiving from client CAPSTYPE_INPUT |
// Front::capability 10 / 19 |
// Receiving from client CAPSTYPE_SOUND |
// Front::capability 11 / 19 |
// Front::capability 12 / 19 |
// Receiving from client CAPSTYPE_GLYPHCACHE |
// Front::capability 13 / 19 |
// Receiving from client CAPSTYPE_BRUSH |
// Receiving from client BrushCache caps (8 bytes) |
// BrushCacheCaps caps::brushSupportLevel 1 |
// Front::capability 14 / 19 |
// Receiving from client CAPSTYPE_OFFSCREENCACHE |
// Receiving from client OffScreenCache caps (12 bytes) |
// OffScreenCache caps::offscreenSupportLevel 1 |
// OffScreenCache caps::offscreenCacheSize 5120 |
// OffScreenCache caps::offscreenCacheEntries 100 |
// Front::capability 15 / 19 |
// Receiving from client CAPSTYPE_VIRTUALCHANNEL |
// Front::capability 16 / 19 |
// Receiving from client CAPSTYPE_DRAWNINEGRIDCACHE |
// Front::capability 17 / 19 |
// Receiving from client CAPSTYPE_DRAWGDIPLUS |
// Front::capability 18 / 19 |
// Receiving from client MultifragmentUpdate caps (8 bytes) |
// MultifragmentUpdate caps::MaxRequestSize 0 |
// process_confirm_active done p=0x7fff50ab6e57 end=0x7fff50ab6e57 |
// Front::reset::use_bitmap_comp=1 |
// Front::reset::use_compact_packets=1 |
// Front::reset::bitmap_cache_version=0 |
// Front: Use RDP 5.0 Bulk compression |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[0](2000) used=2 free=16276 |
// Front received CONFIRMACTIVEPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x24"                                                     //..$ |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 32 bytes |
// Recv done on RDP Client (5) 32 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x16\x16\x00\x17\x00\xe9\x03" //...d....p....... |
/* 0010 */ "\x02\x00\x01\x00\x00\x01\x08\x00\x1f\x00\x00\x00\x01\x00\xe9\x03" //................ |
// Dump done on RDP Client (5) 32 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x16, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x08, 0x00, 0x1f, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x01, 0x00, 0xe9, 0x03,                                // ...... |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=31 sdata_in.len=8 sdata_in.compressedLen=0 remains=0 payload_len=4 |
// PDUTYPE2_SYNCHRONIZE |
// PDUTYPE2_SYNCHRONIZE messageType=1 controlId=1001 |
// send_synchronize |
// Sec clear payload to send: |
// /* 0000 */ 0x16, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0x16, 0x00, 0x1f, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x01, 0x00, 0xea, 0x03,                                // ...... |
// Sending on RDP Client (5) 36 bytes |
// /* 0000 */ "\x03\x00\x00\x24\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x16\x16\x00" //...$...h....p... |
// /* 0010 */ "\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\x16\x00\x1f\x00\x00\x00" //................ |
// /* 0020 */ "\x01\x00\xea\x03"                                                 //.... |
// Sent dumped on RDP Client (5) 36 bytes |
// send_synchronize done |
// process_data done |
// Front received DATAPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x28"                                                     //..( |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 36 bytes |
// Recv done on RDP Client (5) 36 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x1a\x1a\x00\x17\x00\xe9\x03" //...d....p....... |
/* 0010 */ "\x02\x00\x01\x00\x00\x01\x0c\x00\x14\x00\x00\x00\x04\x00\x00\x00" //................ |
/* 0020 */ "\x00\x00\x00\x00"                                                 //.... |
// Dump done on RDP Client (5) 36 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                    // .......... |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=20 sdata_in.len=12 sdata_in.compressedLen=0 remains=0 payload_len=8 |
// PDUTYPE2_CONTROL |
// send_control action=4 |
// Sec clear payload to send: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0x1a, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xea, 0x03, 0x00, 0x00,                    // .......... |
// Sending on RDP Client (5) 40 bytes |
// /* 0000 */ "\x03\x00\x00\x28\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x1a\x1a\x00" //...(...h....p... |
// /* 0010 */ "\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\x1a\x00\x14\x00\x00\x00" //................ |
// /* 0020 */ "\x04\x00\x00\x00\xea\x03\x00\x00"                                 //........ |
// Sent dumped on RDP Client (5) 40 bytes |
// send_control done. action=4 |
// process_data done |
// Front received DATAPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x28"                                                     //..( |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 36 bytes |
// Recv done on RDP Client (5) 36 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x1a\x1a\x00\x17\x00\xe9\x03" //...d....p....... |
/* 0010 */ "\x02\x00\x01\x00\x00\x01\x0c\x00\x14\x00\x00\x00\x01\x00\x00\x00" //................ |
/* 0020 */ "\x00\x00\x00\x00"                                                 //.... |
// Dump done on RDP Client (5) 36 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                    // .......... |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=20 sdata_in.len=12 sdata_in.compressedLen=0 remains=0 payload_len=8 |
// PDUTYPE2_CONTROL |
// send_control action=2 |
// Sec clear payload to send: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0x1a, 0x00, 0x14, 0x00,  // ................ |
// /* 0010 */ 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xea, 0x03, 0x00, 0x00,                    // .......... |
// Sending on RDP Client (5) 40 bytes |
// /* 0000 */ "\x03\x00\x00\x28\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x1a\x1a\x00" //...(...h....p... |
// /* 0010 */ "\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\x1a\x00\x14\x00\x00\x00" //................ |
// /* 0020 */ "\x02\x00\x00\x00\xea\x03\x00\x00"                                 //........ |
// Sent dumped on RDP Client (5) 40 bytes |
// send_control done. action=2 |
// process_data done |
// Front received DATAPDU done |
// Front::incoming() |
// Front::incoming::ACTIVATE_AND_PROCESS_DATA |
// Socket RDP Client (5) receiving 1 bytes |
// Recv done on RDP Client (5) 1 bytes |
/* 0000 */ "\x03"                                                             //. |
// Dump done on RDP Client (5) 1 bytes |
// Socket RDP Client (5) receiving 3 bytes |
// Recv done on RDP Client (5) 3 bytes |
/* 0000 */ "\x00\x00\x28"                                                     //..( |
// Dump done on RDP Client (5) 3 bytes |
// Socket RDP Client (5) receiving 36 bytes |
// Recv done on RDP Client (5) 36 bytes |
/* 0000 */ "\x02\xf0\x80\x64\x00\x00\x03\xeb\x70\x1a\x1a\x00\x17\x00\xe9\x03" //...d....p....... |
/* 0010 */ "\x02\x00\x01\x00\x00\x01\x00\x00\x27\x00\x00\x00\x00\x00\x00\x00" //........'....... |
/* 0020 */ "\x03\x00\x32\x00"                                                 //..2. |
// Dump done on RDP Client (5) 36 bytes |
// sec decrypted payload: |
// /* 0000 */ 0x1a, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x27, 0x00,  // ..............'. |
// /* 0010 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x32, 0x00,                    // ........2. |
// Front::incoming::sec_flags=0 |
// Front received DATAPDU |
// Front::process_data(...) |
// sdata_in.pdutype2=39 sdata_in.len=0 sdata_in.compressedLen=0 remains=0 payload_len=8 |
// PDUTYPE2_FONTLIST |
// send_fontmap |
// Sec clear payload to send: |
// /* 0000 */ 0xbe, 0x00, 0x17, 0x00, 0xe9, 0x03, 0x02, 0x00, 0x01, 0x00, 0x00, 0x02, 0xbe, 0x00, 0x28, 0x00,  // ..............(. |
// /* 0010 */ 0x00, 0x00, 0xff, 0x02, 0xb6, 0x00, 0x28, 0x00, 0x00, 0x00, 0x27, 0x00, 0x27, 0x00, 0x03, 0x00,  // ......(...'.'... |
// /* 0020 */ 0x04, 0x00, 0x00, 0x00, 0x26, 0x00, 0x01, 0x00, 0x1e, 0x00, 0x02, 0x00, 0x1f, 0x00, 0x03, 0x00,  // ....&........... |
// /* 0030 */ 0x1d, 0x00, 0x04, 0x00, 0x27, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x28, 0x00, 0x08, 0x00,  // ....'.......(... |
// /* 0040 */ 0x21, 0x00, 0x09, 0x00, 0x20, 0x00, 0x0a, 0x00, 0x22, 0x00, 0x0b, 0x00, 0x25, 0x00, 0x0c, 0x00,  // !... ..."...%... |
// /* 0050 */ 0x24, 0x00, 0x0d, 0x00, 0x23, 0x00, 0x0e, 0x00, 0x19, 0x00, 0x0f, 0x00, 0x16, 0x00, 0x10, 0x00,  // $...#........... |
// /* 0060 */ 0x15, 0x00, 0x11, 0x00, 0x1c, 0x00, 0x12, 0x00, 0x1b, 0x00, 0x13, 0x00, 0x1a, 0x00, 0x14, 0x00,  // ................ |
// /* 0070 */ 0x17, 0x00, 0x15, 0x00, 0x18, 0x00, 0x16, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x0c, 0x00, 0x19, 0x00,  // ................ |
// /* 0080 */ 0x0d, 0x00, 0x1a, 0x00, 0x12, 0x00, 0x1b, 0x00, 0x14, 0x00, 0x1f, 0x00, 0x13, 0x00, 0x20, 0x00,  // .............. . |
// /* 0090 */ 0x00, 0x00, 0x21, 0x00, 0x0a, 0x00, 0x22, 0x00, 0x06, 0x00, 0x23, 0x00, 0x07, 0x00, 0x24, 0x00,  // ..!..."...#...$. |
// /* 00a0 */ 0x08, 0x00, 0x25, 0x00, 0x09, 0x00, 0x26, 0x00, 0x04, 0x00, 0x27, 0x00, 0x03, 0x00, 0x28, 0x00,  // ..%...&...'...(. |
// /* 00b0 */ 0x02, 0x00, 0x29, 0x00, 0x01, 0x00, 0x2a, 0x00, 0x05, 0x00, 0x2b, 0x00, 0x2a, 0x00,        // ..)...*...+.*. |
// Sending on RDP Client (5) 205 bytes |
// /* 0000 */ "\x03\x00\x00\xcd\x02\xf0\x80\x68\x00\x00\x03\xeb\x70\x80\xbe\xbe" //.......h....p... |
// /* 0010 */ "\x00\x17\x00\xe9\x03\x02\x00\x01\x00\x00\x02\xbe\x00\x28\x00\x00" //.............(.. |
// /* 0020 */ "\x00\xff\x02\xb6\x00\x28\x00\x00\x00\x27\x00\x27\x00\x03\x00\x04" //.....(...'.'.... |
// /* 0030 */ "\x00\x00\x00\x26\x00\x01\x00\x1e\x00\x02\x00\x1f\x00\x03\x00\x1d" //...&............ |
// /* 0040 */ "\x00\x04\x00\x27\x00\x05\x00\x0b\x00\x06\x00\x28\x00\x08\x00\x21" //...'.......(...! |
// /* 0050 */ "\x00\x09\x00\x20\x00\x0a\x00\x22\x00\x0b\x00\x25\x00\x0c\x00\x24" //... ..."...%...$ |
// /* 0060 */ "\x00\x0d\x00\x23\x00\x0e\x00\x19\x00\x0f\x00\x16\x00\x10\x00\x15" //...#............ |
// /* 0070 */ "\x00\x11\x00\x1c\x00\x12\x00\x1b\x00\x13\x00\x1a\x00\x14\x00\x17" //................ |
// /* 0080 */ "\x00\x15\x00\x18\x00\x16\x00\x0e\x00\x18\x00\x0c\x00\x19\x00\x0d" //................ |
// /* 0090 */ "\x00\x1a\x00\x12\x00\x1b\x00\x14\x00\x1f\x00\x13\x00\x20\x00\x00" //............. .. |
// /* 00a0 */ "\x00\x21\x00\x0a\x00\x22\x00\x06\x00\x23\x00\x07\x00\x24\x00\x08" //.!..."...#...$.. |
// /* 00b0 */ "\x00\x25\x00\x09\x00\x26\x00\x04\x00\x27\x00\x03\x00\x28\x00\x02" //.%...&...'...(.. |
// /* 00c0 */ "\x00\x29\x00\x01\x00\x2a\x00\x05\x00\x2b\x00\x2a\x00"             //.)...*...+.*. |
// Sent dumped on RDP Client (5) 205 bytes |
// send_fontmap done |
// Front::send_data_update_sync |
// Front::send_data_update_sync: fast-path |
// Sending on RDP Client (5) 5 bytes |
// /* 0000 */ "\x00\x05\x03\x00\x00"                                             //..... |
// Sent dumped on RDP Client (5) 5 bytes |
// --------------> UP AND RUNNING <---------------- |
// asking for selector |
// process_data done |
// Front received DATAPDU done |
// Front::begin_update() |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](23) used=1035 free=15243 |
// order(10 clip(0,0,1,1)):opaquerect(rect(0,0,1024,768) color=0x00ffff) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](23) used=1044 free=15234 |
// order(10 clip(0,0,1,1)):opaquerect(rect(5,5,1014,758) color=0x00f800) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](23) used=1052 free=15226 |
// order(10 clip(0,0,1,1)):opaquerect(rect(10,10,1004,748) color=0x0007e0) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](23) used=1060 free=15218 |
// order(10 clip(0,0,1,1)):opaquerect(rect(15,15,994,738) color=0x00001f) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](23) used=1068 free=15210 |
// order(10 clip(0,0,1,1)):opaquerect(rect(20,20,984,728) color=0x000000) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[6](23) used=1075 free=15203 |
// order(10 clip(0,0,1,1)):opaquerect(rect(30,30,964,708) color=0x000273) |
// Widget_load: image file [./tests/fixtures/Philips_PM5544_640.png] is PNG file |
// front::draw:draw_tile((192, 144, 64, 64) (0, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[7](8208) used=1083 free=15195 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[8](30) used=1211 free=15067 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=0) |
// front::draw:draw_tile((256, 144, 64, 64) (64, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[9](8208) used=1225 free=15053 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[10](30) used=1376 free=14902 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=1) |
// front::draw:draw_tile((320, 144, 64, 64) (128, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[11](8208) used=1382 free=14896 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[12](30) used=1489 free=14789 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=2) |
// front::draw:draw_tile((384, 144, 64, 64) (192, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[13](8208) used=1495 free=14783 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[14](30) used=1937 free=14341 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=3) |
// front::draw:draw_tile((448, 144, 64, 64) (256, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[15](8208) used=1943 free=14335 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[16](30) used=2195 free=14083 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=4) |
// front::draw:draw_tile((512, 144, 64, 64) (320, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[17](8208) used=2201 free=14077 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[18](30) used=2464 free=13814 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=5) |
// front::draw:draw_tile((576, 144, 64, 64) (384, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[19](8208) used=2470 free=13808 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[20](30) used=2924 free=13354 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=6) |
// front::draw:draw_tile((640, 144, 64, 64) (448, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[21](8208) used=2930 free=13348 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[22](30) used=3023 free=13255 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=7) |
// front::draw:draw_tile((704, 144, 64, 64) (512, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[23](8208) used=3029 free=13249 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[24](30) used=3183 free=13095 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=8) |
// front::draw:draw_tile((768, 144, 64, 64) (576, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[25](8208) used=3189 free=13089 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[26](30) used=3334 free=12944 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,144,64,64) rop=cc srcx=0 srcy=0 cache_idx=9) |
// front::draw:draw_tile((192, 208, 64, 64) (0, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[27](8208) used=3340 free=12938 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[28](30) used=3443 free=12835 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=10) |
// front::draw:draw_tile((256, 208, 64, 64) (64, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[29](8208) used=3452 free=12826 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[30](30) used=3585 free=12693 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=11) |
// front::draw:draw_tile((320, 208, 64, 64) (128, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[31](8208) used=3591 free=12687 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[32](30) used=4143 free=12135 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=12) |
// front::draw:draw_tile((384, 208, 64, 64) (192, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[33](8208) used=4149 free=12129 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[34](30) used=4262 free=12016 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=13) |
// front::draw:draw_tile((448, 208, 64, 64) (256, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[35](8208) used=4268 free=12010 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[36](30) used=4308 free=11970 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=14) |
// front::draw:draw_tile((512, 208, 64, 64) (320, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[37](8208) used=4314 free=11964 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[38](30) used=4355 free=11923 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=15) |
// front::draw:draw_tile((576, 208, 64, 64) (384, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[39](8208) used=4361 free=11917 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[40](30) used=4452 free=11826 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=16) |
// front::draw:draw_tile((640, 208, 64, 64) (448, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[41](8208) used=4458 free=11820 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[42](30) used=5038 free=11240 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=17) |
// front::draw:draw_tile((704, 208, 64, 64) (512, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[43](8208) used=5044 free=11234 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[44](30) used=5177 free=11101 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=18) |
// front::draw:draw_tile((768, 208, 64, 64) (576, 64, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[45](8208) used=5183 free=11095 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[46](30) used=5289 free=10989 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,208,64,64) rop=cc srcx=0 srcy=0 cache_idx=19) |
// front::draw:draw_tile((192, 272, 64, 64) (0, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[47](8208) used=5295 free=10983 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[48](30) used=5400 free=10878 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=20) |
// front::draw:draw_tile((256, 272, 64, 64) (64, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[49](8208) used=5409 free=10869 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[50](30) used=5807 free=10471 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=21) |
// front::draw:draw_tile((320, 272, 64, 64) (128, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[51](8208) used=5813 free=10465 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[52](30) used=5959 free=10319 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=22) |
// front::draw:draw_tile((384, 272, 64, 64) (192, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[53](8208) used=5965 free=10313 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[54](30) used=6038 free=10240 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=23) |
// front::draw:draw_tile((448, 272, 64, 64) (256, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[55](8208) used=6044 free=10234 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[56](30) used=6118 free=10160 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=24) |
// front::draw:draw_tile((512, 272, 64, 64) (320, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[57](8208) used=6124 free=10154 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[58](30) used=6193 free=10085 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=25) |
// front::draw:draw_tile((576, 272, 64, 64) (384, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[59](8208) used=6199 free=10079 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[60](30) used=6270 free=10008 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=26) |
// front::draw:draw_tile((640, 272, 64, 64) (448, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[61](8208) used=6276 free=10002 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[62](30) used=6419 free=9859 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=27) |
// front::draw:draw_tile((704, 272, 64, 64) (512, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[63](8208) used=6425 free=9853 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[64](30) used=6844 free=9434 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=28) |
// front::draw:draw_tile((768, 272, 64, 64) (576, 128, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[65](8208) used=6850 free=9428 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[66](30) used=6958 free=9320 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,272,64,64) rop=cc srcx=0 srcy=0 cache_idx=29) |
// front::draw:draw_tile((192, 336, 64, 64) (0, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[67](8208) used=6964 free=9314 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[68](30) used=7049 free=9229 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=30) |
// front::draw:draw_tile((256, 336, 64, 64) (64, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[69](8208) used=7058 free=9220 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[70](30) used=7498 free=8780 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=31) |
// front::draw:draw_tile((320, 336, 64, 64) (128, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[71](8208) used=7504 free=8774 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[72](30) used=7618 free=8660 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=32) |
// front::draw:draw_tile((384, 336, 64, 64) (192, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[73](8208) used=7624 free=8654 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[74](30) used=7775 free=8503 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=33) |
// front::draw:draw_tile((448, 336, 64, 64) (256, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[75](8208) used=7781 free=8497 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[76](30) used=7955 free=8323 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=34) |
// front::draw:draw_tile((512, 336, 64, 64) (320, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[77](8208) used=7961 free=8317 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[78](30) used=8130 free=8148 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=35) |
// front::draw:draw_tile((576, 336, 64, 64) (384, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[79](8208) used=8136 free=8142 |
// GraphicsUpdatePDU::flush_orders: order_count=79 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 5520 bytes |
// /* 0000 */ "\x00\x95\x90\x80\x61\x89\x15\x4f\x00\x03\xbe\x01\x80\x00\x00\xfc" //....a..O........ |
// /* 0010 */ "\x39\x00\x00\x55\xf8\x89\x57\xc4\x5f\xfe\x20\x00\x93\xe8\x3e\x22" //9..U..W._. ...>" |
// /* 0020 */ "\x55\xf1\x17\xff\x88\x00\x49\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00" //U.....I....|E... |
// /* 0030 */ "\x1b\x7e\x83\xe2\x25\x5f\x11\x7f\xf8\x80\x08\x97\xd0\x7c\x44\xab" //.~..%_.......|D. |
// /* 0040 */ "\xe2\x2f\xff\x10\x01\x36\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00\x2b" //./...6....|E...+ |
// /* 0050 */ "\x7f\x41\xf1\x12\xaf\x88\xbf\xfc\x47\x89\x61\x57\xe2\x25\x5f\x11" //.A......G.aW.%_. |
// /* 0060 */ "\x7f\xf8\x8f\x18\xc2\xaf\xc4\x4a\xbe\x22\xff\xf1\x00\x04\x9f\x41" //.......J.".....A |
// /* 0070 */ "\xf1\x12\xaf\x88\xbf\xfc\x40\x02\x4f\xd0\x7c\x44\xab\xe2\x2f\xff" //......@.O.|D../. |
// /* 0080 */ "\x10\x00\xdb\xf4\x1f\x11\x2a\xf8\x8b\xff\xc4\x00\x44\xbe\x83\xe2" //......*.....D... |
// /* 0090 */ "\x25\x5f\x11\x7f\xf8\x80\x09\xb7\xd0\x7c\x44\xab\xe2\x2f\xff\x10" //%_.......|D../.. |
// /* 00a0 */ "\x01\x5b\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x3c\x2a\xf2\x03\xe8\x3e" //.[....|E..<*...> |
// /* 00b0 */ "\x22\xff\xf1\x1e\x21\x79\x00\x93\xe4\x02\x4f\x90\x1e\xa1\x12\x7d" //"...!y....O....} |
// /* 00c0 */ "\x07\xc4\x4a\xbe\x22\xff\xf1\x00\x09\x3f\x41\xf1\x12\xaf\x88\xbf" //..J."....?A..... |
// /* 00d0 */ "\xfc\x40\x03\x6f\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x01\x12\xfa\x0f" //.@.o.|D../...... |
// /* 00e0 */ "\x88\x95\x7c\x45\xff\xe2\x00\x26\xdf\x41\xf1\x12\xaf\x88\xbf\xfc" //..|E...&.A...... |
// /* 00f0 */ "\x40\x05\x6f\xe8\x3e\x22\x55\xf1\x17\xff\x88\xf0\x2b\xc8\x0f\xa0" //@.o.>"U.....+... |
// /* 0100 */ "\xf8\x8b\xff\xc4\x78\x45\xe4\x03\x6f\x90\x0d\xbe\x40\x70\x11\x12" //....xE..o...@p.. |
// /* 0110 */ "\x7d\x07\xc4\x4a\xbe\x22\xff\xf1\x00\x09\x3f\x41\xf1\x12\xaf\x88" //}..J."....?A.... |
// /* 0120 */ "\xbf\xfc\x40\x03\x6f\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x01\x12\xfa" //..@.o.|D../..... |
// /* 0130 */ "\x0f\x88\x95\x7c\x45\xff\xe2\x00\x26\xdf\x41\xf1\x12\xaf\x88\xbf" //...|E...&.A..... |
// /* 0140 */ "\xfc\x40\x05\x6f\xe8\x3e\x22\x55\xf1\x17\xff\x88\xfe\xaf\x20\x3e" //.@.o.>"U...... > |
// /* 0150 */ "\x83\xe2\x2f\xff\x11\xe0\x17\x90\x11\x2f\x20\x22\x5e\x40\x70\x81" //../....../ "^@p. |
// /* 0160 */ "\x12\x7d\x07\xc4\x4a\xbe\x22\xff\xf1\x00\x09\x3f\x41\xf1\x12\xaf" //.}..J."....?A... |
// /* 0170 */ "\x88\xbf\xfc\x40\x03\x6f\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x01\x12" //...@.o.|D../.... |
// /* 0180 */ "\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00\x26\xdf\x41\xf1\x12\xaf\x88" //....|E...&.A.... |
// /* 0190 */ "\xbf\xfc\x40\x05\x6f\xe8\x3e\x22\x55\xf1\x17\xff\x88\xfc\xaf\x20" //..@.o.>"U......  |
// /* 01a0 */ "\x3e\x83\xe2\x2f\xff\x11\xfc\x5e\x40\x4d\xbc\x80\x9b\x79\x01\xc3" //>../...^@M...y.. |
// /* 01b0 */ "\xc4\x49\xf4\x1f\x11\x2a\xf8\x8b\xff\xc4\x00\x24\xfd\x07\xc4\x4a" //.I...*.....$...J |
// /* 01c0 */ "\xbe\x22\xff\xf1\x00\x0d\xbf\x41\xf1\x12\xaf\x88\xbf\xfc\x40\x04" //.".....A......@. |
// /* 01d0 */ "\x4b\xe8\x3e\x22\x55\xf1\x17\xff\x88\x00\x9b\x7d\x07\xc4\x4a\xbe" //K.>"U......}..J. |
// /* 01e0 */ "\x22\xff\xf1\x00\x15\xbf\xa0\xf8\x89\x57\xc4\x5f\xfe\x23\xea\xbc" //"........W._.#.. |
// /* 01f0 */ "\x80\xfa\x0f\x88\xbf\xfc\x47\xe1\x79\x01\x5b\xf2\x02\xb7\xe4\x07" //......G.y.[..... |
// /* 0200 */ "\x16\x11\x27\xd0\x7c\x44\xab\xe2\x2f\xff\x10\x00\x93\xf4\x1f\x11" //..'.|D../....... |
// /* 0210 */ "\x2a\xf8\x8b\xff\xc4\x00\x36\xfd\x07\xc4\x4a\xbe\x22\xff\xf1\x00" //*.....6...J."... |
// /* 0220 */ "\x11\x2f\xa0\xf8\x89\x57\xc4\x5f\xfe\x20\x02\x6d\xf4\x1f\x11\x2a" //./...W._. .m...* |
// /* 0230 */ "\xf8\x8b\xff\xc4\x00\x56\xfe\x83\xe2\x25\x5f\x11\x7f\xf8\x8f\x8a" //.....V...%_..... |
// /* 0240 */ "\xf2\x03\xe8\x3e\x22\xff\xf1\x1f\x45\xe4\x05\xff\xc8\x0b\xff\xc2" //...>"...E....... |
// /* 0250 */ "\x90\x02\x4f\xa0\xf8\x89\x57\xc4\x5f\xfe\x20\x01\x27\xe8\x3e\x22" //..O...W._. .'.>" |
// /* 0260 */ "\x55\xf1\x17\xff\x88\x00\x6d\xfa\x0f\x88\x95\x7c\x45\xff\xe2\x00" //U.....m....|E... |
// /* 0270 */ "\x22\x5f\x41\xf1\x12\xaf\x88\xbf\xfc\x40\x04\xdb\xe8\x3e\x22\x55" //"_A......@...>"U |
// /* 0280 */ "\xf1\x17\xff\x88\x00\xad\xfd\x07\xc4\x4a\xbe\x22\xff\xf1\x1e\x35" //.........J."...5 |
// /* 0290 */ "\x79\x01\xf4\x1f\x11\x7f\xf8\x80\x90\xa3\xc0\x00\x40\x00\x3b\xfd" //y...........@.;. |
// /* 02a0 */ "\xfc\x44\xfc\x14\x16\xed\x76\x00\xbc\x7c\x8a\xb0\x03\xfc\x8a\x1f" //.D....v..|...... |
// /* 02b0 */ "\x00\x11\x1f\xf9\x10\x00\x22\x7e\x14\x15\x6c\xb6\x39\x81\x01\xb9" //......"~..l.9... |
// /* 02c0 */ "\x80\x00\x02\x01\x01\x00\x20\x20\x08\x38\xf9\xf4\x61\x01\x8d\x55" //......  .8..a..U |
// /* 02d0 */ "\xa8\x02\x22\x10\x4a\x15\xfe\xff\x01\x77\x8f\x52\xed\xe6\x97\x08" //..".J....w.R.... |
// /* 02e0 */ "\x80\x24\x06\xb7\x5e\xa0\x08\xc0\x84\x00\xa0\x33\x89\x75\x2e\x3c" //.$..^......3.u.< |
// /* 02f0 */ "\xc2\xc0\xc1\x7f\xbf\xd3\x95\x65\xb5\x00\x1a\x18\xc0\x0c\x04\x72" //.......e.......r |
// /* 0300 */ "\xcf\x40\x11\x95\x29\x01\x40\x67\x55\x63\x9a\x80\x14\x18\xc4\x16" //.@..).@gUc...... |
// /* 0310 */ "\x80\x22\x8a\x52\x05\x01\xbb\xcf\x4a\xee\x14\x00\x7a\x74\xa9\x4b" //.".R....J...zt.K |
// /* 0320 */ "\xea\x67\x3a\xab\x15\xb0\x38\x78\x55\x36\x9a\xd0\x04\x6b\x75\xe1" //.g:...8xU6...ku. |
// /* 0330 */ "\xe8\x09\xa4\x96\x80\x22\x48\x42\x01\x6e\x49\x0d\x3f\x02\x00\xa0" //....."HB.nI.?... |
// /* 0340 */ "\x00\x44\x00\x10\x3e\x12\x98\x07\x0a\xf2\x76\x30\x8e\x71\x8a\x00" //.D..>.....v0.q.. |
// /* 0350 */ "\x2d\xbc\xd2\x02\x66\xab\x40\x13\xae\xa9\xc0\x4f\xa1\xbe\x54\x88" //-...f.@....O..T. |
// /* 0360 */ "\x94\x52\x86\x21\x04\xb8\x40\x01\x28\x00\xb1\xe6\x18\x0c\x55\xb6" //.R.!..@.(.....U. |
// /* 0370 */ "\x80\x27\x20\x3f\xa8\x01\x40\x04\x00\x7c\x20\xa1\xc0\x84\x3c\xb9" //.' ?..@..| ...<. |
// /* 0380 */ "\x14\x00\x5f\x1c\x41\x42\x10\x0c\x05\x66\x9d\x40\x10\xf9\x91\x26" //.._.AB...f.@...& |
// /* 0390 */ "\x31\x01\x80\xd5\xe7\xb4\x39\x52\x95\x00\x1b\xc9\x50\xab\x2d\x20" //1.....9R....P.-  |
// /* 03a0 */ "\x00\xa8\x01\x06\x31\x80\xd1\x11\x4a\x7c\xce\x36\x02\xfd\x2f\xa5" //....1...J|.6../. |
// /* 03b0 */ "\x93\x03\xc7\x89\x90\xe7\x3a\x00\x85\x6e\xbd\xf1\xc3\xd4\x01\x2f" //......:..n...../ |
// /* 03c0 */ "\x32\xac\xc2\x20\x40\x28\x00\x20\x00\x6b\xde\x5d\xc5\x70\x03\xce" //2.. @(. .k.].p.. |
// /* 03d0 */ "\xa0\xd1\x08\x27\xaa\xde\x56\x50\x04\x3c\xa9\x41\xb0\x21\x0a\x80" //...'..VP.<.A.!.. |
// /* 03e0 */ "\x14\xb9\xcc\x06\x80\x21\xe4\xbb\x0d\xf1\xfc\x22\x94\xfd\x17\x8f" //.....!.....".... |
// /* 03f0 */ "\x41\xa8\xa5\x35\x00\x24\xd6\xb0\x16\x01\xdf\xdc\x91\x83\xfd\x0c" //A..5.$.......... |
// /* 0400 */ "\x68\x02\x1e\x36\x40\x3f\x73\xc6\x60\x00\x0a\x00\x87\x8c\x56\x0f" //h..6@?s.`.....V. |
// /* 0410 */ "\x18\xc0\x10\x00\x1c\xb4\x07\xc6\x38\x4a\xc0\x40\xc0\x20\x42\x10" //........8J.@. B. |
// /* 0420 */ "\x48\xd5\x58\x80\x5a\xa2\xda\xd6\x02\x07\x02\x7d\xb7\xae\xdb\xc0" //H.X.Z......}.... |
// /* 0430 */ "\x07\xa0\x2b\xb6\xf2\x1e\x0e\x40\x01\xe6\x21\x08\x24\x0a\x2d\x35" //..+....@..!.$.-5 |
// /* 0440 */ "\xaf\xdf\xc0\x07\xa0\x62\x10\x47\x18\x67\x82\x9f\x4e\x5d\x65\xb3" //.....b.G.g..N]e. |
// /* 0450 */ "\xeb\xbf\xd3\x95\x18\x67\xe6\xc0\x52\x4b\x1e\xfa\x74\x61\x04\x59" //.....g..RK..ta.Y |
// /* 0460 */ "\xa7\x7d\x3a\xa9\xc7\x0f\x2c\xff\x2a\x9d\x65\xbf\x77\x11\x8a\x37" //.}:...,.*.e.w..7 |
// /* 0470 */ "\xd3\x92\x1e\x0f\x4f\x93\x3f\xe5\xe3\x28\xf9\x51\x16\x9a\xfe\x68" //....O.?..(.Q...h |
// /* 0480 */ "\x82\x7e\x68\xab\xcf\x7c\x42\x1d\xfa\xa8\x1f\xcc\xda\xef\xf3\x31" //.~h..|B........1 |
// /* 0490 */ "\x51\x86\x0c\x51\xab\xf7\xf1\xe8\x24\x4a\x29\x5b\xaf\x5f\xef\xef" //Q..Q....$J)[._.. |
// /* 04a0 */ "\xb6\xf7\xd8\x94\x52\x07\x53\x8e\x2c\xd3\xa7\xd7\x71\xc6\x01\x8e" //....R.S.,...q... |
// /* 04b0 */ "\x2e\x22\x0e\x1a\x6a\x3d\xbd\xee\x08\xab\x2d\x1c\xb3\xdf\xef\xf1" //."..j=....-..... |
// /* 04c0 */ "\xeb\xbf\x11\x18\xa8\x00\xb0\x84\x00\xc0\xc7\x2c\xf7\x79\xe8\xe5" //...........,.y.. |
// /* 04d0 */ "\x9d\xda\xff\x7f\xf1\x52\x35\x56\xbf\xdf\xd7\x6d\xfc\x42\xe3\x89" //.....R5V...m.B.. |
// /* 04e0 */ "\xcd\x46\xaa\xde\x1c\x87\x18\x61\xc5\x1b\xc5\x18\x18\x41\x1d\x7c" //.F.....a.....A.| |
// /* 04f0 */ "\x04\x00\x1d\x63\xf9\x88\x94\x53\xec\x57\xcc\x40\x95\x65\xb7\xbf" //...c...S.W.@.e.. |
// /* 0500 */ "\x66\xd7\xd6\x0c\x51\x9f\x6d\xff\x5a\x7c\x84\x38\xa3\x7a\x15\xf3" //f...Q.m.Z|.8.z.. |
// /* 0510 */ "\x26\xe7\xf3\x35\x59\xa7\x7c\xc8\x64\x10\x82\x5c\x27\xe0\xb0\x3f" //&..5Y.|.d...'..? |
// /* 0520 */ "\x2a\xd1\x0f\x8e\x32\xe3\x62\x08\xe0\xde\xe1\x3a\x81\x12\x10\xcd" //*...2.b....:.... |
// /* 0530 */ "\xa6\xa0\x00\xbe\x7e\x50\x02\x2b\x75\xe8\x10\x00\x01\xa4\x97\xe7" //....~P.+u....... |
// /* 0540 */ "\x0d\x24\xaf\x3c\x81\x95\xfe\x10\x10\x06\x00\x07\x6f\xe1\xe3\x8d" //.$.<........o... |
// /* 0550 */ "\xb7\x92\xa8\x00\x82\xe0\x00\x0b\x40\x30\xb7\xbd\xdc\xd0\x00\xaf" //........@0...... |
// /* 0560 */ "\xf7\xff\x21\xbd\x3f\x1e\x37\x9e\x0b\xe5\x59\x6b\xcf\x8e\x60\x73" //..!.?.7...Yk..`s |
// /* 0570 */ "\xc7\x28\x14\xca\x29\x57\x9e\xf9\xce\x40\xa0\x8f\x34\xea\xbc\xf6" //.(..)W...@..4... |
// /* 0580 */ "\x75\x56\xf4\x60\x73\x89\x5b\xf5\x44\x4a\x28\xeb\xfa\x9c\x12\x9f" //uV.`s.[.DJ(..... |
// /* 0590 */ "\xaa\x20\xaa\x30\xc1\x49\x2d\x5e\x7b\x1a\xab\x7d\x00\xdb\x37\xd0" //. .0.I-^{..}..7. |
// /* 05a0 */ "\x4c\xbe\xf0\x62\x8d\x5b\xaf\x78\x28\x36\xca\x21\x04\x83\xa8\xc3" //L..b.[.x(6.!.... |
// /* 05b0 */ "\x2e\x71\xc7\x59\x6d\xde\x7a\xf3\x4e\xbd\xd7\xbd\x76\x19\x68\xfa" //.q.Ym.z.N...v.h. |
// /* 05c0 */ "\x88\x94\x50\x52\x4b\x16\x9a\x8c\x51\x9e\x69\xd3\xaa\xb7\x0b\x80" //..PRK...Q.i..... |
// /* 05d0 */ "\xcf\xf8\x71\x76\x98\x42\xac\xb4\xc3\xc3\xea\x9c\x70\x52\x4a\xeb" //..qv.B......pRJ. |
// /* 05e0 */ "\x2d\x8b\x4d\x66\xd3\x5a\x11\x42\x14\x0e\xef\x3d\x18\xa3\x1c\x51" //-.Mf.Z.B...=...Q |
// /* 05f0 */ "\xa8\x52\x63\x18\x13\xcd\x3b\x88\x10\x41\xe7\xdb\x03\x70\x3a\x4f" //.Rc...;..A...p:O |
// /* 0600 */ "\x20\x88\x9d\x55\x88\x00\x78\xfe\x41\x87\xb3\xa2\x93\xc4\xc8\x0d" // ..U..x.A....... |
// /* 0610 */ "\xc7\xc4\x61\x49\xe2\xfe\x06\x31\xe3\x05\x5c\xd2\x17\xaf\x61\x63" //..aI...1......ac |
// /* 0620 */ "\x78\x00\x05\xf6\x16\x6f\xbe\xc2\x8e\x14\x31\x53\x8e\x00\x0c\xc1" //x....o....1S.... |
// /* 0630 */ "\x23\xd7\x77\x9e\x62\x65\x18\x67\xa8\x40\x02\xf0\x2a\xbc\xf6\x65" //#.w.be.g.@..*..e |
// /* 0640 */ "\x14\x67\xf9\x41\x18\x1c\xfa\xef\x3a\xab\x55\xe7\xbc\xc1\xa0\x05" //.g.A....:.U..... |
// /* 0650 */ "\xa7\xe8\x83\x78\xd7\xc7\x16\x44\x4a\x29\xfa\x5e\xd0\x00\x09\xc1" //...x...DJ).^.... |
// /* 0660 */ "\x57\x6d\xf1\xaf\xc4\x14\x92\xa8\xc3\x3f\x94\x07\x41\x63\xd7\x7a" //Wm.......?..Ac.z |
// /* 0670 */ "\xdd\x78\x62\x8c\xeb\x2d\x99\x45\x1b\x7e\x80\x1f\x8f\x3a\xf7\x5e" //.xb..-.E.~...:.^ |
// /* 0680 */ "\x21\xe2\x9c\x75\x96\xdc\xe3\x8a\x30\xc7\x21\x08\x20\xfc\x08\xf2" //!..u....0.!. ... |
// /* 0690 */ "\xcf\x3a\xab\x10\xf1\x9f\x45\xa6\xa2\x92\x58\x94\x51\xe8\x42\x08" //.:....E...X.Q.B. |
// /* 06a0 */ "\x19\xc4\x38\x43\xea\x34\x0c\xe2\x8c\x31\x46\xe5\x22\x28\x42\x83" //..8C.4...1F."(B. |
// /* 06b0 */ "\xcd\xa6\xb1\x69\xab\xac\xb4\x52\x4b\x53\x8e\x44\xa2\x86\x1e\xdf" //...i...RKS.D.... |
// /* 06c0 */ "\x4a\x94\x80\x79\x9d\x98\x00\x3f\x69\xc3\xd8\x47\x00\x3a\x00\x07" //J..y...?i..G.:.. |
// /* 06d0 */ "\x0d\x27\x2f\x38\xe1\xb7\x3c\xa1\xe3\xda\x8f\x64\xc5\x00\x03\x97" //.'/8..<....d.... |
// /* 06e0 */ "\xcc\x80\x03\x14\xd0\x00\x7d\x97\x1c\x33\xe2\xa1\xec\xd8\x05\x00" //......}..3...... |
// /* 06f0 */ "\x03\x9c\xf2\x8f\xc6\x6e\x02\x0c\x00\x0f\x01\x6d\x6b\x20\x16\x81" //.....n.....mk .. |
// /* 0700 */ "\x46\xaa\xde\x69\x0d\xc0\x97\x6d\xfc\x18\x03\xb0\x38\xd5\x58\xc2" //F..i...m....8.X. |
// /* 0710 */ "\x09\xc2\x36\x20\x55\xfb\xfc\x5a\x6b\xc3\x09\xf2\x95\xba\xf3\x8f" //..6 U..Zk....... |
// /* 0720 */ "\xb6\x64\x66\x05\x3e\xbb\xba\xcb\x78\x4b\x00\x06\x3f\xa9\x46\x19" //.df.>...xK..?.F. |
// /* 0730 */ "\xc1\xe0\x00\x2d\x02\x8f\x5d\xc5\x24\xbc\x25\x80\x02\xb0\x2e\x09" //...-..].$.%..... |
// /* 0740 */ "\x48\x27\xb9\xa0\x4f\xd4\x4a\x9c\x71\xaf\xe5\x04\x7e\xf1\xd6\x5b" //H'..O.J.q...~..[ |
// /* 0750 */ "\xec\x98\x10\x81\x0c\x51\x8c\x20\x8d\xdf\x28\x1d\x02\x9d\x55\xa2" //.....Q. ..(...U. |
// /* 0760 */ "\x51\x4f\x42\x80\x03\x3c\x68\x14\x92\xfb\x4c\x00\x15\xfa\x11\x69" //QOB..<h...L....i |
// /* 0770 */ "\xab\xa7\xca\x04\x70\x33\x55\xe7\xbc\x82\xdf\x30\x0d\xf3\x2d\xdf" //....p3U....0..-. |
// /* 0780 */ "\xe6\x01\x3e\x62\xef\xf3\x1c\x2f\xc0\x00\x50\x3a\xfd\xfc\x62\x8c" //..>b.../..P:..b. |
// /* 0790 */ "\xa3\x0c\x7b\xf9\x80\x0f\xb0\x59\xa7\x54\xe3\x9c\xa5\x55\x00\x12" //..{....Y.T...U.. |
// /* 07a0 */ "\x00\x00\x1f\x36\xa2\x51\x41\xc6\x00\x4b\xfd\xff\x94\x9b\x8e\xd9" //...6.QA..K...... |
// /* 07b0 */ "\x80\xba\xff\x7f\x82\xf0\xa7\x8e\x40\xf1\xca\x73\x38\x10\xe5\x9d" //........@..s8... |
// /* 07c0 */ "\x56\x5a\x27\xff\x47\x14\x67\x18\x67\xa9\xd5\x00\x1e\x14\x6e\x13" //VZ'.G.g.g.....n. |
// /* 07d0 */ "\xca\x07\x00\xe8\xe4\x53\x1e\xa2\x08\x41\x04\x78\x71\x1d\x78\xaa" //.....S...A.xq.x. |
// /* 07e0 */ "\xb8\xd5\x00\x05\xbf\x6c\xc4\xb8\x6c\xc8\xa4\x0a\xf7\x5e\x55\x96" //.....l..l....^U. |
// /* 07f0 */ "\xb5\x7c\xa0\x8c\x0d\xf6\xde\x31\xf5\x8d\x9f\x30\x1d\x03\x8f\x7e" //.|.....1...0...~ |
// /* 0800 */ "\x25\x4e\x38\xdf\xf3\x01\x7f\x32\x6e\x71\xcf\x4f\x40\x47\xcc\x2c" //%N8....2nq.O@G., |
// /* 0810 */ "\xd3\xb8\xe4\x3e\x64\x3c\x70\x7e\x5a\x01\x68\x01\x1e\x27\x8f\x19" //...>d<p~Z.h..'.. |
// /* 0820 */ "\xc7\x95\x23\xe6\x47\x8c\xe3\xca\x91\xc2\x0e\x79\x48\x3c\xf8\xe5" //..#.G......yH<.. |
// /* 0830 */ "\x1c\x9b\x4d\x48\x68\x01\x04\x84\x3c\xa5\x9f\x35\xca\x6e\xa9\x1c" //..MHh...<..5.n.. |
// /* 0840 */ "\x23\x20\x18\x00\x0d\x40\x03\x84\x66\x09\xc0\x00\xfd\x1d\x9d\x7c" //# ...@..f......| |
// /* 0850 */ "\xea\xef\x3d\xe9\xad\x1d\x33\x23\xa6\x1b\x8e\xec\x1e\xf8\x46\x7a" //..=...3#......Fz |
// /* 0860 */ "\x5f\xb8\xf8\x41\xef\x4a\xb8\xeb\xbf\x1d\x30\xe6\x40\x0e\x40\x01" //_..A.J....0.@.@. |
// /* 0870 */ "\xf5\xa7\xf1\xd7\x20\x17\x81\xc4\x84\x37\x02\x00\x1f\x11\xc0\x38" //.... ....7.....8 |
// /* 0880 */ "\x00\x1c\x37\xc4\x78\xc2\xc0\x02\x00\x3a\xdc\x38\xa1\xbc\x4b\x07" //..7.x....:.8..K. |
// /* 0890 */ "\xd0\xde\xba\x33\x68\x82\x50\x01\x60\x0f\x9e\x2c\x75\xb9\x75\xa5" //...3h.P.`..,u.u. |
// /* 08a0 */ "\xa9\xf4\x77\xae\x84\x40\x52\xe2\xb4\x00\x58\x2d\xc7\xc2\xd1\xd6" //..w..@R...X-.... |
// /* 08b0 */ "\xd1\xd7\x2f\x93\xaf\x1c\x82\xa2\x94\x87\xf5\xcc\xcb\xae\xdc\x75" //../............u |
// /* 08c0 */ "\xcd\x20\x02\x87\xfe\xc7\xd4\xcd\x81\x9b\xc6\x2e\xb9\xfb\xde\x3c" //. .............< |
// /* 08d0 */ "\xc1\x01\x00\x00\x7c\x2f\xde\x60\xb8\x10\x00\x48\x05\x2e\x00\xf9" //....|/.`...H.... |
// /* 08e0 */ "\x01\x50\x9f\x79\x81\xdb\xfe\x39\x09\x28\x1d\xd3\xde\x5d\x52\xe0" //.P.y...9.(...]R. |
// /* 08f0 */ "\xb7\x1a\x80\x15\x09\xe3\x8f\x42\x04\x21\xdc\x25\xdb\x12\x29\x7e" //.......B.!.%..)~ |
// /* 0900 */ "\x3e\x75\xd6\x9e\x19\xd3\x63\xe8\x2c\x3c\xb3\xf2\xbf\x52\xf8\x24" //>u....c.,<...R.$ |
// /* 0910 */ "\x39\x04\xc7\x05\x19\xe5\x66\x05\xee\x02\xf2\x9b\xeb\xf0\xd0\x02" //9.....f......... |
// /* 0920 */ "\x65\x4a\x4c\x0c\x7e\x28\x8f\x2a\x26\xd3\x51\xee\xe1\x11\xc1\x74" //eJL.~(.*&.Q....t |
// /* 0930 */ "\x01\x70\xf2\xbc\x04\x80\x01\xad\x79\x5f\x15\x80\x00\xae\xf2\x3c" //.p......y_.....< |
// /* 0940 */ "\x75\x00\x28\x0d\x7f\xfe\x93\x5a\xc7\xb8\xb4\x40\x65\x3a\x96\xb5" //u.(....Z...@e:.. |
// /* 0950 */ "\x50\x02\x61\x08\xee\xce\x65\x29\x0e\xa7\x1a\x49\x6a\x1c\x9d\xdd" //P.a...e)...Ij... |
// /* 0960 */ "\x48\x22\x80\x23\x0a\x52\xb8\x07\x04\x30\x0a\x75\x64\x1e\x71\x5b" //H".#.R...0.ud.q[ |
// /* 0970 */ "\x90\x84\x21\xef\xb1\x36\x73\x9b\x80\x70\x18\x08\x30\x0d\x00\x02" //..!..6s..p..0... |
// /* 0980 */ "\xa1\xe2\x10\x1b\xc7\x8c\x31\x76\x00\x0b\xee\xe7\x4e\x2a\xbe\x2f" //......1v....N*./ |
// /* 0990 */ "\x85\x59\x6f\x0d\x78\xf8\xef\x9b\x1d\xde\x6a\xb0\x05\xc4\xca\x04" //.Yo.x.....j..... |
// /* 09a0 */ "\x13\x5a\xea\x00\x54\xb5\xa0\x18\x0b\xed\xbe\x86\x9a\xd6\x30\xc0" //.Z..T.........0. |
// /* 09b0 */ "\x11\x7f\xbf\x8a\xc0\x54\xbb\xd3\x98\x70\x00\x32\xc0\x40\x03\xee" //.....T...p.2.@.. |
// /* 09c0 */ "\x85\x0d\x94\xa4\x57\xbd\xd4\xa1\xc5\x6a\x00\x44\x3c\xcf\xa6\x87" //....W....j.D<... |
// /* 09d0 */ "\xe5\x01\xe0\x43\x27\x93\xcb\x9c\x19\x14\x30\x84\x2e\x9a\x8f\xac" //...C'.....0..... |
// /* 09e0 */ "\xf2\x70\x00\x0c\x47\xd7\x60\xb0\x00\x31\xb0\x2f\x25\xe0\x32\x04" //.p..G.`..1./%.2. |
// /* 09f0 */ "\x18\x01\x46\xf1\xe8\xb1\x8c\x32\x02\xdc\xd7\x40\x06\xbc\x4f\x45" //..F....2...@..OE |
// /* 0a00 */ "\xb8\xfd\x20\x32\x63\x10\x01\xf8\x15\x3d\xee\x04\x20\x00\x3d\xdc" //.. 2c....=.. .=. |
// /* 0a10 */ "\x39\x6b\x5a\xf9\xc1\x08\x23\x29\x4f\xc7\x4b\x9c\xd0\x42\x3e\xac" //9kZ...#)O.K..B>. |
// /* 0a20 */ "\xca\x94\xbe\x70\x42\x09\xc2\xa0\x3f\x02\x87\x39\x90\x00\x7d\x59" //...pB...?..9..}Y |
// /* 0a30 */ "\x85\x7d\x5a\x83\x7f\xfa\x91\x08\x00\x08\xb7\x2e\xdb\xf9\x8a\x3f" //.}Z............? |
// /* 0a40 */ "\xa0\x41\xbe\xff\x7f\xa8\x01\xcc\xa2\x80\x2c\x01\xa0\x00\x0e\x11" //.A........,..... |
// /* 0a50 */ "\xaa\xb4\x05\xa5\x28\x00\x3e\x80\x01\x0a\x52\xfd\x35\xdc\x36\x13" //....(.>...R.5.6. |
// /* 0a60 */ "\x5a\xfc\x0f\x7f\x6d\xe0\x78\xf1\x8c\xf9\x1a\xbe\xf7\x1a\x2f\xde" //Z...m.x......./. |
// /* 0a70 */ "\x10\xc0\x7e\xed\x96\x31\xfd\xdb\x49\xfb\xb5\x47\x39\xf8\xeb\x7b" //..~..1..I..G9..{ |
// /* 0a80 */ "\xdf\x80\x83\xd0\x1e\xeb\xb0\x08\x43\xf9\xe6\x9e\xf7\x43\x18\xf9" //........C....C.. |
// /* 0a90 */ "\x33\x2e\x73\xb1\xfc\x9a\xc0\x1a\x0f\x93\x17\x7e\xbb\xa6\x1f\x4c" //3.s........~...L |
// /* 0aa0 */ "\xa0\x77\xfe\x6e\x8f\x05\xc4\x07\xb4\x7b\xc0\x6f\x17\x63\xc0\x1d" //.w.n.....{.o.c.. |
// /* 0ab0 */ "\xf1\xe3\xdb\x33\x6f\x7b\xf1\xe3\xfe\xc5\xbd\xef\xc3\x1c\x5f\x26" //...3o{........_& |
// /* 0ac0 */ "\xe9\xff\x6f\x0f\xdb\x9f\xfd\x76\x6e\x88\x0f\x83\x2f\xc3\x51\xf6" //..o....vn.../.Q. |
// /* 0ad0 */ "\x12\xa5\x22\x00\x01\x16\x00\xee\xdd\x48\xd5\x5b\x00\x5f\x80\x12" //.."......H.[._.. |
// /* 0ae0 */ "\x52\x98\x08\x38\xbb\x03\x42\x10\xaa\x00\x40\x84\x3c\x3f\x81\x08" //R..8..B...@.<?.. |
// /* 0af0 */ "\x50\x2e\xec\xf0\x1d\x40\x0d\xb3\xf0\xb8\x72\x31\x38\xf6\xbc\x28" //P....@....r18..( |
// /* 0b00 */ "\xc3\x3b\x2a\x3d\x39\x5d\xde\x2f\x89\xa3\xc2\xf3\x80\x1b\x83\xf4" //.;*=9]./........ |
// /* 0b10 */ "\x2f\x63\xc7\x87\x1d\x0c\x98\x01\x31\xf2\x46\x10\x4c\x00\xbf\x64" ///c......1.F.L..d |
// /* 0b20 */ "\x3c\x65\x5f\x4a\x7e\xde\x7f\xe5\xf6\xe3\x00\x38\x3e\xe4\x78\x0d" //<e_J~......8>.x. |
// /* 0b30 */ "\x32\x8a\x00\x0f\xf8\x6d\xc3\xba\x03\x00\x00\xd9\x38\xbc\xe2\xc4" //2....m......8... |
// /* 0b40 */ "\x00\x1b\xce\x85\xc3\xa2\x86\xfe\x40\xa2\xe0\x0a\x07\x81\x42\xd0" //........@.....B. |
// /* 0b50 */ "\x1b\x18\xc3\x8f\x09\xd7\x30\x29\xb5\xad\x60\x1d\x90\x01\x97\x03" //......0)..`..... |
// /* 0b60 */ "\x18\x1f\x80\xf3\x66\x5b\x41\xe8\x00\x49\x29\x5c\x48\x02\x30\x19" //....f[A..I).H.0. |
// /* 0b70 */ "\x94\x52\x84\x9a\xd7\x01\x14\x92\x88\x71\xe6\x51\xf9\x79\xb0\x04" //.R.......q.Q.y.. |
// /* 0b80 */ "\xb3\xac\xda\x8f\x3a\xab\x5c\x00\x00\xf8\xd1\xbc\xfa\x30\x82\x7c" //....:........0.| |
// /* 0b90 */ "\x70\xf7\x8d\xe0\x37\x8b\x2b\xc6\xf8\x8c\x80\x07\x00\x53\xbc\x65" //p...7.+......S.e |
// /* 0ba0 */ "\x46\xdf\xb1\x73\xa0\x04\x7b\x80\x60\x8a\x53\x73\xa0\x60\x78\xd7" //F..s..{.`.Ss.`x. |
// /* 0bb0 */ "\xee\x80\xe0\x00\x31\xcf\xdd\x88\xd0\x00\x78\x07\xeb\x8f\x32\xc0" //....1.....x...2. |
// /* 0bc0 */ "\x77\xef\xe5\x0f\x00\x03\x4e\xfd\xf8\xa6\x00\x08\x76\xf1\x7e\xfa" //w.....N.....v.~. |
// /* 0bd0 */ "\xfe\xf1\xfc\x8c\x01\xbe\x5a\x22\x94\xb9\x74\x87\x26\xc0\x78\x81" //......Z"..t.&.x. |
// /* 0be0 */ "\x87\xe0\x29\x29\x57\x0a\x90\x3f\x9d\x1e\x7a\x7b\x05\x4f\x7b\xf4" //..))W..?..z{.O{. |
// /* 0bf0 */ "\xa4\x79\xe5\xe7\xf7\xa1\xa2\xe0\x7f\xe8\x09\x1e\xee\x0c\x30\xf7" //.y............0. |
// /* 0c00 */ "\xac\x88\x00\x01\x9b\xf2\x23\xc4\xd4\x08\x44\x03\xc3\xb8\x13\xc0" //......#...D..... |
// /* 0c10 */ "\x5c\x61\x9c\x8b\xc0\x03\x1e\xc7\x72\x28\x00\x0b\xc0\x66\xf3\x5e" //.a......r(...f.^ |
// /* 0c20 */ "\xca\xd0\x2f\xc9\x89\xc2\x38\x6b\x25\xec\xb3\x02\xbd\xe6\x86\x10" //../...8k%....... |
// /* 0c30 */ "\x4f\x9e\x99\x45\x3a\xbe\x40\xa4\x05\xd6\x5b\xd9\x9a\x04\xfe\xbe" //O..E:.@...[..... |
// /* 0c40 */ "\x13\x3e\xb0\xf2\x25\xfb\x9d\x9c\xe0\x47\xa1\x83\xb3\x8c\x08\x40" //.>..%....G.....@ |
// /* 0c50 */ "\x90\x42\x27\x55\x6a\x72\x6b\x5b\x00\x87\x05\x25\xce\x39\xc8\xbc" //.B'Ujrk[...%.9.. |
// /* 0c60 */ "\x00\x1f\x42\x69\x4a\xa7\xfa\x04\x1d\x02\x91\x08\x79\xd5\xc8\xb4" //..BiJ.......y... |
// /* 0c70 */ "\x00\x1b\x02\x20\x00\x4d\x6b\xe2\x04\xf5\xa9\xa5\x2b\xad\xc4\x06" //... .Mk.....+... |
// /* 0c80 */ "\x7a\x8c\xe7\xf2\x01\x70\x28\x17\xe5\x00\x0e\xfe\x19\xed\x4b\x01" //z....p(.......K. |
// /* 0c90 */ "\x5f\x85\xd7\x36\x02\x7d\x98\x76\xf9\x00\x8e\x45\xa2\x1f\xc1\x25" //_..6.}.v...E...% |
// /* 0ca0 */ "\x8c\x7d\xab\x60\x1f\xda\xee\xbd\x0c\x01\x20\xa3\x9c\xf6\xb1\x80" //.}.`...... ..... |
// /* 0cb0 */ "\x58\x13\x29\x4d\xbf\xc0\x2e\x17\x82\x1e\xfd\xe0\x00\x38\x15\x0c" //X.)M.........8.. |
// /* 0cc0 */ "\x62\x9e\xf7\xda\xfe\x00\xa0\x56\x31\x89\x73\x9b\xe7\xca\x00\xfd" //b......V1.s..... |
// /* 0cd0 */ "\x41\xa4\x95\xf7\xe5\x00\x20\x6c\x21\x11\xaa\xb6\x00\x5d\x0e\x40" //A..... l!....].@ |
// /* 0ce0 */ "\xc8\x00\x06\x28\xde\x6e\x0e\x90\xb1\x7c\x60\xe4\x09\xa5\x2b\xef" //...(.n...|`...+. |
// /* 0cf0 */ "\x87\x78\xf3\x38\xaa\x39\xbe\x24\xc6\x2c\x7f\x20\x37\x02\x45\xf0" //.x.8.9.$.,. 7.E. |
// /* 0d00 */ "\xec\xc0\x81\x08\x6d\xef\x7d\xaa\x60\x67\xc1\x4a\x7b\xdf\x7a\x7a" //....m.}.`g.J{.zz |
// /* 0d10 */ "\xa1\xf8\x79\xde\x9e\x05\xfe\xf2\x9e\xf7\xc0\x66\x05\xbf\x7c\xf0" //..y........f..|. |
// /* 0d20 */ "\x1b\x81\x58\x14\x98\xc6\xde\xf7\xc0\x62\x05\x3c\x26\xe0\x13\x3e" //..X......b.<&..> |
// /* 0d30 */ "\x98\x70\x02\x81\x1f\x45\x25\x4a\x5c\x01\x23\x02\x8c\x92\x52\xa0" //.p...E%J..#...R. |
// /* 0d40 */ "\x52\xa5\x28\xd5\x59\x81\x73\x92\x43\xb8\x14\x72\x37\x80\x2e\x43" //R.(.Y.s.C..r7..C |
// /* 0d50 */ "\x63\xd0\xde\xfc\xe5\x18\x67\xbc\x5d\x94\x63\x92\x1c\x06\x77\x16" //c.....g.].c...w. |
// /* 0d60 */ "\x18\x41\x3d\xf5\x01\x7c\x8c\xde\xe9\xa5\x9a\x77\xba\x67\x91\xbc" //.A=..|.....w.g.. |
// /* 0d70 */ "\x0e\x70\xc6\x54\xe3\x9e\xe0\x80\x6c\x00\x06\x30\x82\x7b\x8a\x01" //.p.T....l..0.{.. |
// /* 0d80 */ "\x39\x1a\xbd\xa7\x7f\x76\x3d\xa7\x58\x02\x0e\x3d\xa7\x00\x18\x02" //9....v=.X..=.... |
// /* 0d90 */ "\x12\x5f\xbe\x54\x70\xb2\x3f\xfc\x88\xc0\x20\x31\xc5\xae\x84\x7a" //._.Tp.?... 1...z |
// /* 0da0 */ "\x7c\x6c\x25\xda\x7f\x3e\x9e\xfa\x82\xc3\x7b\x52\xcd\x00\x0b\xa7" //|l%..>....{R.... |
// /* 0db0 */ "\x4a\xa0\x05\x6f\x7b\xee\xe5\x3d\x40\x1f\x1c\x30\xc0\x15\x7f\xbf" //J..o{..=@..0.... |
// /* 0dc0 */ "\x8b\x74\xe9\x54\x00\xba\xb9\x40\xfd\x7f\xa8\x04\x40\x41\xa1\xa2" //.t.T...@....@A.. |
// /* 0dd0 */ "\xbd\x3a\x55\x0e\x31\x00\x1e\xdd\x32\x87\x15\xed\xd2\xb8\x0a\x84" //.:U.1...2....... |
// /* 0de0 */ "\x76\x88\x00\x2d\x74\xf5\x7a\x4c\x00\x39\xd3\xd5\xe2\xd5\xc0\xf3" //v..-t.zL.9...... |
// /* 0df0 */ "\xa7\xc4\x89\x00\x01\xae\xf9\x2f\x15\xb0\x01\x3e\xd1\x5c\xd4\xe0" //......./...>.... |
// /* 0e00 */ "\x2e\xbe\x71\xeb\x00\xf3\x00\x95\xfe\xfe\x1d\xd7\xba\x3a\xfb\xcf" //..q..........:.. |
// /* 0e10 */ "\x5f\xf7\xcd\x78\xc8\x03\xce\x51\xde\x39\xd8\x09\xd7\xda\x3f\x20" //_..x...Q.9....?  |
// /* 0e20 */ "\x00\xbb\xaf\x9c\x72\x1a\x76\x62\x78\xc1\x1a\xab\x5c\x04\x3c\x61" //....r.vbx.....<a |
// /* 0e30 */ "\x22\x60\x00\x6b\x9e\x30\xc5\x68\x00\x53\xb3\x1f\x10\x04\xc3\xfb" //"`.k.0.h.S...... |
// /* 0e40 */ "\x3f\xac\x76\x62\x90\x02\xca\x77\x34\x50\x0f\x6f\x17\xe8\x9b\x7b" //?.vb...w4P.o...{ |
// /* 0e50 */ "\xdf\x88\x1e\x26\x76\x68\xaf\x67\x3c\x7a\x0e\xec\xcd\x03\x9e\x5d" //...&vh.g<z.....] |
// /* 0e60 */ "\x50\x04\x64\x42\x1d\x99\x69\x35\xae\xe0\x1c\x0b\xd9\x96\x44\x00" //P.dB..i5......D. |
// /* 0e70 */ "\x45\x39\xa4\x30\x11\xde\x2f\xe0\x22\xbd\x99\x77\x03\xf5\x32\x97" //E9.0../."..w..2. |
// /* 0e80 */ "\x1c\xa0\x01\xd8\x2f\xfc\x7d\x1c\x18\x44\x10\x18\x05\xdf\x96\xe2" //..../.}..D...... |
// /* 0e90 */ "\x87\x5e\xe1\x82\x9d\x55\xa8\x00\x9e\x7d\x43\x2a\xc0\x01\x4e\xbf" //.^...U...}C*..N. |
// /* 0ea0 */ "\xb9\x7d\xbf\xf3\x8e\x7b\x65\x82\x0a\x1f\xea\x01\x70\x0d\x2a\xc7" //.}...{e.....p.*. |
// /* 0eb0 */ "\x5e\xfd\x82\xa9\x2f\xc5\x7f\xb9\x61\xe7\x60\x80\x83\x51\xbe\x28" //^.../...a.`..Q.( |
// /* 0ec0 */ "\xba\x09\xfb\x02\x10\x49\x07\x83\x2c\x7e\x03\x6a\x8e\x7c\x50\x7f" //.....I..,~.j.|P. |
// /* 0ed0 */ "\xd6\xa2\x1b\x3f\xcc\x4a\x26\xbf\x15\xf4\x6f\xfc\x4d\x1e\x7b\xf1" //...?.J&...o.M.{. |
// /* 0ee0 */ "\x5f\x46\xff\x14\x94\xf8\x61\xf3\x1e\x30\x78\x12\xe5\x9d\x20\x9f" //_F....a..0x... . |
// /* 0ef0 */ "\x45\xe1\x59\x25\xf1\x34\x7e\xeb\x02\xfd\xd1\x4b\xf1\x0b\xe6\x3e" //E.Y%.4~....K...> |
// /* 0f00 */ "\xec\xf9\x0e\x7e\xee\x94\xcf\xbb\x52\x1f\xbb\x0d\x54\xe1\xec\x0b" //...~....R...T... |
// /* 0f10 */ "\x15\x02\x10\xa5\x2f\x8e\x1e\x60\xc0\x89\x88\x0c\xca\xad\x45\x22" //..../..`......E" |
// /* 0f20 */ "\x63\x18\xe0\x21\x02\x12\x21\x0c\x03\xe4\xc1\x81\x82\x1a\x25\x0a" //c..!..!.......%. |
// /* 0f30 */ "\x38\x31\xea\x78\xe2\x60\xa8\x00\xf7\x70\x8e\xa0\x11\xc8\x19\xd8" //81.x.`...p...... |
// /* 0f40 */ "\x46\x3d\x8c\xe3\xaa\x1f\xea\xe0\xec\x2d\x10\x28\x94\x52\xcf\xd9" //F=.......-.(.R.. |
// /* 0f50 */ "\x6a\x29\xef\x7d\xb4\x9d\x4a\xa3\xae\x5c\xfc\xec\x4a\x3e\x73\xa0" //j).}..J.....J>s. |
// /* 0f60 */ "\xf3\xe2\xbb\xe2\x20\x00\x5c\x31\xa0\x54\x00\x0e\x0b\xc3\x1b\x18" //.... ..1.T...... |
// /* 0f70 */ "\x18\x00\xb0\x05\x00\x82\xc1\x7f\x80\xd1\x2b\xf4\xfb\xf8\x3d\xc0" //..........+...=. |
// /* 0f80 */ "\x00\x2a\x80\x06\x44\xc7\x01\x07\xa3\x50\x01\xad\x63\x14\x6f\x94" //.*..D....P..c.o. |
// /* 0f90 */ "\xa2\x39\xd3\xdd\x49\x68\x00\x74\x28\xe7\x42\xb5\x00\x1a\xe6\xb4" //.9..Ih.t(.B..... |
// /* 0fa0 */ "\xc0\x12\x00\x01\x70\x2d\x02\x80\xf8\x7c\x3f\x01\xf0\xec\x76\x7b" //....p-...|?...v{ |
// /* 0fb0 */ "\x79\x56\x7b\x1e\xd7\xce\x77\x3a\x8f\x9c\xef\x45\x7d\x9a\x83\xf0" //yV{...w:...E}... |
// /* 0fc0 */ "\x2c\x08\x5c\xf3\x54\x08\x41\x3c\xd5\x7f\xc6\xf9\xfe\x3f\x8c\x50" //,...T.A<.....?.P |
// /* 0fd0 */ "\xc6\x00\x06\x7c\xb1\x02\xc0\x00\x67\x9e\x58\xc4\xe8\x00\x5c\x02" //...|....g.X..... |
// /* 0fe0 */ "\x80\x51\x7f\xc0\x8d\x41\x7a\x3d\x83\xcb\x11\x45\x75\x25\x80\xcc" //.Q...Az=...Eu%.. |
// /* 0ff0 */ "\x9b\x28\x00\xd2\x68\xcd\x00\x2d\xd4\x96\x05\x32\x6c\x56\x93\x51" //.(..h..-...2lV.Q |
// /* 1000 */ "\xe6\x91\x9a\x2c\x28\x8b\xcb\x33\x21\x23\xa0\x05\xfc\xb9\x68\xbc" //...,(..3!#....h. |
// /* 1010 */ "\x4f\x6e\x08\x00\xbe\x0f\x81\x70\x00\x33\xdf\x07\xe2\x76\x00\x30" //On.....p.3...v.0 |
// /* 1020 */ "\x01\x40\x1e\xb0\x03\xc0\x68\x00\x01\xf0\x20\x84\x2e\x42\xc9\x70" //.@....h... ..B.p |
// /* 1030 */ "\x0b\x8f\xcf\x40\x01\xee\x08\x01\x14\xe9\xa7\x85\x0c\x84\xb0\x19" //...@............ |
// /* 1040 */ "\x6b\x65\x00\x16\x69\x19\x80\xaa\x49\xa9\xd2\xcf\x07\xa0\x9e\x0f" //ke..i...I....... |
// /* 1050 */ "\x86\x00\x4f\x08\x0c\xbc\x21\x23\x00\x00\x67\x1e\x10\xc4\xd8\x00" //..O...!#..g..... |
// /* 1060 */ "\x64\x00\x87\x9d\xe8\x3e\x02\x04\x21\x40\x1e\x1f\xbc\x5c\x20\x00" //d....>..!@.... . |
// /* 1070 */ "\x37\x38\x00\x40\xfd\xe2\x02\x52\x93\x40\x0a\x35\x94\xc0\x54\xa2" //78.@...R.@.5..T. |
// /* 1080 */ "\x74\x00\x6b\x31\xa5\x38\xd6\x52\xf7\xcd\x0d\xe6\x18\x01\x71\xf7" //t.k1.8.R......q. |
// /* 1090 */ "\xd4\x92\xf8\x2e\x46\x40\x00\xce\xbc\x17\x89\xc0\x00\xd0\x05\x1f" //....F@.......... |
// /* 10a0 */ "\xfd\x26\xf6\x8a\x01\x40\x05\xe3\xd5\x4a\x3f\x80\x05\x09\x34\x52" //.&...@...J?...4R |
// /* 10b0 */ "\x49\x4c\x05\x37\xc0\xcb\xa1\xa5\x00\x2f\xe5\xcf\x6d\x68\xf0\x54" //IL.7...../..mh.T |
// /* 10c0 */ "\x06\x38\xfd\x12\x8f\xcb\x7a\xa2\xc6\xb9\xe1\xbc\x1b\x8c\x00\x00" //.8....z......... |
// /* 10d0 */ "\x6c\x02\x9e\x01\x78\x80\xc5\xd0\x28\x04\x03\xe0\x1e\x0d\x53\xee" //l...x...(.....S. |
// /* 10e0 */ "\x86\x90\x11\x79\x6d\x1a\xcd\x1c\xa0\x05\x9a\x90\xc0\x54\x9a\xe9" //...ym........T.. |
// /* 10f0 */ "\xd6\x68\xe3\xb5\xe2\x7b\x40\x0b\x2a\x21\xf0\x13\xd3\xd2\xd2\x05" //.h...{@.*!...... |
// /* 1100 */ "\x80\xd6\x1c\x23\x58\x1b\x3c\x3d\xd7\x41\xc8\x2c\x3d\xf3\x26\x03" //...#X.<=.A.,=.&. |
// /* 1110 */ "\x81\x71\xa8\x77\x9b\x7b\xe6\x95\x65\xbd\x3c\xea\xef\x3d\x51\x86" //.q.w.{..e.<..=Q. |
// /* 1120 */ "\x7c\xf0\xa4\x97\xa7\x8c\x0d\x7f\xa7\x4e\xf8\x1a\xec\x02\xfa\xa8" //|........N...... |
// /* 1130 */ "\xb4\xd6\xa0\x0b\x23\x10\xc0\x80\x92\x36\x00\x07\x16\xe5\x71\x8c" //....#....6....q. |
// /* 1140 */ "\x50\x04\x70\x02\x80\x06\x3e\x01\x01\x51\x6b\xe5\x65\x3d\x08\x34" //P.p...>..Qk.e=.4 |
// /* 1150 */ "\x12\x80\x8f\x00\x74\xb1\x80\xb8\x0c\x6c\x43\xc8\xa5\x8e\x1d\xe8" //....t....lC..... |
// /* 1160 */ "\x0d\xe5\xef\x95\xd4\xe0\x01\xf0\x57\x31\x93\xbf\x34\x80\x3c\x06" //........W1..4.<. |
// /* 1170 */ "\xba\x31\xdf\x16\x01\xe0\x2e\xe5\x3c\xae\xe5\x56\x5b\xcb\x1c\x24" //.1......<..V[..$ |
// /* 1180 */ "\xc7\xe3\x50\xe8\x07\x60\x98\x09\x80\xd6\x86\x3f\xd0\xd7\x8a\x8a" //..P..`.....?.... |
// /* 1190 */ "\x03\x50\x7b\xfa\xe5\xc0\x8e\x9e\x10\x11\xe1\x1a\xb9\x2d\x7a\x6c" //.P{..........-zl |
// /* 11a0 */ "\x3c\x01\x70\xfb\x31\x79\x18\xe9\xff\x00\xf0\x19\x9a\x97\xd4\x0e" //<.p.1y.......... |
// /* 11b0 */ "\xfd\x4a\x19\x21\xec\x5b\x00\xd0\x1a\x9f\xe8\x83\xdf\xa9\x47\x1d" //.J.!.[........G. |
// /* 11c0 */ "\x47\xa4\x17\xfe\x4c\x04\xf4\x03\xa9\x0c\x02\x78\x3a\x94\x5a\xfe" //G...L......x:.Z. |
// /* 11d0 */ "\x91\xf0\x23\xa9\x4c\x01\xc0\x45\x50\xbf\x9b\xc3\x76\x32\x43\xd9" //..#.L..EP...v2C. |
// /* 11e0 */ "\x1a\x00\xa0\x26\x5e\x58\x87\xb0\x8e\xa8\x10\x03\xf8\x75\x38\x21" //...&^X.......u8! |
// /* 11f0 */ "\xea\x99\x30\x17\x1f\x01\x45\x70\x63\xaa\xa4\x0f\xc0\x66\xee\x7f" //..0...Epc....f.. |
// /* 1200 */ "\x85\x3e\x10\xe5\xab\x88\xc5\x16\xcd\x1c\x80\x8e\xd9\xfa\x20\x40" //.>............ @ |
// /* 1210 */ "\xb5\x10\x04\x86\x06\xb3\xd1\x11\xcb\x72\xb9\x71\x87\x2a\x00\x2c" //.........r.q.*., |
// /* 1220 */ "\xbd\x13\x9c\xb6\xab\xe3\x86\xf8\x21\x3b\x51\xc0\xef\xcc\x78\x1d" //........!;Q...x. |
// /* 1230 */ "\x57\xc1\x10\x0f\x8e\xc1\x03\xd1\xda\x61\xde\x76\xa0\x57\x48\xe7" //W........a.v.WH. |
// /* 1240 */ "\x8d\x43\xbf\xa6\x3e\x44\xdc\xf9\xa7\x38\x46\x2e\x17\xde\x59\xb2" //.C..>D...8F...Y. |
// /* 1250 */ "\x38\x00\x06\xbf\xc3\xfb\x15\xd0\x01\xde\xa8\x7c\xa0\x12\xea\x07" //8..........|.... |
// /* 1260 */ "\x4d\x37\x4d\xa7\x54\x29\xea\x3d\x16\xf7\xbf\x24\xd7\x53\x67\x20" //M7M.T).=...$.Sg  |
// /* 1270 */ "\xc0\x70\x47\x4c\xb8\xea\x91\x51\xeb\xbf\x4e\x20\x77\xe8\x8e\xab" //.pGL...Q..N w... |
// /* 1280 */ "\xaf\x3a\x3a\xbb\xba\x69\xc7\x82\x97\x01\x0e\x2e\x12\x3a\x00\x06" //.::..i.......:.. |
// /* 1290 */ "\x91\xe3\x2c\x51\x80\x07\x80\x03\xbc\x0c\xc1\x81\x71\xe3\x18\xf1" //..,Q........q... |
// /* 12a0 */ "\xc2\x02\xaf\x5d\xa5\xd3\xe7\x57\x0b\xa0\x1f\x55\x28\x20\x87\x5c" //...]...W...U( .. |
// /* 12b0 */ "\x28\x00\x78\x15\x39\x81\x4f\xeb\x02\xa4\x3a\x98\x4e\x04\xd6\x60" //(.x.9.O...:.N..` |
// /* 12c0 */ "\xdd\x98\x6d\x6b\xea\x63\x50\x21\x0b\x85\x38\x18\x07\xa9\x8c\x28" //..mk.cP!..8....( |
// /* 12d0 */ "\x00\x8f\x00\x01\xca\xf8\x9c\xe3\x29\x01\x1f\xea\x62\xa7\xce\xa0" //........)...b... |
// /* 12e0 */ "\x31\x1a\x5f\x86\x61\x56\x5b\x4e\xf4\x9a\x9e\xf6\x23\x01\xa5\xad" //1._.aV[N....#... |
// /* 12f0 */ "\x7d\x05\x40\x0f\xac\xcb\x86\x53\x04\x79\x87\xf0\x10\x73\xe2\xb9" //}.@....S.y...s.. |
// /* 1300 */ "\xba\x44\x07\x9a\xb4\x77\x8f\x7c\x57\x42\x68\xe7\x49\x0b\xfc\xaa" //.D...w.|WBh.I... |
// /* 1310 */ "\x5f\x29\xcd\xf6\x30\x02\xc3\xe2\xb0\x19\xb0\x7f\xea\x28\x00\x34" //_)..0........(.4 |
// /* 1320 */ "\x31\x8f\x2c\xc0\x0f\xdb\x50\xf9\xc3\x01\xe0\x2f\x34\xee\x2c\xd5" //1.,...P..../4.,. |
// /* 1330 */ "\x1a\xab\x0c\x50\x01\x48\x21\xdd\x6a\x58\x04\x32\x28\x00\x33\x28" //...P.H!.jX.2(.3( |
// /* 1340 */ "\xa6\x03\x26\x9e\x88\x8a\x1f\x06\x10\x3c\x06\x0c\x63\x40\x01\xe9" //..&......<..c@.. |
// /* 1350 */ "\x34\x02\x38\xa3\x00\xe0\x0c\xa7\x72\x17\xd4\x78\x54\xbf\xe1\xfa" //4.8.....r..xT... |
// /* 1360 */ "\xf1\x4c\xf8\xce\x7c\x7b\x3e\x47\x9f\x28\xcf\x96\xe7\xcc\xb3\xe6" //.L..|{>G.(...... |
// /* 1370 */ "\xf9\xf3\xcc\xf4\x9c\x08\x77\x1a\x37\xf0\xc0\x08\x60\x6a\x24\x06" //......w.7...`j$. |
// /* 1380 */ "\x21\x14\xa1\xc0\xaa\xd4\xd9\x15\x5b\xae\xf2\x85\x3a\x10\x80\xd0" //!.......[...:... |
// /* 1390 */ "\xab\xd4\x39\x15\x5b\x8e\x42\xf9\x7f\x77\xb0\x5f\xc6\x38\x62\xa9" //..9.[.B..w._.8b. |
// /* 13a0 */ "\xed\xad\x70\x13\xab\x3e\x04\xe8\x8c\x0d\xac\xac\xf5\x99\x88\xc6" //..p..>.......... |
// /* 13b0 */ "\x03\xa5\x40\x4d\xfa\xba\xc4\x57\xae\xb4\x0a\x75\xb9\x72\xb4\x81" //..@M...W...u.r.. |
// /* 13c0 */ "\xf2\x1e\xc2\x8e\xb7\xf3\xd6\x5a\x7a\xf3\x4f\x58\xf9\x82\x7f\x08" //.......Zz.OX.... |
// /* 13d0 */ "\x93\xfe\xb8\x6d\x86\x7c\x57\x11\x57\xe8\xbf\xc7\x32\x4f\xbd\x10" //...m.|W.W...2O.. |
// /* 13e0 */ "\x9f\xbd\x05\xfd\x70\xeb\xed\xe5\xd8\x1e\x7f\xcc\xf6\x61\xbf\xb7" //....p........a.. |
// /* 13f0 */ "\x28\x3f\x6e\x11\x69\xc2\x7c\x37\x20\x7c\x00\x0d\x97\x86\xe6\x2c" //(?n.i.|7 |....., |
// /* 1400 */ "\x60\x04\x1c\x5b\xd5\xba\xf1\x0f\x07\x97\x3f\xb0\x00\x1d\x00\x37" //`..[......?....7 |
// /* 1410 */ "\x81\x83\x04\xd6\x45\x00\x46\x86\x31\x82\x09\x62\x80\x1b\xc0\x64" //....E.F.1..b...d |
// /* 1420 */ "\x03\x22\xc1\xe8\x8c\x10\x4d\x13\x28\xa5\x00\x37\x80\xab\x04\x8e" //."....M.(..7.... |
// /* 1430 */ "\xce\x09\x0f\x0e\xff\x44\x8f\xfa\x24\x55\x68\x19\x2d\x9d\x1a\xde" //.....D..$Uh.-... |
// /* 1440 */ "\x09\x67\xf5\x92\xad\x01\x93\xc9\x7a\xc8\x18\x04\x3a\xd8\xd4\x28" //.g......z...:..( |
// /* 1450 */ "\x8a\xe0\x80\x0f\xe3\x88\x20\x00\xc1\xf7\xfa\x90\x80\x70\xe2\x11" //...... ......p.. |
// /* 1460 */ "\x70\x5a\x72\x6c\x79\x02\x86\x7c\x7e\xe1\x57\x85\x00\x43\xc8\xf8" //pZrly..|~.W..C.. |
// /* 1470 */ "\x05\x79\x1e\xb8\x4e\x61\xe4\x38\xf2\x7e\x21\x3f\x31\xc2\x82\xf9" //.y..Na.8.~!?1... |
// /* 1480 */ "\x36\x47\x95\xf0\xa0\x04\xf7\xdf\x50\x00\xe0\x37\x73\x5a\x12\x2c" //6G......P..7sZ., |
// /* 1490 */ "\x86\x03\x36\x2d\xa0\x08\x3a\x92\xc0\xe3\x4a\xd3\xa5\xe5\x94\x63" //..6-..:...J....c |
// /* 14a0 */ "\x18\x0d\xac\xd2\x8e\xc8\x4b\x80\xef\xdd\x6d\xa6\x09\xe5\xdc\x08" //......K...m..... |
// /* 14b0 */ "\x40\x00\xe4\x3e\x5d\xc6\x3e\x00\x45\xc3\xb1\xe5\xed\xc4\x38\x77" //@..>].>.E.....8w |
// /* 14c0 */ "\x08\x7c\xc4\xa3\xf9\x65\xe6\x5e\x1e\x2c\xb0\x03\x02\x10\x01\xf3" //.|...e.^.,...... |
// /* 14d0 */ "\x54\x51\xfc\xab\x1e\x6d\xe3\x00\xf9\x91\x0e\x73\x01\xa3\xf9\xa5" //TQ...m.....s.... |
// /* 14e0 */ "\xe7\x5e\x4c\x06\xfe\xf1\x1a\xe1\x41\x03\xf3\x02\x03\x66\x35\xa1" //.^L.....A....f5. |
// /* 14f0 */ "\x2a\x48\x60\x32\x5f\x3d\x99\x09\x60\x90\xa5\x69\x5a\xf2\x42\x33" //*H`2_=..`..iZ.B3 |
// /* 1500 */ "\x06\x06\x2f\x8e\xc1\xea\x00\x05\xc1\x47\xce\x92\x44\x00\x07\x1c" //../......G..D... |
// /* 1510 */ "\xf3\xa6\x31\xa0\x02\x3e\xbd\xb2\x21\xe0\xb1\x0f\x9c\xde\x78\x22" //..1..>..!.....x" |
// /* 1520 */ "\x94\x91\x54\x7b\xcb\xae\x00\x20\x7c\x65\x5e\x63\x80\x1c\x05\xb2" //..T{... |e^c.... |
// /* 1530 */ "\xc1\x37\xb1\xe5\x18\x4d\x6b\xa8\xd0\xc6\x1f\xfc\xe1\x18\x12\x71" //.7...Mk........q |
// /* 1540 */ "\xe5\xca\xc1\x3f\xd1\x80\x56\x5e\x74\x8c\x04\x97\x37\x38\xe5\x47" //...?..V^t...78.G |
// /* 1550 */ "\x01\x4c\xbc\x28\xf2\xdc\x54\x00\x7d\x27\x1c\xb4\x9e\x73\x80\x25" //.L.(..T.}'...s.% |
// /* 1560 */ "\x59\x68\x0f\xb8\x1e\x8a\x5c\x2a\x20\x70\x42\x10\x83\x9a\x55\x6a" //Yh.....* pB...Uj |
// /* 1570 */ "\xa5\x1a\xa9\x50\x04\x05\x65\x30\x17\x69\x8d\x08\x94\xb6\x03\x37" //...P..e0.i.....7 |
// /* 1580 */ "\x9c\xd1\xc5\x65\x22\x3d\x9e\x0c\x01\xdd\x9e\x1c\x08\xe8\x8c\x00" //...e"=.......... |
// Sent dumped on RDP Client (5) 5520 bytes |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](30) used=151 free=16127 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=36) |
// front::draw:draw_tile((640, 336, 64, 64) (448, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](8208) used=157 free=16121 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](30) used=267 free=16011 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=37) |
// front::draw:draw_tile((704, 336, 64, 64) (512, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](8208) used=273 free=16005 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](30) used=723 free=15555 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=38) |
// front::draw:draw_tile((768, 336, 64, 64) (576, 192, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[6](8208) used=729 free=15549 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[7](30) used=814 free=15464 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,336,64,64) rop=cc srcx=0 srcy=0 cache_idx=39) |
// front::draw:draw_tile((192, 400, 64, 64) (0, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[8](8208) used=820 free=15458 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[9](30) used=913 free=15365 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=40) |
// front::draw:draw_tile((256, 400, 64, 64) (64, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[10](8208) used=922 free=15356 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[11](30) used=1372 free=14906 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=41) |
// front::draw:draw_tile((320, 400, 64, 64) (128, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[12](8208) used=1378 free=14900 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[13](30) used=1633 free=14645 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=42) |
// front::draw:draw_tile((384, 400, 64, 64) (192, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[14](8208) used=1639 free=14639 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[15](30) used=1938 free=14340 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=43) |
// front::draw:draw_tile((448, 400, 64, 64) (256, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[16](8208) used=1944 free=14334 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[17](30) used=2267 free=14011 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=44) |
// front::draw:draw_tile((512, 400, 64, 64) (320, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[18](8208) used=2273 free=14005 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[19](30) used=2594 free=13684 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=45) |
// front::draw:draw_tile((576, 400, 64, 64) (384, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[20](8208) used=2600 free=13678 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[21](30) used=2899 free=13379 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=46) |
// front::draw:draw_tile((640, 400, 64, 64) (448, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[22](8208) used=2905 free=13373 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[23](30) used=3143 free=13135 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=47) |
// front::draw:draw_tile((704, 400, 64, 64) (512, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[24](8208) used=3149 free=13129 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[25](30) used=3584 free=12694 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=48) |
// front::draw:draw_tile((768, 400, 64, 64) (576, 256, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[26](8208) used=3590 free=12688 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[27](30) used=3682 free=12596 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,400,64,64) rop=cc srcx=0 srcy=0 cache_idx=49) |
// front::draw:draw_tile((192, 464, 64, 64) (0, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[28](8208) used=3688 free=12590 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[29](30) used=3808 free=12470 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=50) |
// front::draw:draw_tile((256, 464, 64, 64) (64, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[30](8208) used=3817 free=12461 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[31](30) used=4093 free=12185 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=51) |
// front::draw:draw_tile((320, 464, 64, 64) (128, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[32](8208) used=4099 free=12179 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[33](30) used=4605 free=11673 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=52) |
// front::draw:draw_tile((384, 464, 64, 64) (192, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[34](8208) used=4611 free=11667 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[35](30) used=4817 free=11461 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=53) |
// front::draw:draw_tile((448, 464, 64, 64) (256, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[36](8208) used=4823 free=11455 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[37](30) used=4985 free=11293 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=54) |
// front::draw:draw_tile((512, 464, 64, 64) (320, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[38](8208) used=4991 free=11287 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[39](30) used=5151 free=11127 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=55) |
// front::draw:draw_tile((576, 464, 64, 64) (384, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[40](8208) used=5157 free=11121 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[41](30) used=5348 free=10930 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=56) |
// front::draw:draw_tile((640, 464, 64, 64) (448, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[42](8208) used=5354 free=10924 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[43](30) used=5806 free=10472 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=57) |
// front::draw:draw_tile((704, 464, 64, 64) (512, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[44](8208) used=5812 free=10466 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[45](30) used=6071 free=10207 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=58) |
// front::draw:draw_tile((768, 464, 64, 64) (576, 320, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[46](8208) used=6077 free=10201 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[47](30) used=6197 free=10081 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,464,64,64) rop=cc srcx=0 srcy=0 cache_idx=59) |
// front::draw:draw_tile((192, 528, 64, 64) (0, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[48](8208) used=6203 free=10075 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[49](30) used=6327 free=9951 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=60) |
// front::draw:draw_tile((256, 528, 64, 64) (64, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[50](8208) used=6336 free=9942 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[51](30) used=6474 free=9804 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=61) |
// front::draw:draw_tile((320, 528, 64, 64) (128, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[52](8208) used=6480 free=9798 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[53](30) used=6834 free=9444 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=62) |
// front::draw:draw_tile((384, 528, 64, 64) (192, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[54](8208) used=6840 free=9438 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[55](30) used=7367 free=8911 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=63) |
// front::draw:draw_tile((448, 528, 64, 64) (256, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[56](8208) used=7373 free=8905 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[57](30) used=7455 free=8823 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=64) |
// front::draw:draw_tile((512, 528, 64, 64) (320, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[58](8208) used=7461 free=8817 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[59](30) used=7520 free=8758 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=65) |
// front::draw:draw_tile((576, 528, 64, 64) (384, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[60](8208) used=7526 free=8752 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[61](30) used=8005 free=8273 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=66) |
// front::draw:draw_tile((640, 528, 64, 64) (448, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[62](8208) used=8011 free=8267 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[63](30) used=8326 free=7952 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=67) |
// front::draw:draw_tile((704, 528, 64, 64) (512, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[64](8208) used=8332 free=7946 |
// GraphicsUpdatePDU::flush_orders: order_count=64 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 5229 bytes |
// /* 0000 */ "\x00\x94\x6d\x80\x21\x66\x14\x40\x00\x03\x84\x79\xc7\x18\x36\x15" //..m.!f.@...y..6. |
// /* 0010 */ "\xfe\x0c\xf9\xb7\x5f\x09\x38\x10\x38\x58\xc7\x9a\x76\xf3\x2c\x70" //...._.8.8X..v.,p |
// /* 0020 */ "\xab\x9f\x31\x71\xf0\xab\x8f\x2d\xf2\x70\xbf\x79\x09\x01\x87\xc6" //..1q...-.p.y.... |
// /* 0030 */ "\x68\x00\x20\x92\x98\x19\x45\x2a\x97\x52\x85\x54\x88\x00\x20\x2c" //h. ...E*.R.T.. , |
// /* 0040 */ "\xb3\x1a\x11\xa1\x6c\x06\x4d\x39\xa3\x85\x28\xf6\xcc\x30\x0c\x76" //....l.M9..(..0.v |
// /* 0050 */ "\xcc\x79\x76\x89\x00\x00\xd8\x7c\xb7\x8a\xf8\x01\x2e\x06\x04\x79" //.yv....|.......y |
// /* 0060 */ "\x72\xc7\x7c\xa9\x1c\x73\x1e\x54\x8c\x17\x19\x7e\x3f\x79\x2f\x0e" //r.|..s.T...~?y/. |
// /* 0070 */ "\x3b\xaf\x1b\xcf\x90\xef\x8e\x8c\xc8\x00\xe9\xe0\x92\x98\x0b\x7a" //;..............z |
// /* 0080 */ "\x8d\x00\x00\x54\x86\x06\x72\x85\x5a\x5a\x8d\x29\x18\x53\x4d\x48" //...T..r.ZZ.).SMH |
// /* 0090 */ "\x69\xe0\x8a\x3d\xbc\xcc\x02\x1d\xbc\xde\x34\xa2\x50\x00\x39\xaf" //i..=......4.P.9. |
// /* 00a0 */ "\x40\x7c\x66\x60\x24\xdd\x6a\x9e\xc6\xa1\x1e\x66\x2e\x80\xd1\xda" //@|f`$.j....f.... |
// /* 00b0 */ "\x12\xab\xd0\xba\x00\x28\xf3\xd8\xc7\x34\xaa\xe6\xa9\x3c\xd7\xa7" //.....(...4...<.. |
// /* 00c0 */ "\x9b\x44\xf3\x72\x9e\x6f\x93\xce\x1a\x79\xc8\x4f\x39\xa9\xe7\x49" //.D.r.o...y.O9..I |
// /* 00d0 */ "\x3c\xeb\x80\xfc\xfd\x1c\x02\x30\xe1\x87\x1f\x8e\x01\xfa\x00\x3a" //<......0.......: |
// /* 00e0 */ "\x03\x3f\x0b\x04\x01\x01\xf9\xf6\xb8\x06\xe3\xd0\x11\xe2\x70\x8f" //.?............p. |
// /* 00f0 */ "\x6f\x79\x8f\x03\xf3\xf3\x70\x0f\xc3\xa0\x54\x40\x70\x4e\xfc\x78" //oy....p...T@pN.x |
// /* 0100 */ "\x52\x3a\x01\x7a\xe3\xfc\xff\xdc\x72\x03\x14\x3e\xfc\x87\x62\x9a" //R:.z....r..>..b. |
// /* 0110 */ "\x10\x2c\x96\x03\x57\x39\xa6\x1a\x90\xc1\x55\x0a\x5c\xca\x62\x26" //.,..W9....U...b& |
// /* 0120 */ "\x33\x03\x15\x04\xa7\x2e\xc9\xc7\x7e\xf0\x65\xec\x03\x71\x0f\x81" //3.......~.e..q.. |
// /* 0130 */ "\x1d\x01\xa3\xbf\xb0\x3f\xbb\xb3\x98\xb8\x43\xe4\xaf\x3d\xd0\x23" //.....?....C..=.# |
// /* 0140 */ "\xb7\x04\xdd\xbc\x7b\x11\x3f\x14\xc7\x6a\x80\xfc\x07\xb5\xd4\x8f" //....{.?..j...... |
// /* 0150 */ "\x00\x60\xeb\x88\x0f\xee\xae\xfa\x49\xd7\x7a\xac\x7b\x6e\xbb\xaf" //.`......I.z.{n.. |
// /* 0160 */ "\x48\xfc\x06\x61\xdb\x19\xdc\x9d\x81\x75\x5d\x74\x1d\xf2\xe4\x67" //H..a.....u]t...g |
// /* 0170 */ "\x04\x57\xc7\x83\x27\xbd\x43\xc0\xf6\x7a\x01\x81\x79\x60\x36\x03" //.W..'.C..z..y`6. |
// /* 0180 */ "\x3b\xfc\x30\xef\xe0\x28\xf1\x44\xf7\xb2\x93\xc0\x0c\x0e\x67\x01" //;.0..(.D......g. |
// /* 0190 */ "\x9d\xf2\x6b\xfc\x03\x38\x44\x47\x07\x97\x62\xdd\x09\xc0\x29\x63" //..k..8DG..b...)c |
// /* 01a0 */ "\xcf\x70\x18\xfe\x13\xfa\x9e\xc5\xcc\x1f\x68\xbf\xdf\xe7\x55\x60" //.p........h...U` |
// /* 01b0 */ "\xee\x2a\x4a\x5c\x78\x1f\xb5\xba\xe0\x04\x09\xd8\x96\x39\x82\xc6" //.*J.x........9.. |
// /* 01c0 */ "\x0c\xc4\x8e\xd0\xf3\xda\xbe\x3d\x5c\xc2\x9f\x4e\xc5\x51\xc1\x61" //.......=...N.Q.a |
// /* 01d0 */ "\x70\xa8\x03\x78\x6e\x09\xf0\x72\x56\xc5\x1e\x78\x76\x88\xe4\x00" //p..xn..rV..xv... |
// /* 01e0 */ "\x06\xec\xe5\x7c\x54\x98\x15\x55\xd9\xca\xb0\x5f\xd2\xbc\x0f\xe1" //...|T..U..._.... |
// /* 01f0 */ "\x37\x84\xa3\x02\x95\x61\x85\x66\x76\x0e\xed\x21\x31\x00\x12\x8e" //7....a.fv..!1... |
// /* 0200 */ "\x29\x3b\x14\xf6\x90\xdb\x07\x59\xc7\x0b\x20\x4e\x07\x53\x5b\xf0" //);.....Y.. N.S[. |
// /* 0210 */ "\x1d\x94\xc0\x65\x4a\x4d\x5c\x78\x02\xb8\x1f\xc5\xf3\x4d\xad\x6d" //...eJM.x.....M.m |
// /* 0220 */ "\x7f\x34\x29\xc3\x3e\xb8\x33\x07\xb8\x5b\x1b\x3e\x90\x4f\xfa\x3b" //.4).>.3..[.>.O.; |
// /* 0230 */ "\xec\xb0\x1b\xd5\x40\x43\x18\xf0\x10\xdb\x04\x5e\xbe\xa6\xcd\xdf" //....@C.....^.... |
// /* 0240 */ "\x50\x23\xc4\x4e\x3e\xa6\x25\x8c\x6d\xff\x51\xd0\xb2\x3c\x1c\xb1" //P#.N>.%.m.Q..<.. |
// /* 0250 */ "\xe0\xb5\x47\x0f\xa3\x87\xd2\x07\xf8\xd5\xf4\x9c\x50\xe7\xf4\xce" //..G.........P... |
// /* 0260 */ "\x08\xcd\x7d\x70\x77\x13\xc8\x09\xc2\x80\x8f\xe3\x03\xd8\x1d\x49" //..}pw..........I |
// /* 0270 */ "\xe6\x00\x4f\xb8\xd4\x00\x4c\x0c\xb6\x99\x45\x30\x4e\x5b\x02\x51" //..O...L...E0N[.Q |
// /* 0280 */ "\x4e\x01\xaa\x8f\xd2\xeb\x86\xe1\x1f\x1e\x00\x96\xd6\xbc\x2d\xb4" //N.............-. |
// /* 0290 */ "\x00\x0c\xe1\x81\x1e\x15\x9c\x08\x25\x1e\x2c\x3a\x7d\x50\x5f\x17" //........%.,:}P_. |
// /* 02a0 */ "\xda\xfe\x33\x82\x51\x9d\x85\x1e\x48\x8b\x7b\xdb\xaf\xdc\x05\x78" //..3.Q...H.{....x |
// /* 02b0 */ "\xe5\xf4\x9c\x68\xe7\xd6\x53\x83\x42\x63\xc2\x55\x2e\x73\x76\xfc" //...h..S.Bc.U.sv. |
// /* 02c0 */ "\x20\x9f\x41\xbe\x93\xf0\xcf\x95\x1e\x1e\xbf\x75\x3d\xbb\x76\xf7" // .A........u=.v. |
// /* 02d0 */ "\xb7\x7f\xcc\x08\xe3\xad\x5e\x28\x9e\x3e\x93\xe0\xc9\xfd\x73\xe6" //......^(.>....s. |
// /* 02e0 */ "\x37\x6f\x8a\xfe\x80\xfe\xe5\xb0\x8a\x52\x21\xec\xa5\x0a\x96\xb5" //7o.......R!..... |
// /* 02f0 */ "\xe2\x78\x0b\xf3\x48\x43\x92\x8a\x84\x69\x25\xfb\x21\xbe\x42\x0a" //.x..HC...i%.!.B. |
// /* 0300 */ "\x7c\xa9\x4b\xd9\x4e\x62\x32\x52\x00\x07\x72\xe1\xdd\x8d\xc0\x00" //|.K.Nb2R..r..... |
// /* 0310 */ "\xa8\x00\x2a\x10\xc2\x10\xca\x52\xd2\x94\x9a\xd6\xa3\x0c\x34\x92" //..*....R......4. |
// /* 0320 */ "\x9c\x51\x87\x2c\xe4\x30\x00\xdb\xde\x13\x02\x0a\x49\x4c\x30\x69" //.Q.,.0......IL0i |
// /* 0330 */ "\xe0\xa1\x09\x14\xa5\x04\x22\x04\x21\x06\x31\x85\x29\x36\xb5\xb8" //......".!.1.)6.. |
// /* 0340 */ "\xe1\x46\x52\xcd\x38\xf2\xcf\x5f\xbf\xd6\xeb\xd7\x79\xed\xcf\x00" //.FR.8.._....y... |
// /* 0350 */ "\xc8\x83\x18\xc2\x10\x89\x08\x48\x00\x28\x63\x12\x63\x19\x52\x94" //.......H.(c.c.R. |
// /* 0360 */ "\x39\xce\x25\x85\x0f\xd8\x51\x76\x30\x9b\xc5\x54\xe3\x94\xf7\xbb" //9.%...Qv0..T.... |
// /* 0370 */ "\x5a\xd5\x9c\xe7\xcd\x00\x0b\x18\xc5\x1c\xe7\xa1\xa8\x28\x3e\x00" //Z............(>. |
// /* 0380 */ "\x1a\x82\x11\x63\x18\x83\x18\x94\x21\x52\xd6\x9b\x70\x4b\xb2\x65" //...c....!R..pK.e |
// /* 0390 */ "\x14\x34\xc0\x3d\x0b\x7b\xda\x6b\x5c\xa9\x48\x21\x09\x94\xa6\x86" //.4.=.{.k..H!.... |
// /* 03a0 */ "\x30\x40\x00\xc2\x10\x08\x42\xda\xd6\x61\x85\x6d\xd0\xe7\x33\x0f" //0@....B..a.m..3. |
// /* 03b0 */ "\xc4\x14\x92\xb8\xc3\x29\xef\x65\x8c\x7f\x8b\x28\x10\x80\x21\x0c" //.....).e...(..!. |
// /* 03c0 */ "\x98\xc5\x25\x2a\xd6\xb5\xf8\xa2\xa7\x85\x1c\xdf\x8a\x08\x61\x10" //..%*..........a. |
// /* 03d0 */ "\xa5\x2b\x39\xca\x29\x4f\x06\xb7\xe2\x12\x10\xd1\xce\x5f\x70\x52" //.+9.)O......._pR |
// /* 03e0 */ "\x7b\x0b\x1b\xc7\x74\xaa\xc1\xdd\x14\x54\x00\x06\x3d\xc6\x37\x11" //{...t....T..=.7. |
// /* 03f0 */ "\xc0\x12\xb0\x0c\x1b\x3a\x99\x45\x22\xd3\x58\xd5\x5a\x85\x1e\xbb" //.....:.E".X.Z... |
// /* 0400 */ "\xc0\x04\xe3\x55\x68\xb4\xd6\x65\x14\x97\x39\xf5\x7e\x1c\xf1\x20" //...Uh..e..9.~..  |
// /* 0410 */ "\x00\x02\x10\xd9\xce\x6d\x6b\x54\xf7\xba\x9c\x72\x6d\x35\x9d\x61" //.....mkT...rm5.a |
// /* 0420 */ "\x54\xa3\xed\xbd\xe6\x9d\x85\x10\xe2\x1c\xe7\x2a\x52\xf7\xbc\x4e" //T..........*R..N |
// /* 0430 */ "\xaa\xd7\xbc\x25\x68\x28\x42\x20\x00\x85\x29\x5c\xe3\x8b\xb6\xf5" //...%h(B ..)..... |
// /* 0440 */ "\x9a\x75\xbd\xee\x0c\x63\x43\x18\x2c\x63\x8b\x4d\x70\xd2\x8a\x6a" //.u...cC.,c.Mp..j |
// /* 0450 */ "\x9a\xd7\x63\x18\x65\x29\xa7\xbd\x9c\x61\x63\xc0\xa4\x96\x54\xa4" //..c.e)...ac...T. |
// /* 0460 */ "\x82\x10\x10\x84\xe3\x0c\xa1\x56\xeb\xd0\x57\x18\x60\x42\x12\x08" //.......V..W.`B.. |
// /* 0470 */ "\x44\xa9\x48\x52\x4b\x70\x00\x0f\xe0\x18\xa9\xc7\x0d\x3d\x0e\xa1" //D.HRKp.......=.. |
// /* 0480 */ "\x36\xb5\xc5\x54\x61\x92\xe7\x30\xc6\x36\x94\xaa\x39\xc9\x21\x0f" //6..Ta..0.6..9.!. |
// /* 0490 */ "\x0d\x50\x04\x8b\x08\xfc\x2c\xe7\x30\xa5\x22\xc6\x3a\x7b\xdb\x8e" //.P....,.0.".:{.. |
// /* 04a0 */ "\x15\xb3\x54\xe3\x86\x1e\xdb\x5a\xd6\x92\x52\x88\x61\x3c\x02\x61" //..T....Z..R.a<.a |
// /* 04b0 */ "\xc6\x19\x12\x8a\x5a\xd6\x99\x4a\x48\x00\x24\xc6\x38\x35\x39\x2a" //....Z..JH.$.859* |
// /* 04c0 */ "\x52\x89\x42\x94\x81\x3f\xd0\x21\x0a\x5c\xe6\x69\x25\x97\x39\x94" //R.B..?.!...i%.9. |
// /* 04d0 */ "\x21\x40\x84\x2c\x63\x10\xa5\x2c\x1b\xbd\x09\xad\x74\x73\x92\x0c" //!@.,c..,....ts.. |
// /* 04e0 */ "\x28\xfc\xb5\xad\x11\x41\xad\x6b\x48\xbf\xd1\x47\x39\x4d\x6b\xa5" //(....A.kH..G9Mk. |
// /* 04f0 */ "\xad\x60\x38\x17\x0f\x13\x07\xb9\x9e\xf2\xbc\x25\x5d\x04\x1e\xf1" //.`8........%]... |
// /* 0500 */ "\x82\xb0\x00\x33\x6f\x78\xe2\x68\x02\x58\x01\x07\x7d\xb7\x9c\x51" //...3ox.h.X..}..Q |
// /* 0510 */ "\xb0\x5b\x20\xa6\xc6\x30\x9a\xd7\x84\xb9\x10\x00\x48\xb4\xd4\xb1" //.[ ..0......H... |
// /* 0520 */ "\x8e\x87\xc2\x59\x6f\x7b\x59\xe1\x7e\xb9\xc7\x21\x58\x3a\xf0\x50" //...Yo{Y.~..!X:.P |
// /* 0530 */ "\x85\x12\x8a\x5e\xeb\xd3\xac\x28\xd4\xb3\x9c\xb0\x84\x52\xd6\x8d" //...^...(.....R.. |
// /* 0540 */ "\x30\xc1\xc8\x62\x8d\x84\x0a\x22\xd6\xb4\x71\x46\x8d\x55\x9b\x70" //0..b..."..qF.U.p |
// /* 0550 */ "\x3a\x80\x31\x8f\xe5\x47\x1f\x27\xca\x2c\xd3\x9e\x69\xd5\x00\x22" //:.1..G.'.,..i.." |
// /* 0560 */ "\xc6\x30\x5c\x2c\x56\x59\xa7\x20\x00\x80\xc3\x53\x5a\xfe\x54\x06" //.0.,VY. ...SZ.T. |
// /* 0570 */ "\x60\xfc\x32\x6b\x5c\x6a\xac\x71\x46\xb5\xad\x10\x00\x36\xb5\xce" //`.2k.j.qF....6.. |
// /* 0580 */ "\xaa\xc3\x14\x6b\x85\xb8\x17\x91\xa9\x8a\xc7\x80\x05\x58\x47\x6d" //...k.........XGm |
// /* 0590 */ "\x0d\xe1\x9f\x16\x31\x8e\x37\xce\x16\xef\x95\x93\x4a\x56\x0f\x02" //....1.7.....JV.. |
// /* 05a0 */ "\x07\x60\x7e\x57\x2f\x26\x07\x2f\xaa\x00\x44\x4a\xa7\xc5\xdc\xd2" //.`~W/&./..DJ.... |
// /* 05b0 */ "\x95\x63\x18\x91\x08\x14\x7b\x75\x16\x9a\x9a\x71\xa9\x58\xc6\x01" //.c....{u...q.X.. |
// /* 05c0 */ "\x08\x61\x4a\x5c\x42\x20\xb1\x8e\x4c\x62\x40\x00\x43\x1b\xb5\xad" //.aJ.B ..Lb@.C... |
// /* 05d0 */ "\x44\xa2\x8e\x30\xca\x5f\xb7\xc8\x21\x14\x73\x96\xd6\xbb\x9c\x72" //D..0._..!.s....r |
// /* 05e0 */ "\xde\xf7\xfd\xa0\x31\x8d\xc6\x19\x32\x8a\x26\xb5\xe0\xbe\xe7\xca" //....1...2.&..... |
// /* 05f0 */ "\x44\xa2\x85\x8c\x74\x73\x92\xc6\x38\x97\x0f\xe7\xfc\x81\x26\x7e" //D...ts..8.....&~ |
// /* 0600 */ "\xda\xae\x01\x5a\x10\xe0\x8e\x62\xac\xb7\x9a\xfc\x11\x70\x09\x82" //...Z...b.....p.. |
// /* 0610 */ "\xc0\x00\x33\x4e\x01\x38\x99\x00\x96\x80\x40\x04\x6d\x6b\x48\x21" //..3N.8....@.mkH! |
// /* 0620 */ "\x10\xe7\x3f\x49\xc5\x2d\x69\x87\xe5\x39\x0d\x44\xa9\x49\x84\x22" //..?I.-i..9.D.I." |
// /* 0630 */ "\x5c\xe7\x7b\xaf\x55\xfe\x53\x06\xbd\xc7\xca\x88\x52\x96\x0d\xaa" //..{.U.S.....R... |
// /* 0640 */ "\x81\xcb\x3c\xda\x6b\xf2\xa2\xde\xf6\x79\x67\x8b\x4d\x5a\x52\xa8" //..<.k....yg.MZR. |
// /* 0650 */ "\x63\x02\x10\x4f\x95\x09\x3e\x5b\x08\x61\x5f\x83\xac\xb5\x25\x2a" //c..O..>[.a_...%* |
// /* 0660 */ "\x0c\x62\xf3\x4e\xc0\x73\xe0\x0b\x9e\x18\x8a\x41\x8c\x53\x5a\xc8" //.b.N.s.....A.SZ. |
// /* 0670 */ "\x60\x7e\x95\x8e\x03\x71\x53\x8e\x02\xc1\xfe\xa4\x16\x61\x2f\xd1" //`~...qS......a/. |
// /* 0680 */ "\x63\x1f\xe8\x82\x1b\x85\x00\x16\x25\x5b\xaf\x51\xce\x7d\xef\xa7" //c.......%[.Q.}.. |
// /* 0690 */ "\xca\xe2\xe3\x8e\x0e\xf4\x50\x21\x0b\x80\x4b\x80\x7a\xe0\x00\x12" //......P!..K.z... |
// /* 06a0 */ "\xc5\x16\x9a\xc0\x00\x94\x78\xc0\x1b\x5a\xea\x78\x5c\x61\x6b\x5a" //......x..Z.x.akZ |
// /* 06b0 */ "\xf9\x54\x61\x04\xa5\xfc\xa4\x39\xce\xe7\xf2\xa4\xa3\xe5\x62\x8a" //.Ta....9......b. |
// /* 06c0 */ "\x52\xa3\x0c\x0c\x63\x00\xc1\xc4\x03\x08\x20\x21\x09\x42\x11\xa4" //R...c..... !.B.. |
// /* 06d0 */ "\x94\x21\x08\x10\x84\xc2\x08\xdb\xdc\x01\x4b\x5a\x05\xc1\xb3\xcc" //.!........KZ.... |
// /* 06e0 */ "\x03\xf6\xc1\x3e\x8f\xa9\x18\x40\x49\x81\x97\x8a\xb2\xdc\x3a\x1a" //...>...@I.....:. |
// /* 06f0 */ "\xaf\x70\x04\x8e\x01\x6e\x02\x31\x4b\x5a\xe0\x3a\xe2\xa1\x45\xbc" //.p...n.1KZ.:..E. |
// /* 0700 */ "\xa0\x76\x2e\x00\x01\xe0\xf4\x79\xa7\x49\xbd\x32\x21\x84\xa6\xb5" //.v.....y.I.2!... |
// /* 0710 */ "\xc1\x8c\x70\xb2\x94\x00\x60\x17\x27\xd4\x80\xc6\x32\x18\x06\x00" //..p...`.'...2... |
// /* 0720 */ "\x40\x32\x94\xe1\x5c\x38\x20\xfa\xa8\xd5\x5a\x8f\xc1\xf5\x5f\xbf" //@2...8 ...Z..._. |
// /* 0730 */ "\xfd\x48\xc2\xbc\x70\x40\x01\x12\xfa\x93\x6b\x5a\xaf\xdf\xdb\x7e" //.H..p@....kZ...~ |
// /* 0740 */ "\xa4\x8a\x49\x7e\xa4\x4e\xbe\xa4\xcf\xae\xed\xad\x68\xa5\x3c\xf4" //..I~.N......h.<. |
// /* 0750 */ "\x21\x04\x23\xea\x47\x2c\xc8\x9f\x5d\xfd\x31\x00\x00\x11\xaa\xb7" //!.#.G,..].1..... |
// /* 0760 */ "\x57\x53\x5e\x12\xc5\x8b\x80\x08\x79\x0c\x1f\xd3\x70\x11\xe9\xb1" //WS^.....y...p... |
// /* 0770 */ "\x47\xa1\xe7\x8c\x02\x00\x2a\x18\xc6\xa3\x0c\xfa\xb8\x70\x62\x8e" //G.....*......pb. |
// /* 0780 */ "\x97\x4e\x35\x25\x18\x61\x27\xd4\x60\x6d\x88\xb5\xad\x08\x61\x2b" //.N5%.a'.`m....a+ |
// /* 0790 */ "\xf9\xfa\x95\x67\x39\x14\xfd\x17\xf5\x22\xd6\xb5\xf5\x30\xe1\x3d" //...g9...."...0.= |
// /* 07a0 */ "\x5f\x52\x9c\x61\x9c\xb2\xa3\xea\x47\x83\x21\x46\x18\x92\x95\x85" //_R.a....G.!F.... |
// /* 07b0 */ "\xdb\x52\xd2\x42\x1e\x4d\xac\x34\xda\xf7\xa7\x0f\xbc\x68\xb8\x00" //.R.B.M.4.....h.. |
// /* 07c0 */ "\x0e\xc3\xce\x25\xef\x1a\xaf\x80\x17\x80\x46\x6b\x75\xea\x5a\xd4" //...%......Fku.Z. |
// /* 07d0 */ "\xb9\xce\xaf\x3d\x81\x60\x7b\x24\x29\x4a\xde\xf7\x16\x9a\xd0\xc6" //...=.`{$)J...... |
// /* 07e0 */ "\x17\x6d\xfe\x0d\x85\x59\x68\x21\x0c\x7a\xef\xcd\x8e\x05\x24\xa8" //.m...Yh!.z....$. |
// /* 07f0 */ "\xa5\x35\xfb\xfd\x1c\xe6\x65\x14\xa9\xc7\x20\xc6\x24\x31\x86\x52" //.5....e... .$1.R |
// /* 0800 */ "\x9b\x9e\x18\xce\x59\xce\x67\xd7\x72\x42\x13\x4c\x32\x62\x28\x42" //....Y.g.rB.L2b(B |
// /* 0810 */ "\x7d\xb7\xd8\xc6\x1d\x65\xbc\x84\x20\xf2\xcf\x22\x10\x9b\x4d\x69" //}....e.. .."..Mi |
// /* 0820 */ "\xef\x72\xa5\x2b\xdd\x79\x84\x22\xef\x3d\x87\x39\xc0\x84\x30\x8b" //.r.+.y.".=.9..0. |
// /* 0830 */ "\x20\x3e\x2e\xe3\x0c\xa3\x9c\xe1\x06\xc7\x67\xc4\x4a\x29\x26\xea" // >........g.J)&. |
// /* 0840 */ "\x0c\x97\x7d\x95\x4e\x38\xca\x53\xd2\xf6\x24\x42\x17\x38\xe7\x34" //..}.N8.S..$B.8.4 |
// /* 0850 */ "\x88\xe7\xc5\x02\x92\x52\x42\x1e\x0d\x68\xd0\x27\x86\xd6\x3e\x7f" //.....RB..h.'..>. |
// /* 0860 */ "\x80\xc6\x32\x42\x11\x4c\x27\x06\xe4\x4b\x09\xbc\x46\x92\x21\x0e" //..2B.L'..K..F.!. |
// /* 0870 */ "\x86\x11\x06\xe7\x3c\x61\x08\xa7\xbd\xc2\x94\xa4\xc6\x31\x28\xa2" //....<a.......1(. |
// /* 0880 */ "\x08\x45\xbd\xed\x25\x29\x84\x21\x80\x3b\xd7\xb9\x74\xa6\x8c\x1e" //.E..%).!.;..t... |
// /* 0890 */ "\x43\x25\xe0\x00\x72\x6e\x1c\xb8\xc9\x00\x4c\x00\x02\x7b\x8d\xbb" //C%..rn....L..{.. |
// /* 08a0 */ "\xb5\x4e\x01\xf5\xd0\x27\x08\x8e\xb0\x81\xf0\x7b\x05\x3e\x3b\x7f" //.N...'.....{.>;. |
// /* 08b0 */ "\xcf\x56\xb0\xff\xcc\x36\xf6\x83\x8e\xc6\x53\xd0\xf9\xf4\x63\x81" //.V...6....S...c. |
// /* 08c0 */ "\x6b\x00\xf9\xd4\x09\x87\xf8\x61\xc6\x41\xf4\xf9\x64\xdd\x99\x1f" //k......a.A..d... |
// /* 08d0 */ "\x4f\x2f\xf3\x3d\xa9\xe7\x90\x2b\xc1\x51\x80\x6a\x23\xbb\x5e\xdf" //O/.=...+.Q.j#.^. |
// /* 08e0 */ "\x5a\x39\xe1\x3b\x88\x58\x42\x16\x02\x3d\x00\x03\xf9\x61\x84\xdd" //Z9.;.XB..=...a.. |
// /* 08f0 */ "\x27\x8c\x3c\x77\x6c\x9c\x14\x91\x25\x08\x5d\xda\xa7\x03\x25\x02" //'.<wl...%.]...%. |
// /* 0900 */ "\xb8\x51\xbf\x73\xff\xdf\x9c\x23\xcf\x4f\x09\xd7\x5b\xe7\xd4\x8f" //.Q.s...#.O..[... |
// /* 0910 */ "\x14\xcf\x70\x09\xf0\xc4\xf7\x68\xc3\xed\xc7\x97\x03\xfd\xd9\xfa" //..p....h........ |
// /* 0920 */ "\x3f\x04\x4b\xbb\x9d\xc7\x9e\xa7\xf0\x4f\x9f\xe7\xc3\x73\xed\xf8" //?.K......O...s.. |
// /* 0930 */ "\xf6\x9e\x1e\x05\x9e\xec\xbd\x9f\xbe\x3b\xb4\x40\xdf\x85\xdd\xd7" //.........;.@.... |
// /* 0940 */ "\x63\x8c\x2b\xeb\xb0\x14\x18\x67\xe3\xbb\xaf\xc5\x2d\x68\x43\xcd" //c.+....g....-hC. |
// /* 0950 */ "\xb3\x01\xf3\x6a\x54\xa5\xdd\xa8\x31\xc1\xe6\x0c\x00\x00\xd3\xf8" //...jT...1....... |
// /* 0960 */ "\xb6\xe2\x9a\x00\x63\x80\x7b\x79\xc3\x81\xb0\x0e\xbe\x1e\xdd\x60" //....c.{y.......` |
// /* 0970 */ "\x9d\x46\x01\x8f\x8c\x03\x2c\xc0\x32\x4c\x03\x1f\x18\x06\x59\x82" //.F....,.2L....Y. |
// /* 0980 */ "\x79\xb1\xc1\x2f\x0c\x30\x4b\x97\x88\xa0\xc4\x00\x0f\xa9\x8b\xc4" //y../.0K......... |
// /* 0990 */ "\x56\xd2\x00\x65\xd3\x91\x80\x7d\x39\x41\x30\x50\x23\x08\x13\x78" //V..e...}9A0P#..x |
// /* 09a0 */ "\x43\xc1\x1f\x48\x40\x03\x80\x80\x67\x0c\x06\xf7\x53\x80\x70\x10" //C..H@...g...S.p. |
// /* 09b0 */ "\x7c\xd4\x00\x4c\x80\x00\xc1\xf8\xae\x62\x0a\x02\x67\x80\x83\xea" //|..L.....b..g... |
// /* 09c0 */ "\x1f\x43\xa0\x09\xd0\x64\x70\x12\xba\x2f\x90\xe2\x25\x85\xfb\xe4" //.C...dp../..%... |
// /* 09d0 */ "\x54\x12\x03\x10\xfa\xc5\x44\x5a\x80\x11\x91\x56\x04\xff\x8c\x23" //T.....DZ...V...# |
// /* 09e0 */ "\x36\x15\xc0\x47\x0c\x23\x75\x18\x3d\xb3\x0f\x18\x46\x18\x0a\x99" //6..G.#u.=...F... |
// /* 09f0 */ "\x10\x86\x01\x8b\x9e\x75\xae\x82\xb0\x03\xe0\x38\xf2\xfa\x7f\x85" //.....u.....8.... |
// /* 0a00 */ "\x25\xe3\x81\x23\x86\x28\x7b\x07\x5a\xb0\x0d\xf8\x7b\xae\x63\x8f" //%..#.({.Z...{.c. |
// /* 0a10 */ "\x28\x77\xe7\x5f\x07\x53\x17\xcf\x0e\x60\xf8\xab\xc0\x8c\xee\x63" //(w._.S...`.....c |
// /* 0a20 */ "\x2c\x1a\x48\xc1\xf4\xf5\x80\x79\x18\x57\x9d\xe2\xc8\x20\xf3\xcb" //,.H....y.W... .. |
// /* 0a30 */ "\xc2\xf0\x48\x42\x39\x83\xfc\x66\x2d\x35\xc1\x1c\xa1\x8c\x05\xd3" //..HB9..f-5...... |
// /* 0a40 */ "\x02\x0c\xa5\x38\x6b\xf1\x67\x39\xc1\x77\xf1\x82\xff\xe7\x0e\x2e" //...8k.g9.w...... |
// /* 0a50 */ "\x3c\x06\x19\xe3\xbd\x03\xdc\x38\xdd\x1e\x60\x63\xe6\xce\x02\x85" //<......8..`c.... |
// /* 0a60 */ "\x78\xce\x61\x4a\x4d\x1f\x50\x2f\xc3\x85\xf3\x5d\x31\x58\x02\xc0" //x.aJM.P/...]1X.. |
// /* 0a70 */ "\x03\xc9\xda\x4c\xc0\x00\xed\xbe\xda\xc6\xd6\x02\x69\x88\x49\x68" //...L........i.Ih |
// /* 0a80 */ "\xe2\x8d\x40\xe1\x18\xf3\x14\x61\xec\x90\xee\x16\x0e\x1e\x59\xd8" //..@....a......Y. |
// /* 0a90 */ "\x31\x15\x10\x6f\x03\x18\xb8\x1b\x40\xd7\x02\x13\x00\x2f\x11\x88" //1..o....@..../.. |
// /* 0aa0 */ "\x59\xa7\x30\x03\x7b\x69\x87\x63\x18\x25\xd1\x53\x8e\x61\x91\x98" //Y.0.{i.c.%.S.a.. |
// /* 0ab0 */ "\x16\xfd\xec\x2b\x09\x1c\x28\xcc\x01\x38\x64\xa0\x43\xef\xc8\x14" //...+..(..8d.C... |
// /* 0ac0 */ "\x81\x54\xe3\x9c\x87\xde\x0b\x87\xdb\x7b\x00\x5d\xfe\xfe\x27\xe0" //.T.......{.]..'. |
// /* 0ad0 */ "\x38\x0c\xbf\xdf\xc4\xbd\x2e\xc2\xbc\xd0\x23\x87\xd1\x1f\x87\x2c" //8.........#...., |
// /* 0ae0 */ "\x2f\x08\xa0\x00\x7a\x61\xf2\xc3\xde\xba\x5d\xe7\xac\x1c\xbb\x98" ///...za....]..... |
// /* 0af0 */ "\x0a\x3d\x4f\x34\x92\xd3\xa4\x58\x74\x6e\x10\x42\x30\xd8\xfc\x70" //.=O4...Xtn.B0..p |
// /* 0b00 */ "\x0a\x50\x03\x13\x5a\xf8\x0c\x24\x42\x0c\x18\x9d\x24\x3b\xc7\x2c" //.P..Z..$B...$;., |
// /* 0b10 */ "\xc0\x05\xc0\x6d\xeb\x03\x06\x16\x63\x0d\xe1\x91\x0b\xe0\x06\x60" //...m....c......` |
// /* 0b20 */ "\xc3\xf9\xc1\xae\x58\xe6\x0c\x3d\xa8\x19\xc3\x27\x97\xc9\x8c\xc0" //....X..=...'.... |
// /* 0b30 */ "\x0d\xee\xa8\xb5\xad\x30\x03\xfb\x79\xe0\x87\x22\xb0\xf7\x31\x13" //.....0..y.."..1. |
// /* 0b40 */ "\x07\x64\x40\xb7\x25\x13\x06\x0f\x7d\x60\x42\x48\xe5\x0e\xe0\x09" //.d@.%...}`BH.... |
// /* 0b50 */ "\x0c\x01\x40\x18\x73\x2d\xd0\x72\x3e\x7a\xce\x72\xc0\x16\x01\x85" //..@.s-.r>z.r.... |
// /* 0b60 */ "\x83\x18\x00\x5a\x3e\x7b\xba\x00\x33\x02\x07\xc7\x83\x18\x65\x5c" //...Z>{..3.....e. |
// /* 0b70 */ "\x23\xfd\x5c\x8a\x83\xdc\x99\x9c\xfb\x60\x43\xe7\xbf\xac\x94\x21" //#........`C....! |
// /* 0b80 */ "\x30\x07\xfc\xf7\x69\x40\x00\xfe\x16\x1f\x8b\x85\x03\x04\x9a\xc7" //0...i@.......... |
// /* 0b90 */ "\x0e\xe7\x2c\xe1\xce\x15\x88\x60\x2d\xb8\x21\x80\x08\xa8\xe0\x2d" //..,....`-.!....- |
// /* 0ba0 */ "\xcb\xbf\xdf\xf0\x16\xdf\xcc\x10\xdc\x10\x30\x6e\x4c\x9a\x00\x01" //..........0nL... |
// /* 0bb0 */ "\xd0\x79\x2d\xe3\x3f\x00\x35\xc3\x06\x2a\xff\x05\x55\x6e\xbc\x45" //.y-.?.5..*..Un.E |
// /* 0bc0 */ "\x01\x10\x82\x0b\xdc\x04\x81\x20\x33\xeb\xb8\x96\x16\xf8\x50\x99" //....... 3.....P. |
// /* 0bd0 */ "\x4a\x79\xc0\x85\xe8\x00\x66\x92\x56\x0c\x39\x12\x81\x76\x57\x8a" //Jy....f.V.9..vW. |
// /* 0be0 */ "\x00\x46\x08\xca\x03\x75\x6a\x33\x96\x31\xdc\x20\x01\x18\x0a\x5b" //.F...uj3.1. ...[ |
// /* 0bf0 */ "\x21\x8a\x36\x02\x96\xfa\x9b\xbc\xf7\x01\x4b\x69\xe9\x4a\x35\x00" //!.6.......Ki.J5. |
// /* 0c00 */ "\x03\x8a\xf8\xc5\xe9\x4a\x89\x80\x1b\x77\x86\x5c\x10\x01\x28\x06" //.....J...w....(. |
// /* 0c10 */ "\x09\xad\x78\x62\x08\x58\xc7\x18\xc0\x41\xbb\x5f\xf0\xaf\xa3\x01" //..xb.X...A._.... |
// /* 0c20 */ "\x06\x77\x10\xc0\x01\xf0\x10\x6f\x8d\xd2\x09\xd5\x01\x80\x80\xe3" //.w.....o........ |
// /* 0c30 */ "\xe5\x46\x02\x0d\xeb\xf3\x45\x1b\x00\x01\xc4\xfc\xd1\x8c\x44\x00" //.F....E.......D. |
// /* 0c40 */ "\xdf\xcd\x18\x38\xc3\x3c\xd0\xa9\xc7\x22\xb8\x05\xaf\xca\x21\xc3" //...8.<..."....!. |
// /* 0c50 */ "\x5c\xcc\x02\xd7\x58\x0b\x6d\x80\x5b\x3c\xcc\x02\xb1\x18\x05\xb2" //....X.m.[<...... |
// /* 0c60 */ "\x30\x03\xfc\x62\x3e\x48\xc0\x2d\x9a\x5c\x10\x7c\xcd\x26\xe0\x00" //0..b>H.-...|.&.. |
// /* 0c70 */ "\x73\x2f\x33\x63\x30\x00\xc2\x59\xa0\xde\x53\x63\x2f\x35\x28\xee" //s/3c0..Y..Sc/5(. |
// /* 0c80 */ "\x30\xcc\x3b\x8e\xa0\x0a\xba\xcb\x40\x68\x18\x6c\x85\x47\xc1\xf6" //0.;.....@h.l.G.. |
// /* 0c90 */ "\xe1\x8a\x33\x00\xc7\xfa\x23\x84\x60\x97\xc0\x06\x02\xec\x54\xe3" //..3...#.`.....T. |
// /* 0ca0 */ "\x80\x30\x01\xec\x01\xad\x1e\x17\x8c\x01\xd5\xc5\xf5\x23\x00\x74" //.0...........#.t |
// /* 0cb0 */ "\xfc\xff\x02\xba\x38\x00\x03\x9b\xf3\xa7\xc6\x6a\x02\x72\x00\x40" //....8......j.r.@ |
// /* 0cc0 */ "\x05\xce\x96\x39\xd6\x30\xc0\x02\x7d\x77\xc2\x53\xb1\x87\x1c\x47" //...9.0..}w.S...G |
// /* 0cd0 */ "\x96\x7c\x21\xf5\x3c\x8d\xa3\xb1\x92\xff\x7f\xc1\x49\xaf\x8f\x0b" //.|!.<.......I... |
// /* 0ce0 */ "\x38\x29\x65\xce\x8a\x3e\x64\x79\xf8\x3f\x86\x0e\xdf\xa2\xfb\x72" //8)e..>dy.?.....r |
// /* 0cf0 */ "\x07\xf0\xe5\x05\xd7\xfe\xdc\x78\x16\x3e\xee\x3f\xfa\xe2\xd8\x3a" //.......x.>.?...: |
// /* 0d00 */ "\xe9\xf7\x9c\x0d\x9f\x7b\x57\xdb\x7f\x3a\x28\xa7\x82\x61\xc0\x78" //.....{W..:(..a.x |
// /* 0d10 */ "\x60\x10\xbf\xdf\xe9\xfc\xce\xc0\x44\x3c\xe7\x9c\xbf\x0b\xbf\x95" //`.......D<...... |
// /* 0d20 */ "\x4d\xe2\x2e\x11\xfd\x0f\x03\x6c\xe3\xe6\x97\xce\x60\xc6\x07\xd5" //M......l....`... |
// /* 0d30 */ "\x87\x59\x6f\xc7\x79\xfa\xbe\x73\xf5\x5e\x0f\x89\x8c\x44\x3e\xf1" //.Yo.y..s.^...D>. |
// /* 0d40 */ "\x3d\xf9\xf2\x3e\x3b\xcb\x81\xfe\xca\x0f\x99\x3f\xda\x7f\x0e\x23" //=..>;......?...# |
// /* 0d50 */ "\x18\x3f\x09\xf1\xd8\x3e\xea\x38\x4b\xbe\x64\xf8\x0a\x3b\x51\x3e" //.?...>.8K.d..;Q> |
// /* 0d60 */ "\x64\xf8\xe2\x7f\x6e\x38\x2a\xf0\x3f\xcb\x45\xf1\x58\x12\x70\x1e" //d...n8*.?.E.X.p. |
// /* 0d70 */ "\x05\xf2\xe0\x42\x2d\x80\x66\xfc\xc2\x18\xde\x01\x9b\x8b\xfd\xff" //...B-.f......... |
// /* 0d80 */ "\x00\xcd\xfa\x18\x48\xbe\x38\x45\x51\xc8\x00\x1d\xdb\x8a\x7e\x37" //....H.8EQ.....~7 |
// /* 0d90 */ "\x40\x03\xac\x33\x11\x99\x5d\x17\xb4\x84\xd6\xa2\x78\x04\xa6\x3b" //@..3..].....x..; |
// /* 0da0 */ "\x87\x3b\x3e\x30\xca\xbd\x0c\xdb\xfb\x49\xc4\x06\xbb\x0b\x15\xea" //.;>0.....I...... |
// /* 0db0 */ "\x99\x18\x05\x28\x2b\xd9\xf1\x50\x02\xc1\xdb\xce\xc4\xee\xd2\x71" //...(+..P.......q |
// /* 0dc0 */ "\xf1\xc3\x1d\x9f\x18\x30\xda\xbb\x0a\x46\x0c\x1c\x2a\xcb\x6e\x11" //.....0...F..*.n. |
// /* 0dd0 */ "\x80\x58\x0f\xae\x43\xf8\x2e\xce\x38\x14\x47\xcc\x7b\x16\x2e\xff" //.X..C...8.G.{... |
// /* 0de0 */ "\x3a\xb8\x1b\x5f\x00\x09\xe1\x7b\x5f\x39\xc0\xbe\x3d\xad\x03\xfc" //:.._...{_9..=... |
// /* 0df0 */ "\x66\xd8\x43\x81\xda\x16\x3e\x28\x62\x8b\xe3\x67\x5a\x87\x5f\xb0" //f.C...>(b..gZ._. |
// /* 0e00 */ "\xdf\x3f\xa7\x68\x2a\xed\x12\x1d\xc0\x12\xc5\x18\x67\x68\x29\x55" //.?.h*.......gh)U |
// /* 0e10 */ "\x96\x8f\x76\x71\x8c\x01\x51\x18\x02\x8e\x7e\x64\xe0\x1e\xbc\x70" //..vq..Q...~d...p |
// /* 0e20 */ "\x06\xb4\xf4\x7b\x7d\xf8\xc0\x27\x61\x6f\x64\xc1\xd6\x00\x15\xd8" //...{}..'aod..... |
// /* 0e30 */ "\xef\x00\x3b\xf4\x60\xb9\xb7\xb2\x18\x4d\x97\xc0\x1e\x08\xc4\x18" //..;.`....M...... |
// /* 0e40 */ "\xcf\xa0\xfb\xb7\x86\x8b\x3a\xe8\x18\x56\xaa\x4e\xc0\x00\xf0\x2a" //......:..V.N...* |
// /* 0e50 */ "\xe3\xc7\xd6\xda\x00\x79\x80\x24\xf8\x6e\xf3\xda\x58\x84\x12\xe0" //.....y.$.n..X... |
// /* 0e60 */ "\x00\x05\x83\x04\x18\x30\x62\x70\x61\x0c\x62\x33\xd8\xc5\x4a\xb5" //.....0bpa.b3..J. |
// /* 0e70 */ "\x5b\xc1\x78\x86\xd6\xb0\x28\x0d\x62\xcb\x4b\x6e\x34\x10\xfe\xf3" //[.x...(.b.Kn4... |
// /* 0e80 */ "\x88\xdf\xe3\x00\x64\x17\x9c\x6e\x15\x00\x7e\x27\xcc\x02\x3f\x18" //....d..n..~'..?. |
// /* 0e90 */ "\x02\x8e\x70\x5f\x23\x08\x96\x30\xd2\x76\x94\xec\x43\x99\x42\x00" //..p_#..0.v..C.B. |
// /* 0ea0 */ "\x47\x80\x00\x78\x24\xc1\xe4\x5b\x7b\x00\x3d\xc0\x12\xee\x19\xb8" //G..x$..[{.=..... |
// /* 0eb0 */ "\xf0\x86\x8f\x9a\xc0\x67\x95\x80\x16\x9e\x4d\x9a\x06\x23\x21\x62" //.....g....M..#!b |
// /* 0ec0 */ "\x3e\x58\x20\xc1\xf1\x4c\x1d\xbe\xc5\x47\xd1\x83\xbf\xe0\x15\xb8" //>X ..L...G...... |
// /* 0ed0 */ "\xd2\x02\x63\x4c\xa0\x09\xc6\x52\xea\x00\x4a\x06\x58\xaa\x6e\x5b" //..cL...R..J.X.n[ |
// /* 0ee0 */ "\x5a\xe8\x00\xab\xce\x38\x03\x8e\x64\xe2\xf5\x00\x28\x26\x00\xb2" //Z....8..d...(&.. |
// /* 0ef0 */ "\x78\x15\x85\x0c\xd7\xc0\x7f\x00\x30\xdc\x78\x00\x73\x10\xec\xd7" //x.......0.x.s... |
// /* 0f00 */ "\xd6\x79\x4d\x40\x03\xf6\xac\x1e\x80\x01\xaa\xf3\x26\xc5\x4c\x04" //.yM@........&.L. |
// /* 0f10 */ "\xfb\x00\x06\xd6\x26\xa1\x78\x91\xe4\xd7\x90\x63\x15\x22\x6b\xe3" //....&.x....c."k. |
// /* 0f20 */ "\xc8\x0d\xc0\x09\xc0\x2c\x1e\xf6\xa0\x08\x78\xcd\x8a\xa4\x30\xc4" //.....,....x...0. |
// /* 0f30 */ "\x8d\xf3\x62\x04\xc3\x4b\xf0\x3b\x03\x4e\x86\x01\xd9\xf0\xd7\x50" //..b..K.;.N.....P |
// /* 0f40 */ "\x72\x04\x57\x25\x90\x5d\xd8\xbe\x50\x6e\x03\x67\x9e\xb2\x7c\x80" //r.W%.]..Pn.g..|. |
// /* 0f50 */ "\xcc\x08\x3e\x09\x43\xaf\x32\xfc\xa0\xc4\x09\xb6\x18\xc3\x6f\x66" //..>.C.2.......of |
// /* 0f60 */ "\xf9\x41\x78\x10\x57\xe6\x33\xfc\xa0\xb4\x06\xcd\x3d\x69\xf9\x01" //.Ax.W.3.....=i.. |
// /* 0f70 */ "\x4f\xcc\x91\xd5\x9a\xbe\x50\x4e\x04\x9d\x0c\x21\xb3\xb5\xfc\xa0" //O.....PN...!.... |
// /* 0f80 */ "\x94\x0a\x5b\x14\x80\x5d\xdb\x3e\x50\x46\x04\x55\x25\xa0\x5f\xdb" //..[..].>PF.U%._. |
// /* 0f90 */ "\x6c\x1e\x49\x62\x0d\x4b\xa0\x00\x60\x29\x84\xb2\xac\xdf\x60\xbf" //l.Ib.K..`)....`. |
// /* 0fa0 */ "\xb0\x07\xe1\xd8\x35\x76\xff\x0f\xbb\xd3\xdb\x82\x31\x08\x55\x61" //....5v......1.Ua |
// /* 0fb0 */ "\x5c\x00\x10\x42\x10\x0d\x36\xdf\x85\xd2\xe7\x0b\xdd\xc3\x9f\xb1" //...B..6......... |
// /* 0fc0 */ "\x41\x7e\xa3\x3a\x7c\x86\x1d\x7e\x9f\x90\xc1\x95\xf1\x83\x30\x40" //A~.:|..~......0@ |
// /* 0fd0 */ "\x00\xf8\x02\x35\x7b\xaf\x61\x78\x98\x06\xc0\x21\x45\xdb\x7e\x04" //...5{.ax...!E.~. |
// /* 0fe0 */ "\x28\x80\x5f\xa8\x5d\xb7\xbc\xfc\xa8\xc0\x21\xa7\xaf\x90\x04\xfd" //(._.].....!..... |
// /* 0ff0 */ "\xc7\xbf\x90\x03\xff\xc7\xcf\x90\xc3\xbb\xd0\xfb\xf2\x00\x3e\x1e" //..............>. |
// /* 1000 */ "\x3f\x7c\x86\x10\xb6\x87\xff\x91\x0c\x00\x1f\x19\x81\x87\xe4\xf8" //?|.............. |
// /* 1010 */ "\x00\x0f\x81\x23\x81\x45\x80\x01\x1f\xe0\x3b\x46\x21\x3b\x10\xf0" //...#.E....;F!;.. |
// /* 1020 */ "\xf6\x9e\x37\x65\xdb\x7f\x3c\xd8\x37\xc3\x69\xb0\x39\x04\x0f\x82" //..7e..<.7.i.9... |
// /* 1030 */ "\x14\xc9\x60\x75\x6c\x38\x40\x19\xf9\x66\x89\x6d\x0a\xbd\x20\xbb" //..`ul8@..f.m.. . |
// /* 1040 */ "\xb1\xfa\xe0\x2f\x03\x0a\x92\xd0\xeb\xd4\x0b\xff\xbd\x20\x52\x07" //.../......... R. |
// /* 1050 */ "\x0c\x8a\x22\x53\xa0\x17\x7f\x77\x40\x8c\x0c\x3e\x09\x27\x9a\x90" //.."S...w@..>.'.. |
// /* 1060 */ "\xd9\xfd\xb9\x01\xf0\x3a\x5c\x72\x47\x56\xa0\x5f\xdb\xbe\x60\x33" //.....:.rGV._..`3 |
// /* 1070 */ "\x82\x3a\xcd\x3d\x60\xb7\xb8\xfc\xc0\x54\x0e\x59\x14\xfb\x10\xe7" //.:.=`....T.Y.... |
// /* 1080 */ "\x60\xbf\xf3\xa3\x60\x06\x68\xe6\x0c\xe3\x3e\xc1\xd1\x33\x89\xc0" //`...`.h...>..3.. |
// /* 1090 */ "\x96\xe9\xe9\x15\x9d\xdb\xdf\xec\x03\xb4\x81\x44\x2e\xf0\x2b\xbb" //...........D..+. |
// /* 10a0 */ "\xc7\xf4\x01\xc0\xef\xd7\xf6\xbb\x7c\x82\xee\xf5\xfd\x11\x2c\x56" //........|.....,V |
// /* 10b0 */ "\xb3\x7c\x2f\x22\x07\x6f\x8e\x41\x3c\x16\x7c\xfa\xef\x42\x46\x2b" //.|/".o.A<.|..BF+ |
// /* 10c0 */ "\x34\x90\xb8\x10\x84\x0a\x1b\xe2\x23\xfd\x82\xfe\x3b\xc1\xcd\x03" //4.......#...;... |
// /* 10d0 */ "\xab\x30\x00\xd8\x2f\xe3\x70\x32\xe8\x22\x25\x3a\x81\x7f\x60\x02" //.0../.p2."%:..`. |
// /* 10e0 */ "\xb0\x5f\xc6\x7c\xca\x05\xa3\x48\x2e\xec\x00\x96\x0b\xf8\xbf\xcc" //._.|...H........ |
// /* 10f0 */ "\x51\xa7\xb0\x0b\xbb\x00\x35\x83\x01\x1d\x92\x65\xac\x16\xf6\x00" //Q.....5....e.... |
// /* 1100 */ "\x8b\x06\x02\x30\x5a\xe3\x84\x36\x76\x00\xab\x05\xfc\x4b\xc0\x4a" //...0Z..6v....K.J |
// /* 1110 */ "\x1d\x79\x80\x32\xc1\x7f\x10\xfd\x4b\x34\xf7\xc0\x40\xdb\x05\xfc" //.y.2....K4..@... |
// /* 1120 */ "\x3e\x05\x6a\x8e\x20\x5b\xd8\x03\xec\x17\xf0\xd8\x11\x74\x13\xc4" //>.j. [.......t.. |
// /* 1130 */ "\x41\x1b\x05\xfc\x32\x04\xd1\x2d\xf0\xa0\x4a\xc1\x7f\x0a\xe2\x1e" //A...2..-..J..... |
// /* 1140 */ "\xb1\x57\x98\x05\x2c\x17\xf0\x8f\xe9\x80\xad\x82\xfe\x0f\x02\xa6" //.W..,........... |
// /* 1150 */ "\x47\x18\x6d\xec\x02\xf6\x0b\xf8\x34\x04\x1a\x8c\xc0\x33\x60\xbf" //G.m.....4....3`. |
// /* 1160 */ "\x82\x40\x9b\xa1\x80\x36\x76\x01\xab\x05\xfc\x0e\x04\xa5\xe9\xd3" //.@...6v......... |
// /* 1170 */ "\x00\xdd\x82\xff\x03\x10\x82\x4e\x6a\xd2\x9b\xbb\x00\xed\x82\xff" //.......Nj....... |
// /* 1180 */ "\x02\x96\x45\x24\x37\x7b\x9b\xf6\x1d\xa7\x51\x1b\x82\x29\x0d\xa1" //..E$7{....Q..).. |
// /* 1190 */ "\x14\x66\xe0\x88\x11\x65\x9e\x80\xf7\x44\x40\x86\x50\xd8\x21\x94" //.f...e...D@.P.!. |
// /* 11a0 */ "\x38\x04\x52\x89\x20\x8a\x50\xe8\x11\xc8\x09\xad\x9e\x84\x32\x01" //8.R. .P.......2. |
// /* 11b0 */ "\x01\x86\xcd\x68\x54\x08\xe7\xd2\x88\x04\x53\xef\x3f\x24\x10\x41" //...hT.....S.?$.A |
// /* 11c0 */ "\x28\x60\x10\x48\x08\x04\x13\x02\xc1\x20\x31\xbb\xbe\x0e\xfa\x72" //(`.H..... 1....r |
// /* 11d0 */ "\xf7\x50\x81\x80\x30\x0a\xcb\x07\x38\xc4\xca\x03\x3d\xe8\x50\xe6" //.P..0...8...=.P. |
// /* 11e0 */ "\xe8\xb8\x5b\x7a\x6c\xc9\xf8\x00\x1a\x2f\x2c\xdc\x50\xf1\x74\xe3" //..[zl..../,.P.t. |
// /* 11f0 */ "\x83\xf1\x12\x9c\x83\x6f\xa0\x79\x7d\x01\x21\xba\xd0\x00\x80\x2f" //.....o.y}.!..../ |
// /* 1200 */ "\x1e\xba\x80\x0b\x04\x04\x06\xeb\x70\x7f\x01\x80\xd8\x6e\x97\x09" //........p....n.. |
// /* 1210 */ "\xf8\x0c\x06\x83\x74\xb8\x54\x81\xa8\x56\x07\xba\x25\x01\xee\x87" //....t.T..V..%... |
// /* 1220 */ "\x20\x73\xa0\x0a\x40\x1c\xe0\x20\x38\x89\x54\x01\x18\xb9\xe2\xb0" // s..@.. 8.T..... |
// /* 1230 */ "\xd6\x03\xe2\x9c\x27\xc6\x2e\xf0\xc6\x25\x80\x08\x20\x1f\x79\x78" //....'....%.. .yx |
// /* 1240 */ "\x80\x91\x5b\x28\x1e\xc1\x61\x68\xb0\x0d\x9e\xcb\x3d\x86\x45\x39" //..[(..ah....=.E9 |
// /* 1250 */ "\x67\x2c\x17\xfb\x80\x00\x5f\xdc\x46\x20\x36\x26\x1a\x00\xed\x02" //g,...._.F 6&.... |
// /* 1260 */ "\x39\xe0\x1c\x50\x40\x00\xea\x5c\xb5\xb1\xa8\x00\xa1\x00\x71\x59" //9..P@.........qY |
// /* 1270 */ "\x50\x01\xf8\xb4\x38\x57\xd1\x00\x0f\x17\x1b\x21\x82\x20\x5b\xc9" //P...8W.....!. [. |
// /* 1280 */ "\x28\xd2\xb8\xa7\x17\x78\xe2\xc6\x82\x30\x5b\xd1\x29\xd4\xb8\xe7" //(....x...0[.)... |
// /* 1290 */ "\xce\xb8\x1c\x02\xee\xc7\xf3\x98\xb1\xf5\xf3\x08\x16\xfb\x2c\xf5" //..............,. |
// /* 12a0 */ "\x36\x19\x8b\x51\x9f\x99\x40\xbf\xd0\xab\xc5\x12\x5f\xcd\x83\x07" //6..Q..@....._... |
// /* 12b0 */ "\x80\x8d\x9f\x69\xf3\x20\x06\xce\xd1\x2d\xfb\x0f\xcd\x10\x39\x05" //...i. ...-....9. |
// /* 12c0 */ "\xdd\x12\x9d\x85\xdd\xdf\x32\x20\xd4\x0b\xfd\x8e\xbd\x2f\x9a\x8e" //......2 ...../.. |
// /* 12d0 */ "\x71\x77\xdb\x02\x88\x15\x65\xbc\x5a\x50\x26\x3b\x7b\x95\xbf\x8b" //qw....e.ZP&;{... |
// /* 12e0 */ "\xd4\x71\x69\x40\xd8\x6d\xe9\xd6\xfb\xf6\x04\x55\x7f\x67\x86\x80" //.qi@.m.....U.g.. |
// /* 12f0 */ "\xd4\x69\x86\x17\x2b\x73\x6f\x61\x61\x78\xc5\x47\x12\xfd\xf6\x12" //.i..+soaax.G.... |
// /* 1300 */ "\x0b\xb9\x25\x18\xba\x08\x77\x50\xc2\xc6\xb1\x88\x52\x82\x10\x46" //..%...wP....R..F |
// /* 1310 */ "\x00\x0f\xac\xa0\x5f\xc9\x68\xd8\x5f\x25\xfe\xa6\x41\x77\xb2\xcf" //...._.h._%..Aw.. |
// /* 1320 */ "\x7c\x91\x84\x02\xef\x26\x9a\xfc\xcc\x10\x2d\xe8\xfe\x60\xc2\x04" //|....&....-..`.. |
// /* 1330 */ "\x43\x67\xc3\xed\x81\xef\x95\x14\x2a\xf7\x00\xe0\xf4\x13\x9a\x8a" //Cg......*....... |
// /* 1340 */ "\xfe\xc9\x4e\xc2\xfe\x2f\xbf\x1e\x03\x41\xff\xbe\x10\x20\x1b\x3c" //..N../...A... .< |
// /* 1350 */ "\xaf\xf0\xe0\x49\x46\xfa\xb8\x30\x5b\xc2\x64\xbe\x00\xa9\x15\x59" //...IF..0[.d....Y |
// /* 1360 */ "\x3b\xb2\xca\x07\x60\xbf\xff\x48\xfa\x74\x03\x67\x86\xff\x27\xd3" //;...`..H.t.g..'. |
// /* 1370 */ "\x50\x2f\xff\x4f\x09\x15\x5b\xc3\x6f\xa7\x10\x0b\xb9\xa6\x25\xbe" //P/.O..[.o.....%. |
// /* 1380 */ "\x7d\x34\x06\x17\xc4\x39\xf4\x4c\x76\xf6\xe8\x63\x00\xff\xd0\x48" //}4...9.Lv..c...H |
// /* 1390 */ "\x2e\xf7\x30\x0e\x2f\x6e\x11\x71\xcf\x3d\x40\x02\x88\x88\x50\x07" //..0./n.q.=@...P. |
// /* 13a0 */ "\x48\x18\xe0\x2e\xd4\xea\x00\x14\x38\x40\x02\x9b\x01\x9c\xf7\xed" //H.......8@...... |
// /* 13b0 */ "\x73\x7b\x5c\x2a\x5c\x4f\xa5\x0b\x87\x33\x85\x2e\x25\x80\x28\x78" //s{.*.O...3..%.(x |
// /* 13c0 */ "\xa8\x69\xd7\x23\x0e\x98\xb1\x70\xe9\x76\xe9\x64\xeb\x83\x18\x55" //.i.#...p.v.d...U |
// /* 13d0 */ "\xca\xfa\xdf\x46\x2a\x6e\x62\xa7\x7a\xc0\xb4\x2e\x96\x51\x20\x04" //...F*nb.z....Q . |
// /* 13e0 */ "\x80\xa4\xe0\x05\xd7\x91\x8c\x94\xef\x4d\x3c\xc1\x0c\x36\xf9\x6f" //.........M<..6.o |
// /* 13f0 */ "\x9f\x30\xfb\x6f\x34\xce\x20\x46\x8f\xa2\xb1\x57\xbd\x07\x6c\x16" //.0.o4. F...W..l. |
// /* 1400 */ "\xff\x68\xc7\xc9\x48\x2e\xe8\xff\x8e\xa0\x40\x9e\xd9\x8f\xa7\x10" //.h..H.....@..... |
// /* 1410 */ "\x3a\xb7\xc9\xb0\x1b\x3f\xee\xc7\xd9\xb8\xb8\x61\x7c\x25\x9c\xe7" //:....?.....a|%.. |
// /* 1420 */ "\x11\xae\x4b\x7b\x8d\xbe\x04\xe7\x6f\xae\xdf\xd8\x18\x7c\xe6\x55" //..K{....o....|.U |
// /* 1430 */ "\x96\xf4\xa1\x79\x56\x0f\x7a\x4f\x3a\x23\x3b\x9b\xbb\xdb\x5f\x7a" //...yV.zO:#;..._z |
// /* 1440 */ "\x1a\xf8\xec\x01\xd5\x18\x06\x39\x88\xe0\x23\xc1\xae\x30\xf1\xdf" //.......9..#..0.. |
// /* 1450 */ "\x3e\x3e\x4c\xfd\x28\xfc\x4c\x04\x07\x7f\xa6\x3e\x3b\xfb\xdf\x81" //>>L.(.L....>;... |
// /* 1460 */ "\x6f\xc2\x77\xd4\x0d\xdf\xa2\x4f\xb8\x00\xc2\x18\x00"             //o.w....O..... |
// Sent dumped on RDP Client (5) 5229 bytes |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](30) used=141 free=16137 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=68) |
// front::draw:draw_tile((768, 528, 64, 64) (576, 384, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](8208) used=147 free=16131 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](30) used=277 free=16001 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,528,64,64) rop=cc srcx=0 srcy=0 cache_idx=69) |
// front::draw:draw_tile((192, 592, 64, 32) (0, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](4112) used=283 free=15995 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](30) used=355 free=15923 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(192,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=70) |
// front::draw:draw_tile((256, 592, 64, 32) (64, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[6](4112) used=366 free=15912 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[7](30) used=449 free=15829 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(256,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=71) |
// front::draw:draw_tile((320, 592, 64, 32) (128, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[8](4112) used=455 free=15823 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[9](30) used=514 free=15764 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(320,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=72) |
// front::draw:draw_tile((384, 592, 64, 32) (192, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[10](4112) used=520 free=15758 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[11](30) used=617 free=15661 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(384,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=73) |
// front::draw:draw_tile((448, 592, 64, 32) (256, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[12](4112) used=623 free=15655 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[13](30) used=881 free=15397 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(448,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=74) |
// front::draw:draw_tile((512, 592, 64, 32) (320, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[14](4112) used=887 free=15391 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[15](30) used=1155 free=15123 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(512,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=75) |
// front::draw:draw_tile((576, 592, 64, 32) (384, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[16](4112) used=1161 free=15117 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[17](30) used=1262 free=15016 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(576,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=76) |
// front::draw:draw_tile((640, 592, 64, 32) (448, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[18](4112) used=1268 free=15010 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[19](30) used=1321 free=14957 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(640,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=77) |
// front::draw:draw_tile((704, 592, 64, 32) (512, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[20](4112) used=1327 free=14951 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[21](30) used=1411 free=14867 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(704,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=78) |
// front::draw:draw_tile((768, 592, 64, 32) (576, 448, 64, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[22](4112) used=1417 free=14861 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[23](30) used=1498 free=14780 |
// order(13 clip(0,0,1,1)):memblt(cache_id=2 rect(768,592,64,32) rop=cc srcx=0 srcy=0 cache_idx=79) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[24](32) used=1504 free=14774 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=200 starty=1198 endx=200 endy=145 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[25](32) used=1532 free=14746 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=200 starty=145 endx=200 endy=1198 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[26](32) used=1538 free=14740 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=201 starty=1198 endx=200 endy=145 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[27](32) used=1546 free=14732 |
// order(9 clip(200,145,1,110)):lineto(back_mode=01 startx=200 starty=145 endx=201 endy=1198 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[28](32) used=1556 free=14722 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=1198 starty=200 endx=145 endy=200 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[29](32) used=1571 free=14707 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=145 starty=200 endx=1198 endy=200 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[30](32) used=1577 free=14701 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=1198 starty=201 endx=145 endy=200 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[31](32) used=1585 free=14693 |
// order(9 clip(145,200,110,1)):lineto(back_mode=01 startx=145 starty=200 endx=1198 endy=201 rop2=13 back_color=000000pen.style=0 pen.width=1 pen.color=00f800  |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[32](82) used=1595 free=14683 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[33](66) used=1661 free=14617 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[34](66) used=1711 free=14567 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[35](66) used=1761 free=14517 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[36](66) used=1811 free=14467 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[37](20) used=1861 free=14417 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[38](297) used=1881 free=14397 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[39](66) used=1931 free=14347 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[40](66) used=1981 free=14297 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[41](66) used=2031 free=14247 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[42](297) used=2081 free=14197 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[43](82) used=2113 free=14165 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[44](66) used=2179 free=14099 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[45](66) used=2229 free=14049 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[46](297) used=2279 free=13999 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[47](82) used=2311 free=13967 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[48](66) used=2377 free=13901 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[49](66) used=2427 free=13851 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[50](297) used=2477 free=13801 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[51](66) used=2509 free=13769 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[52](66) used=2559 free=13719 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[53](66) used=2609 free=13669 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[54](297) used=2659 free=13619 |
// Widget_load: image file [./tests/fixtures/xrdp24b-redemption.png] is PNG file |
// front::draw:draw_tile((738, 613, 64, 64) (0, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[55](8208) used=2694 free=13584 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[56](30) used=3172 free=13106 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(738,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=80) |
// front::draw:draw_tile((802, 613, 64, 64) (64, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[57](8208) used=3181 free=13097 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[58](30) used=3892 free=12386 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(802,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=81) |
// front::draw:draw_tile((866, 613, 64, 64) (128, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[59](8208) used=3898 free=12380 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[60](30) used=4669 free=11609 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(866,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=82) |
// front::draw:draw_tile((930, 613, 64, 64) (192, 0, 64, 64)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[61](8208) used=4675 free=11603 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[62](30) used=5357 free=10921 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(930,613,64,64) rop=cc srcx=0 srcy=0 cache_idx=83) |
// front::draw:draw_tile((738, 677, 64, 61) (0, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[63](7824) used=5363 free=10915 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[64](30) used=6302 free=9976 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(738,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=84) |
// front::draw:draw_tile((802, 677, 64, 61) (64, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[65](7824) used=6313 free=9965 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[66](30) used=7625 free=8653 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(802,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=85) |
// front::draw:draw_tile((866, 677, 64, 61) (128, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[67](7824) used=7631 free=8647 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[68](30) used=9027 free=7251 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(866,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=86) |
// front::draw:draw_tile((930, 677, 64, 61) (192, 64, 64, 61)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[69](7824) used=9033 free=7245 |
// GraphicsUpdatePDU::flush_orders: order_count=69 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 6453 bytes |
// /* 0000 */ "\x00\x99\x35\x80\x21\x2e\x19\x45\x00\x03\x7e\xe4\x53\x8b\xe0\x02" //..5.!..E..~.S... |
// /* 0010 */ "\x26\x00\x9a\xcf\xb4\x6e\xfd\xa9\xe3\x80\x92\xa1\x81\x52\x58\xab" //&....n.......RX. |
// /* 0020 */ "\xfb\x83\x80\xe2\x87\xc5\x8d\x82\x14\x26\x5f\x4d\xed\x27\x10\x17" //.........&_M.'.. |
// /* 0030 */ "\xb9\x25\x00\x14\x85\xd3\xb3\xe3\xb1\x44\xe0\x0e\x69\x93\x8b\xe0" //.%.......D..i... |
// /* 0040 */ "\x0e\x69\xa0\x5c\x31\x55\x7b\xb4\x63\xc0\x80\x01\xcc\x46\xe1\x5d" //.i..1U{.c....F.] |
// /* 0050 */ "\x66\x91\x28\xa5\xc2\xf9\xda\x3e\x51\x00\x00\xf0\x99\x0b\xca\x36" //f.(....>Q......6 |
// /* 0060 */ "\xe6\x00\x8a\x01\xde\x49\xed\x67\x91\x1d\x49\xe7\x93\xfc\x60\x02" //.....I.g..I...`. |
// /* 0070 */ "\x28\x00\x02\xc5\x5e\x5c\xd8\xcf\x95\x4b\x21\x74\xa8\x01\x00\x1d" //(...^....K!t.... |
// /* 0080 */ "\x7d\x96\x15\x0b\x91\x0a\x5d\x03\x15\x66\x98\x31\x5a\xe5\xe0\x03" //}.....]..f.1Z... |
// /* 0090 */ "\x66\x09\xfc\x8f\x1f\xb0\x50\x73\x00\x1c\x46\x09\xfc\x8e\xc4\x4c" //f.....Ps..F....L |
// /* 00a0 */ "\x3a\x45\x9f\x71\x7a\xf6\xc8\xef\xc9\x16\x40\x20\x72\x00\x8d\x88" //:E.qz.....@ r... |
// /* 00b0 */ "\xe0\x18\xac\xf9\x83\x91\xd7\x0c\x56\x9c\xc5\x69\xb0\xc0\xdd\x8c" //........V..i.... |
// /* 00c0 */ "\xf8\xbc\x58\x00\x28\x08\xb7\x69\xf2\x80\x11\x07\x81\x00\x68\xde" //..X.(..i......h. |
// /* 00d0 */ "\x13\xc5\x10\x01\x1c\x00\xe3\x03\xee\x3a\x10\xa5\x4a\x44\xc0\x17" //.........:..JD.. |
// /* 00e0 */ "\x8c\x58\x69\x18\xb1\x1e\x31\x63\xb4\xe2\x84\xc9\xc3\x3d\x8c\x10" //.Xi...1c.....=.. |
// /* 00f0 */ "\x5e\xe0\x01\x58\xce\x67\xa2\x01\x87\x69\xe5\x1f\x8e\x43\xc3\x38" //^..X.g...i...C.8 |
// /* 0100 */ "\x96\x00\x24\x61\xb8\xd0\x00\x06\x2d\x22\x62\xd2\x98\xe0\xbb\x18" //..$a....-"b..... |
// /* 0110 */ "\xcd\x8b\xad\x8f\xc0\x32\x90\x00\x06\xa9\xe0\x1c\x54\x80\x12\x7b" //.....2......T..{ |
// /* 0120 */ "\x64\x0d\x24\xa4\x00\xbf\x14\x30\x01\x60\xc6\x38\x7a\x78\x42\xbb" //d.$....0.`.8zxB. |
// /* 0130 */ "\x20\xe7\xe1\x96\x2e\xaa\x8f\x60\xc6\x06\xce\x76\x0f\xcb\xd8\x0f" // ......`...v.... |
// /* 0140 */ "\x6d\x54\x6a\xac\xf3\xe2\x73\xff\x89\xe5\x24\x00\x0e\xeb\xe2\x7c" //mTj...s...$....| |
// /* 0150 */ "\x6e\x60\x09\x40\x01\x24\x00\xde\xbe\x08\x00\x58\x31\x88\x85\x78" //n`.@.$.....X1..x |
// /* 0160 */ "\x72\x29\x3c\x01\xeb\xd4\x91\xec\x5b\xc1\x28\xcc\x60\x6c\xe0\x1d" //r)<.....[.(.`l.. |
// /* 0170 */ "\x04\x18\xc5\x29\x84\x9c\x9e\x10\x33\x81\xc2\x69\xf0\x34\xd8\x5d" //...)....3..i.4.] |
// /* 0180 */ "\x2e\x34\x93\x22\xb3\xcc\x64\xd3\x98\x34\xe5\x16\x82\x49\x49\xa1" //.4."..d..4...II. |
// /* 0190 */ "\x8a\x26\xd0\xae\x69\x94\x2a\x9a\x60\x00\x2c\x28\xbe\x09\x4b\x8e" //.&..i.*.`.,(..K. |
// /* 01a0 */ "\x34\x4b\x41\xa8\xd0\x3a\xb5\x8a\xbc\x83\x6f\x80\x5d\xe4\x96\xe2" //4KA..:....o.]... |
// /* 01b0 */ "\x0b\x83\x88\x05\xe0\x7a\x0e\x9d\x0c\x2a\x92\xd9\xa7\xb0\x3a\xb1" //.....z...*....:. |
// /* 01c0 */ "\x0d\x9e\x01\x77\xa0\x5f\xda\x39\x4d\xa4\x56\xe7\x20\x0b\xc0\xc4" //...w._.9M.V. ... |
// /* 01d0 */ "\x18\xbe\x08\x15\x25\xa3\x7d\x99\x90\x5d\xdb\xfe\xb8\x8a\xdc\x00" //....%.}..]...... |
// /* 01e0 */ "\x0b\x05\x86\xc5\x24\xf3\x56\x4a\x70\x0f\xec\x3a\xfd\x34\x8a\xeb" //....$.VJp..:.4.. |
// /* 01f0 */ "\x84\x11\x54\xb8\xe5\x9a\x7b\x62\xef\x22\xe8\xd8\x80\xa0\xdd\x47" //..T...{b.".....G |
// /* 0200 */ "\x20\xb7\xeb\xfa\x7d\x38\x96\x8c\x03\x67\xa0\x5f\xfa\x2d\x06\x60" // ...}8...g._.-.` |
// /* 0210 */ "\xa1\xf0\x42\xa9\x2b\x25\x3a\x05\xe1\xc7\x6f\x58\xeb\x88\x15\x82" //..B.+%:...oX.... |
// /* 0220 */ "\x27\x43\x28\xd3\xd0\x2f\xc0\xed\xdd\x02\x7e\xc8\x84\xa0\x00\x3c" //'C(../....~....< |
// /* 0230 */ "\x00\x36\xf6\x45\xdf\x40\x12\xf0\x4a\xe3\x15\x83\x81\x82\x40\x2c" //.6.E.@..J.....@, |
// /* 0240 */ "\x18\xc4\x3a\xb9\x09\x4f\xae\x23\x85\xee\x1c\x1e\x23\x84\x0c\xfb" //..:..O.#....#... |
// /* 0250 */ "\x79\x40\xc2\x72\xce\x18\x13\xc0\x92\x78\x44\xc7\xb4\x60\xc0\x0e" //y@.r.....xD..`.. |
// /* 0260 */ "\x03\x43\xa4\x7a\xfa\x05\x13\x61\x64\x94\x14\x5a\x0b\x2c\xe6\x4d" //.C.z...ad..Z.,.M |
// /* 0270 */ "\x31\xa3\xcc\x42\x25\x49\x32\x29\x54\x68\xb2\x17\x0e\x85\xd3\xe0" //1..B%I2)Th...... |
// /* 0280 */ "\x78\x79\xcc\x01\x78\x85\xf0\xd7\x5c\x24\xb6\xc4\x1b\x7d\x0a\xbc" //xy..x....$...}.. |
// /* 0290 */ "\xc7\x4e\x05\xa3\x33\xcb\x69\x51\xc4\xe8\x67\x36\xe0\xab\x17\x61" //.N..3.iQ..g6...a |
// /* 02a0 */ "\xf9\x67\xb0\x5f\xe1\x1d\xc4\x96\xf0\x1b\x3c\x0e\xac\x0b\x46\x83" //.g._......<...F. |
// /* 02b0 */ "\xcd\x69\x71\xce\x70\x21\x8f\xac\x83\xf9\xf9\xfd\x04\x94\x64\x89" //.iq.p!........d. |
// /* 02c0 */ "\x6b\x67\xf0\x81\x9c\x01\x06\x83\x48\x2e\xe4\x3f\xa1\x46\x9e\xda" //kg......H..?.F.. |
// /* 02d0 */ "\xa3\x9d\x4d\x83\x5f\x49\xd7\xf9\x23\xab\x41\xe6\xbd\x6d\x1d\x96" //..M._I..#.A..m.. |
// /* 02e0 */ "\xa3\xe7\x24\x5f\x78\x23\x46\xf9\xd5\x00\xbb\xa1\xdb\xe8\xdd\x9d" //..$_x#F......... |
// /* 02f0 */ "\xb0\xea\xa8\xa1\x57\x9a\x25\xb5\x00\x33\xe0\x0c\x07\x35\x29\x60" //....W.%..3...5)` |
// /* 0300 */ "\x00\x6b\x1e\xd2\xc5\x58\x01\x33\x05\x70\x38\xa0\xc5\x40\x04\xd2" //.k...X.3.p8..@.. |
// /* 0310 */ "\x4a\x03\xed\x67\x13\x87\x13\xf7\x14\x49\xe2\x83\x3c\x4b\x22\xa1" //J..g.....I..<K". |
// /* 0320 */ "\x83\x6b\xe7\x8a\x26\x7d\x83\xa6\x81\x8c\x2d\x31\xe2\x8b\xc4\xd1" //.k..&}....-1.... |
// /* 0330 */ "\xc5\x16\x53\x00\x00\xca\x3c\x57\x89\x30\x02\x6f\x1e\xb7\x1e\xf5" //..S...<W.0.o.... |
// /* 0340 */ "\x83\x8f\x64\xc0\x3c\x36\xe0\x56\xe2\x83\x1d\x39\x5c\x4d\x6b\x8f" //..d.<6.V...9.Mk. |
// /* 0350 */ "\x3c\xb0\x7f\xb9\x4d\x00\x03\x47\xff\x78\xa2\x80\x27\x00\x13\x70" //<...M..G.x..'..p |
// /* 0360 */ "\x78\x72\x81\x93\x80\x0b\x37\x28\x19\xc0\x45\xce\x4d\x2e\x2f\x78" //xr....7(..E.M./x |
// /* 0370 */ "\xf8\x31\xc2\x0f\x10\x5f\x98\xe7\xf9\x3c\xa0\x71\xe5\x21\x1c\xa0" //.1..._...<.q.!.. |
// /* 0380 */ "\xad\x38\x00\x0d\x13\xc3\x58\xa1\x00\x27\x80\x61\x2a\xf7\xb0\x86" //.8....X..'.a*... |
// /* 0390 */ "\x00\x16\xee\x65\x71\xeb\x76\x04\x81\x8c\x60\x25\xe6\x78\x5e\x93" //...eq.v...`%.x^. |
// /* 03a0 */ "\xc0\x03\x42\x57\xc0\xc3\xe9\x00\x11\x10\x0a\x40\x05\xf8\x00\x07" //..BW.......@.... |
// /* 03b0 */ "\xe3\x25\xc0\x9f\x3a\x03\x40\x40\x2f\x00\x0c\xa2\x91\x1f\x9e\x65" //.%..:.@@/......e |
// /* 03c0 */ "\x16\xa4\xfc\x64\x44\x01\x94\x7b\xec\xc7\xcc\x84\x51\xeb\x85\x24" //...dD..{....Q..$ |
// /* 03d0 */ "\xdc\xda\x95\xfa\xaa\x90\x00\xca\x15\xf9\xe4\x3a\x5c\x09\x49\xfa" //...........:..I. |
// /* 03e0 */ "\x06\x51\xef\xa9\x1f\x32\x00\xcd\x71\x8b\x80\x0f\x07\x51\x80\x2f" //.Q...2..q....Q./ |
// /* 03f0 */ "\x97\xfb\x85\xfc\x63\x16\x24\xbe\x0e\x38\x38\xed\xf0\xc0\x88\x80" //....c.$..88..... |
// /* 0400 */ "\x00\x92\x4f\x87\x00\x52\x8f\x87\x00\x22\x1f\x0e\x3e\x0e\x80\x64" //..O..R..."..>..d |
// /* 0410 */ "\xbe\x02\xa0\x1f\x01\x48\x87\x80\xa4\x13\xe1\x58\x2d\x00\x18\x80" //.....H.....X-... |
// /* 0420 */ "\x13\xe1\x63\xf6\x5f\x06\x7f\x96\x00\x5f\xcb\x3f\xe9\x1f\x06\x3f" //..c._...._.?...? |
// /* 0430 */ "\xb4\x7c\x2c\xbe\x0e\x1f\xcb\x00\x3f\xe5\xaf\xee\xa0\xff\x88\xf8" //.|,.....?....... |
// /* 0440 */ "\x58\x60\xd4\xc7\xc1\xbf\xe5\x80\x27\xf2\xdf\xe0\xc0\x1d\x00\x19" //X`......'....... |
// /* 0450 */ "\x80\x10\x80\x1e\xc0\x08\x00\x0d\xd0\x7d\xf4\x5f\x06\x40\xff\xec" //.........}._.@.. |
// /* 0460 */ "\x03\x80\x00\x84\x04\x40\x42\x25\x52\xa5\x5f\x85\x21\x23\x75\xb3" //.....@B%R._.!#u. |
// /* 0470 */ "\xf3\xd0\x70\x30\x1e\xa4\x41\xef\x84\x41\xe1\x24\xf9\x18\x40\x7e" //..p0..A..A.$..@~ |
// /* 0480 */ "\xfb\xe1\x40\xf7\xcc\x60\xd9\xd0\x08\x58\x10\x40\x18\x18\x20\x2f" //..@..`...X.@.. / |
// /* 0490 */ "\x8e\x30\x05\xf1\xc6\xe0\xf4\x0f\x61\x47\x8d\x94\x00\x44\x0f\x91" //.0......aG...D.. |
// /* 04a0 */ "\x00\x9f\x67\x0f\x35\x62\x0d\xfc\xb4\x20\xf8\x54\x07\x60\xf3\x54" //..g.5b... .T.`.T |
// /* 04b0 */ "\x7c\x28\x06\x60\x03\xb0\x7d\x87\xc1\x9f\xe5\x80\x3f\xf2\xd3\xe0" //|(.`..}.....?... |
// /* 04c0 */ "\xf6\x80\xc4\x0e\xcc\x38\x76\x0c\x80\x0f\x80\x10\xbe\x35\xa1\x00" //.....8v......5.. |
// /* 04d0 */ "\x05\x02\x80\x02\x04\x03\x04\x03\x84\x03\x82\x70\xc6\xc0\x23\xc2" //...........p..#. |
// /* 04e0 */ "\x53\xc3\x1b\x50\x1b\x80\x00\x10\x47\x01\xb7\xc3\x93\x8f\xe4\xf8" //S..P....G....... |
// /* 04f0 */ "\x71\xf4\x9f\x61\xf0\x74\xf2\xa6\x01\x3e\x02\x9f\x2a\x6c\x0b\x00" //q..a.t...>..*l.. |
// /* 0500 */ "\x06\xff\xcf\x85\x87\xc1\xc3\xf9\x60\x15\xfc\xb9\x38\x7c\x72\xfa" //........`...8|r. |
// /* 0510 */ "\x1a\x2c\x00\xfd\x90\x88\xa0\x0a\xdf\x1a\xd5\x80\x02\xb0\xdf\x28" //.,.............( |
// /* 0520 */ "\x28\x10\x14\x10\x20\x28\x23\xd0\xd8\x05\xf8\x4a\x7d\x0d\xa8\x3d" //(... (#....J}..= |
// /* 0530 */ "\x80\x03\x81\x93\xe1\xd7\xcc\xdf\xe0\xe9\xe5\x4c\x03\x3c\x05\x3e" //...........L.<.> |
// /* 0540 */ "\x54\xaf\x3a\x47\xc2\xe2\xf8\x38\x7f\x2c\x03\x7f\x96\x7f\x07\x0f" //T.:G...8.,...... |
// /* 0550 */ "\x3e\x47\xc2\xb6\x00\x39\x07\xd1\x7c\x19\xf4\x34\x0f\x80\x00\x2d" //>G...9..|..4...- |
// /* 0560 */ "\x70\x46\x35\x7c\x6b\x6a\x00\x0a\x0b\x00\x0c\x09\x0d\x03\x04\xe0" //pF5|kj.......... |
// /* 0570 */ "\x9c\xf0\x96\x01\xde\x12\xe3\x03\xe2\x0c\xe1\xad\x1e\x12\xdb\xf9" //................ |
// /* 0580 */ "\x60\x1f\xfc\xb9\x20\x00\xd8\x10\x39\xf0\xa0\x19\x00\x0e\x01\xf4" //`... ...9....... |
// /* 0590 */ "\x5f\x06\x7f\x96\x02\x1f\xcb\x3f\xc9\x1f\x0a\x50\x01\x20\x00\xa0" //_......?...P. .. |
// /* 05a0 */ "\x00\xd8\xe3\x0c\x09\x00\x04\x40\xfb\x2f\x83\x20\x33\x0e\x20\x4c" //.......@./. 3. L |
// /* 05b0 */ "\x7b\x05\x2d\xd8\x13\x84\xfd\xf1\xad\xfb\xcf\x34\x1c\x06\x1e\x10" //{.-........4.... |
// /* 05c0 */ "\x20\x0e\x07\x51\xc0\x50\xf8\xd3\xc0\x54\x30\xf8\xc9\x06\x91\x40" // ..Q.P...T0....@ |
// /* 05d0 */ "\x03\x61\xb4\x40\x48\x18\x03\xe0\x44\x0b\x08\x35\x02\xef\xa4\x8c" //.a.@H...D..5.... |
// /* 05e0 */ "\x09\xc0\x48\x21\x0e\x00\x00\x10\x20\x01\x04\x19\x80\xc9\x08\x9c" //..H!.... ....... |
// /* 05f0 */ "\x05\x06\x61\x81\x57\xa1\x06\x40\x31\x01\x00\x48\xf9\xca\xc0\x94" //..a.W..@1..H.... |
// /* 0600 */ "\x08\x00\x21\x06\x90\x2f\x01\x00\x20\x74\xff\x60\x02\x0f\xbd\x00" //..!../.. t.`.... |
// /* 0610 */ "\x06\x02\xf8\x29\xf8\x83\x60\x13\xfc\x8c\x3b\x52\xfe\x81\x78\x0a" //...)..`...;R..x. |
// /* 0620 */ "\x0c\xe3\xc1\x47\x0f\xa4\x40\x17\x80\x90\x44\x04\xc8\x44\xff\xc4" //...G..@...D..D.. |
// /* 0630 */ "\x58\x05\xa0\x24\x0d\x1e\x06\x50\x30\xed\xd3\xf1\x05\xbe\xf0\x4e" //X..$...P0......N |
// /* 0640 */ "\x04\x83\x68\x00\x08\xfd\x88\x07\xce\x08\x78\x52\x4a\x3e\x71\xc0" //..h.......xRJ>q. |
// /* 0650 */ "\x5b\xc2\x51\x58\xf9\x45\x8f\x88\x60\xf0\x82\x51\xf2\x10\x0f\x88" //[.QX.E..`..Q.... |
// /* 0660 */ "\x50\xf0\x83\xe4\x3e\x84\xac\x7c\xc7\xe0\x20\xd4\x3e\x61\xa3\xca" //P...>..|.. .>a.. |
// /* 0670 */ "\x83\x0f\x00\x48\x80\x97\xa2\x1e\x52\x04\x20\xda\x3c\x80\x38\x11" //...H....R. .<.8. |
// /* 0680 */ "\xf9\x51\x58\xfa\x00\x04\x1a\x47\xe8\x81\x1f\x88\x6a\x61\xb4\x07" //.QX....G....ja.. |
// /* 0690 */ "\xfa\x55\xf3\xd1\x0c\x6c\x62\x38\x41\xb0\x0c\xc0\x48\x1e\x3c\x12" //.U...lb8A...H.<. |
// /* 06a0 */ "\x9c\x7b\x28\xd0\x83\x60\x6b\xfb\xf0\x41\xeb\x08\xb0\x05\xe3\x0f" //.{(..`k..A...... |
// /* 06b0 */ "\x60\x01\xc1\x03\xc2\x0d\x41\xb7\xea\xc7\xad\xe6\x92\x83\x48\x81" //`.....A.......H. |
// /* 06c0 */ "\x20\xd4\x10\x6c\x0e\x2c\x36\x8f\x75\xbf\x29\x80\x3d\x86\xd0\x21" // ..l.,6.u.).=..! |
// /* 06d0 */ "\xff\x98\x0f\xdc\x41\x10\xf8\xb0\xd1\xf1\x5c\x10\x5f\x15\x85\x79" //....A......._..y |
// /* 06e0 */ "\xa9\x06\xb1\xf3\x08\x33\x0f\x8a\x20\x84\x7c\x58\x60\xf8\xa0\x03" //.....3.. .|X`... |
// /* 06f0 */ "\x0f\x8b\x18\x47\xb9\xf8\x22\x91\xc1\x3e\x7c\xf2\x90\x00\x04\xc0" //...G.."..>|..... |
// /* 0700 */ "\xd0\x6b\x04\x11\x8e\x01\x54\x40\xf0\x00\x09\x05\x41\xb4\x20\xd2" //.k....T@....A. . |
// /* 0710 */ "\x10\x64\x04\x0e\x00\x07\x18\x7a\xd1\xed\xf5\x00\x39\x06\x31\x06" //.d.....z....9.1. |
// /* 0720 */ "\x20\x68\x20\x60\x20\x58\x20\x48\xc1\xee\xc2\x0b\x9c\x27\x09\x56" // h ` X H.....'.V |
// /* 0730 */ "\x06\x43\x45\x80\x6c\x42\xa4\x0a\x00\x00\x73\xac\x12\x03\x8c\xe0" //.CE.lB....s..... |
// /* 0740 */ "\x09\x44\x02\x8d\xed\x32\x0d\x22\xa0\x06\x01\x80\x40\x06\xc1\x34" //.D...2."....@..4 |
// /* 0750 */ "\x00\x68\xe8\x4c\x05\xec\x24\x75\x9d\x86\xd1\x50\x03\x20\x78\x01" //.h.L..$u...P. x. |
// /* 0760 */ "\x80\xdc\x40\x1d\xfe\x90\x8f\x89\x9b\xd1\x0c\x05\x24\xc1\x9f\x29" //..@.........$..) |
// /* 0770 */ "\x66\x14\x0e\x34\xfd\x18\xfc\x80\x22\x06\x80\x18\x0a\x3f\xd1\x53" //f..4...."....?.S |
// /* 0780 */ "\xb8\xa0\xb0\x5f\xca\x40\x03\x8b\xaf\x82\xf0\x11\x30\x90\x00\x48" //..._.@......0..H |
// /* 0790 */ "\x13\x0d\xa0\x01\x23\x0a\x57\xa0\x2b\x41\x22\xd0\x15\x80\x90\x00" //....#.W.+A"..... |
// /* 07a0 */ "\x5f\xda\xa8\x00\xc0\x45\x02\x45\xa0\x51\xc0\x9e\xae\x0f\xdf\x09" //_....E.E.Q...... |
// /* 07b0 */ "\x00\x30\x1a\x7f\x88\x67\x03\xc0\x44\x13\xf8\xbb\x6a\xa1\x5e\x00" //.0...g..D...j.^. |
// /* 07c0 */ "\x42\xf9\x81\xb0\x30\xc1\xc3\x09\x71\xbe\x72\xa1\xf3\xa4\x02\xb0" //B...0...q.r..... |
// /* 07d0 */ "\x03\xec\xa4\x73\xc1\xa3\x5f\x06\xcb\x0e\x0c\x77\x2c\x7c\xe3\xd7" //...s.._....w,|.. |
// /* 07e0 */ "\xce\x90\x0e\xc9\x21\x30\x1f\x05\xc1\x17\x82\xdf\x41\xe5\x84\xbb" //....!0......A... |
// /* 07f0 */ "\xfe\x30\xa6\x8b\xe7\x47\xa7\x4d\x3f\x39\x89\xc5\xdf\x3a\x0e\x00" //.0...G.M?9...:.. |
// /* 0800 */ "\x60\x24\x9f\x39\x87\xd8\x00\xfe\x13\x3d\xf8\x14\x6f\xe7\x12\x00" //`$.9.....=..o... |
// /* 0810 */ "\x18\x0f\xc8\x0b\x40\x5f\x3e\x63\xda\x15\xeb\xda\x24\xf5\x63\xe8" //....@_>c....$.c. |
// /* 0820 */ "\x3c\x22\xf5\xd4\x42\x7e\x74\xf8\xf6\x19\xfe\x73\xd6\xef\x9c\x00" //<"..B~t....s.... |
// /* 0830 */ "\xb4\x00\xf8\xdc\x2f\xe9\xc7\xce\x82\x04\x8f\x34\xc3\xd7\x82\x8b" //..../......4.... |
// /* 0840 */ "\x21\x38\x2a\x51\xef\x70\x20\x01\x80\x0c\x04\x54\x27\xc1\xb1\xeb" //!8*Q.p ....T'... |
// /* 0850 */ "\x90\x0c\x04\x82\x31\xf4\xde\x20\x54\x3f\xa1\x1b\xe2\x21\x40\x01" //....1.. T?...!@. |
// /* 0860 */ "\x35\x00\x52\x0a\xc0\x0f\xae\x1e\xbc\x81\x58\x13\x48\x02\xc0\x4d" //5.R.......X.H..M |
// /* 0870 */ "\x40\x20\x5f\xdc\xee\x1e\xca\x80\x28\x02\x07\xb2\x6a\xe0\x00\x25" //@ _.....(...j..% |
// /* 0880 */ "\x03\x45\xc5\x95\xe5\xa0\x96\x38\xe8\x48\x45\x40\x19\x06\x01\xc0" //.E.....8.HE@.... |
// /* 0890 */ "\xbe\x8d\x82\x43\x20\xc0\x38\x96\x0c\xd0\x01\x2e\x00\x13\x09\x7a" //...C .8........z |
// /* 08a0 */ "\x09\x66\x8e\x84\x83\xf1\x0a\x61\x5b\x97\x90\xde\x91\x8a\x4a\xc0" //.f.....a[.....J. |
// /* 08b0 */ "\x4c\x0d\x67\xec\x9f\x02\x5b\x23\xa1\x20\xde\x14\x80\x82\x08\x07" //L.g...[#. ...... |
// /* 08c0 */ "\x87\x42\x61\x2c\x01\xf1\xd0\x90\x58\x17\x12\x00\xc5\x40\x23\xca" //.Ba,....X....@#. |
// /* 08d0 */ "\x60\x0f\x49\x47\x23\x45\x00\x00\x61\xab\xff\x3d\x5a\x12\x81\x71" //`.IG#E..a..=Z..q |
// /* 08e0 */ "\x2d\x04\x60\xe3\x07\xb2\x23\x19\xf0\xaa\x04\x0a\x18\x87\xa9\xe1" //-.`...#......... |
// /* 08f0 */ "\x46\x1c\x68\x71\x88\x61\xdb\x18\xf7\xb0\x00\x3b\x10\x5c\x38\x08" //F.hq.a.....;..8. |
// /* 0900 */ "\xc0\xff\x02\x48\x1f\x80\xf8\xec\x3f\xed\x37\x17\xd9\x7b\x09\xf9" //...H....?.7..{.. |
// /* 0910 */ "\x83\x6f\x8b\x1d\x4c\xc3\xfe\xa0\x7c\x56\x04\x43\x0f\xf9\xed\xf8" //.o..L...|V.C.... |
// /* 0920 */ "\x27\xdc\xc1\xff\x7d\xc6\x24\x59\x00\x0f\x43\x9f\x02\x5e\xfc\xd2" //'...}.$Y..C..^.. |
// /* 0930 */ "\x59\x09\x58\x09\x36\x09\x15\x09\x13\x01\xb8\xfa\xc1\x2c\x00\x69" //Y.X.6........,.i |
// /* 0940 */ "\xe9\xe0\x22\x00\xe5\xae\xa0\x05\xc7\x02\x6e\x75\x1c\x2b\x44\x11" //..".......nu.+D. |
// /* 0950 */ "\xc0\x03\x45\x1c\x1f\xa4\xe3\x1b\x8d\xd0\x09\x4b\x06\x20\x1f\x02" //..E........K. .. |
// /* 0960 */ "\x68\x00\x1c\x09\xd2\x41\xea\x00\xab\x08\xff\x18\xb8\x10\x80\xca" //h....A.......... |
// /* 0970 */ "\x47\x40\x03\xb8\xa2\x84\x20\x30\xe1\x4f\x92\x59\xf9\x28\x98\x9f" //G@.... 0.O.Y.(.. |
// /* 0980 */ "\xc9\x2c\x7c\x93\xc0\x57\xc9\x7d\x27\x15\x22\x08\xf8\xd4\x06\x80" //.,|..W.}'."..... |
// /* 0990 */ "\x15\x49\x80\x8b\x04\xf1\x12\x38\xf8\x0c\x8c\x3c\x35\x01\x40\x0a" //.I.....8...<5.@. |
// /* 09a0 */ "\xe7\x01\x11\xc0\x91\x18\x0a\x58\xa8\xd4\x06\x00\x16\x23\xe9\x43" //.......X.....#.C |
// /* 09b0 */ "\x97\xdc\x28\x0a\x0d\x40\x6c\x02\x82\x3c\x15\x58\xd4\x0c\x26\x35" //..(..@l..<.X..&5 |
// /* 09c0 */ "\x01\x20\x1e\x11\xf4\xc0\x4a\x02\x74\x14\x35\x02\x40\x1f\x20\xc0" //. ....J.t.5.@. . |
// /* 09d0 */ "\x61\x6b\x80\x03\x9f\xe8\x01\x0f\xbd\x30\x8f\xc0\x50\x00\x44\x3d" //ak.......0..P.D= |
// /* 09e0 */ "\xc6\x13\x80\x83\xf8\x49\x20\x0a\x0f\xf0\x21\xd3\xee\x03\x3c\x24" //.....I ...!...<$ |
// /* 09f0 */ "\xb0\x09\x87\xff\x80\xa4\x06\xe3\xe0\x42\x00\xa8\x7f\xe6\x0a\x40" //.........B.....@ |
// /* 0a00 */ "\x6e\xc2\x5e\x2a\x0f\x07\x7b\x8c\xeb\xf9\x97\xb0\x97\xbf\x01\x18" //n.^*..{......... |
// /* 0a10 */ "\x30\x99\xd0\x54\x25\xdb\xe8\x28\x9e\x04\x80\x10\xce\x04\x2e\x21" //0..T%..(.......! |
// /* 0a20 */ "\xd1\x29\x1d\x1a\x80\x80\x05\x85\xc0\x80\xb8\x69\x85\xe0\x32\xef" //.).........i..2. |
// /* 0a30 */ "\x2b\x10\x05\x02\xf8\x06\x1e\x3e\xe2\x67\xe1\x44\x80\x54\x2b\x8c" //+......>.g.D.T+. |
// /* 0a40 */ "\x29\xe7\xe7\x23\x01\x5e\x2e\x0f\x04\xfc\xe3\xd4\x74\x26\x05\x3c" //)..#.^......t&.< |
// /* 0a50 */ "\xf5\x7b\xcb\x4a\x80\x35\x03\x04\xbd\x88\x80\x05\x42\x5f\x3f\x19" //.{.J.5......B_?. |
// /* 0a60 */ "\x94\x78\x6b\xe8\x82\x80\x7d\xea\x7d\xf9\xe6\xa1\x5f\x9e\x60\x01" //.xk...}.}..._.`. |
// /* 0a70 */ "\x01\x7e\xf9\x8b\x47\x83\x23\x19\x4d\xbd\xd0\x42\xf0\x4b\x00\x01" //.~..G.#.M..B.K.. |
// /* 0a80 */ "\x80\xe0\x57\x20\x0b\x06\x17\x18\x62\xa8\x20\x14\x12\x38\x13\x80" //..W ....b. ..8.. |
// /* 0a90 */ "\x7e\x1c\x23\x5e\x13\x40\x48\x00\x78\xd0\xae\x00\x1c\xae\x62\x81" //~.#^.@H.x.....b. |
// /* 0aa0 */ "\xea\x23\x06\x00\x1c\x70\x11\x54\x00\xae\x3f\x5c\xc1\xe6\x15\x03" //.#...p.T..?..... |
// /* 0ab0 */ "\x0b\x7d\xbd\x68\xa8\x01\x7e\x88\x20\x0b\xf7\xe0\x54\x7f\x8a\x42" //.}.h..~. ...T..B |
// /* 0ac0 */ "\xa0\x07\x0b\xfa\x0a\x00\x0f\xf2\x0f\x0f\x70\x53\x54\x01\x04\x82" //..........pST... |
// /* 0ad0 */ "\x40\x60\x30\x00\x01\xa8\x13\x00\xfa\x06\x0e\xc2\x3e\x04\xa2\x80" //@`0.........>... |
// /* 0ae0 */ "\x61\x8a\xa4\x06\x40\x3d\xe2\x58\x80\x00\x8d\xf9\x2c\xd2\x01\x50" //a...@=.X....,..P |
// /* 0af0 */ "\x06\x45\xfe\xc6\x0f\x14\x28\x01\x43\x7c\x81\xd5\x16\x9f\x9e\x00" //.E....(.C|...... |
// /* 0b00 */ "\xf1\x30\x83\xe2\x3c\x4a\x08\x85\x60\x22\xf7\xdc\x79\xf8\x2b\x44" //.0..<J..`"..y.+D |
// /* 0b10 */ "\x20\x01\x14\x81\x3d\x84\xb4\x76\x6e\x00\x40\x58\x00\x5f\xd8\x47" // ...=..vn.@X._.G |
// /* 0b20 */ "\xc4\xe0\x4b\x01\x24\x80\x1c\x66\xd8\xd6\x14\xc0\x3f\xc6\x75\x72" //..K.$..f....?.ur |
// /* 0b30 */ "\xfd\xcc\x49\xb6\x21\xe3\x36\x58\x09\x67\x00\xe3\x37\x00\x02\xb8" //..I.!.6X.g..7... |
// /* 0b40 */ "\xf9\xf4\xf4\x13\x2d\x00\xe3\x41\x12\x00\xb0\x00\xae\x41\x09\x67" //....-..A.....A.g |
// /* 0b50 */ "\xe7\x70\xd8\x84\x00\xa0\x00\x78\x1b\xd8\x4d\xcb\x91\xc3\x03\xf7" //.p.....x..M..... |
// /* 0b60 */ "\x20\x3f\x58\x09\xf7\x97\x1f\x9e\xc3\xbc\x68\x09\x00\xf8\xec\x19" // ?X.......h..... |
// /* 0b70 */ "\xf3\x8c\x38\x4c\x26\x9d\xc5\xfc\x44\x00\xf9\xf5\x16\x01\x51\xdc" //..8L&...D.....Q. |
// /* 0b80 */ "\x30\xcd\x10\x18\x00\xa7\x1a\xe6\x3b\x06\x0f\xc0\x6c\x1c\x6e\x23" //0.......;...l.n# |
// /* 0b90 */ "\xb6\x53\x8e\x4c\x50\x07\xbe\x62\x00\x2b\xf1\x44\x1f\x82\x2c\x01" //.S.LP..b.+.D..,. |
// /* 0ba0 */ "\x5f\x15\xc9\x98\x3f\x02\x40\xf2\xfc\x61\x1c\xe8\x60\xfc\x50\x41" //_...?.@..a..`.PA |
// /* 0bb0 */ "\xf8\xa2\x00\x15\x40\x0b\x90\x85\xb0\x77\xbf\x71\xc9\x85\x20\x00" //....@....w.q.. . |
// /* 0bc0 */ "\x38\xef\x1c\x9c\x63\x60\x4a\x60\x14\x01\xb6\x11\xf8\x11\x00\xf9" //8...c`J`........ |
// /* 0bd0 */ "\x00\x08\x9b\x00\x67\xbc\x16\x0f\xe6\x81\x30\x8f\xc0\x3c\x64\xfa" //....g.....0..<d. |
// /* 0be0 */ "\xcc\x03\xe6\x1e\xf9\xc9\x00\xa0\x8d\x16\x02\x2d\x07\x00\x0a\x40" //...........-...@ |
// /* 0bf0 */ "\x0a\x90\x05\x30\x05\xa0\x0a\x48\x3f\x33\x0a\x6a\xb8\x18\x80\x7c" //...0...H?3.j...| |
// /* 0c00 */ "\xda\x81\xc8\x00\x40\x05\x28\x03\xcc\x00\x1e\x00\x20\x0a\xe0\x96" //....@.(..... ... |
// /* 0c10 */ "\x06\x37\x24\x48\x02\xa0\x03\xc3\xdf\x84\x40\x02\xff\xf4\x26\xc0" //.7$H......@...&. |
// /* 0c20 */ "\x16\xc0\x3e\xfb\xf8\x0c\x02\x98\x65\x16\x20\x40\x1e\x72\x0e\x78" //..>.....e. @.r.x |
// /* 0c30 */ "\x84\xc0\x01\xf3\xe7\xe2\x87\xdf\x3e\xf1\x00\x2f\xd6\xb1\xf7\x8c" //........>../.... |
// /* 0c40 */ "\x03\xe3\x7c\x35\x4c\x1c\x9f\x90\x1b\x00\x58\xdf\x82\x1e\x4a\x01" //..|5L.....X...J. |
// /* 0c50 */ "\x70\x3d\x40\x07\xb8\xd2\xc7\xe7\x7d\xa8\x90\x70\x8a\x79\x28\x07" //p=@.....}..p.y(. |
// /* 0c60 */ "\xf6\x14\x01\xee\x41\xf1\xeb\xe7\xd8\x80\x01\x4f\xcb\x14\x0c\x89" //....A......O.... |
// /* 0c70 */ "\xb8\xf8\xa1\xbe\x49\xac\x33\x33\x1c\x09\x9c\x2b\x42\xb8\x40\x2d" //....I.33...+B.@- |
// /* 0c80 */ "\xc4\xb6\x20\x03\xdf\x25\xc4\x95\xe1\xa6\x01\x35\x01\xf0\x70\x7f" //.. ..%.....5..p. |
// /* 0c90 */ "\x38\xe0\xb0\x03\xe0\x1a\x1b\x80\xf9\x7c\x07\xef\x90\xdf\xcd\x7c" //8........|.....| |
// /* 0ca0 */ "\x92\x07\xc9\x70\x43\x7e\x67\xc9\x70\x9a\x01\xf1\x4e\x7d\xb7\xc9" //...pC~g.p...N}.. |
// /* 0cb0 */ "\x8a\x07\xc9\x20\x71\xaf\x7a\xe0\x37\xc1\x32\x00\xe0\x20\x1e\x7a" //... q.z.7.2.. .z |
// /* 0cc0 */ "\x7d\xb0\x17\x81\x1e\x92\x8f\xde\x02\xf3\x28\x73\xc0\x31\xc6\x18" //}.........(s.1.. |
// /* 0cd0 */ "\x15\xec\x49\xe3\x54\x81\x00\x00\xd8\x07\x87\x78\x8f\x07\xe0\x56" //..I.T......x...V |
// /* 0ce0 */ "\x00\x04\x01\xe7\xef\xaf\x1c\x0b\x10\x0f\x6c\x3e\x64\x48\x07\xb8" //..........l>dH.. |
// /* 0cf0 */ "\x0c\x47\xac\x01\x5e\xc6\x70\x18\x8b\x00\xa0\x65\x2c\x80\x06\x0d" //.G..^.p....e,... |
// /* 0d00 */ "\xc2\x94\x15\xf5\x01\x6c\x1c\x10\x4c\x00\x5f\x60\x80\x16\x18\xc0" //.....l..L._`.... |
// /* 0d10 */ "\x27\xf2\x20\x07\x08\x95\x88\x07\xb8\xaa\x39\x8e\xbc\x6a\xe0\x79" //'. .......9..j.y |
// /* 0d20 */ "\x1c\x2c\xc3\xdf\xe5\xd1\x15\x89\xdb\xdc\x08\xc3\xd0\x1a\x00\xa7" //.,.............. |
// /* 0d30 */ "\x16\xa6\x33\xa7\x00\x0f\xf1\x09\x0f\x72\xd1\x77\x36\x73\x98\x50" //..3......r.w6s.P |
// /* 0d40 */ "\x05\x38\xba\x00\x03\x60\x40\x03\xd8\x03\x18\x3b\x02\x60\x1e\xa0" //.8...`@....;.`.. |
// /* 0d50 */ "\x71\x76\x8c\x72\xc8\xf9\x51\xdb\xf8\x00\x15\xf6\xd4\x0e\x82\xb0" //qv.r..Q......... |
// /* 0d60 */ "\x00\x13\x02\xa0\x0a\x20\x71\x85\x8e\xba\x30\x3f\x60\x0a\xc1\xe4" //..... q...0?`... |
// /* 0d70 */ "\xd0\x0d\x02\x00\x15\x90\x00\x3c\x7c\xa0\x24\x09\x80\x56\x40\x02" //.......<|.$..V@. |
// /* 0d80 */ "\xf5\xf2\x80\x30\x3e\x1f\xc1\x49\x07\x0d\xf8\x1e\x82\x10\x0f\xa0" //...0>..I........ |
// /* 0d90 */ "\x0a\xd8\x02\x98\x30\x08\x28\x00\x6a\x0b\x00\x1e\x20\x15\xa0\x05" //....0.(.j... ... |
// /* 0da0 */ "\xd8\x30\x6e\x63\xca\x60\x0a\x00\x0c\x84\x2e\x13\x20\x14\x80\x0a" //.0nc.`...... ... |
// /* 0db0 */ "\x70\x06\x0a\x48\x02\xec\x01\x44\x01\x4c\x00\x2c\x00\x17\x32\x6f" //p..H...D.L.,..2o |
// /* 0dc0 */ "\xb8\x11\x02\x01\x40\x53\x00\x03\x8f\x01\x80\x71\x70\x93\xd1\x08" //....@S.....qp... |
// /* 0dd0 */ "\xe6\x09\xb7\x82\x0b\x85\xe0\x06\x0f\x02\xc4\x7d\x2b\x5a\xd1\x63" //...........}+Z.c |
// /* 0de0 */ "\x1d\x2d\x6a\xd0\x73\x86\xce\x42\xf8\xe5\x05\x16\x9a\xb3\xd7\xf0" //.-j.s..B........ |
// /* 0df0 */ "\x9f\xac\x75\xd5\x14\x21\x47\xae\xed\x35\xfb\xff\x06\x84\x43\x00" //..u..!G..5....C. |
// /* 0e00 */ "\xac\x54\x60\x73\x1d\x2a\x1f\x6e\xed\x5f\x52\x70\x07\xc4\x8e\x60" //.T`s.*.n._Rp...` |
// /* 0e10 */ "\xfe\x25\x40\x0e\x44\x10\x03\x06\xbd\xdf\xad\x76\xa2\x4b\x4d\x8e" //.%@.D......v.KM. |
// /* 0e20 */ "\xd1\x06\xb4\xda\xed\x55\x00\x3a\x5f\x39\x66\x01\x0c\x76\x4c\x0e" //.....U.:_9f..vL. |
// /* 0e30 */ "\x54\x01\x12\x71\xf5\x1a\x0d\x69\x66\x61\xb4\x70\x97\x0c\x60\x06" //T..q...ifa.p..`. |
// /* 0e40 */ "\xf7\x7f\x30\xdd\x40\x0c\x9f\x0a\x53\xa3\x57\xee\xf7\x0c\x3a\x88" //..0.@...S.W...:. |
// /* 0e50 */ "\xc0\x31\x0c\x01\x76\x50\xfa\xc9\x0f\x66\x63\xd5\xda\xa0\x14\x90" //.1..vP...fc..... |
// /* 0e60 */ "\x04\xff\xf5\x93\x0f\xac\x78\xfa\xd0\x00\x02\xd1\x5f\xbf\x82\x60" //......x....._..` |
// /* 0e70 */ "\x12\x9a\x90\x0d\x40\x80\x0c\x1e\x6e\xd8\x03\x45\x80\x4a\xe4\x6a" //....@...n..E.J.j |
// /* 0e80 */ "\x04\x40\xe1\x12\xba\x07\xe0\x07\xf7\x86\xe4\x20\x67\xfb\xaa\x00" //.@......... g... |
// /* 0e90 */ "\x91\xa1\xec\x57\x28\xba\x51\x67\xc2\xf5\x00\x45\x10\xcf\x26\x02" //...W(.Qg...E..&. |
// /* 0ea0 */ "\x05\x30\x09\xd0\x62\x06\x01\x80\x6d\x18\x00\x18\x07\x67\xe7\x58" //.0..b...m....g.X |
// /* 0eb0 */ "\x9f\x5f\xea\x00\x80\x80\x20\x35\x00\x48\xf0\x3f\x70\x08\xc0\x29" //._.... 5.H.?p..) |
// /* 0ec0 */ "\xb2\xc1\x80\x85\xc8\x0c\x5e\x08\x59\xed\x38\x2f\xf9\xd1\xb1\x5f" //......^.Y.8/..._ |
// /* 0ed0 */ "\xbf\xce\xaf\xd5\x00\x2b\x38\x08\x0c\x04\x12\xd3\x50\x05\xb6\x7a" //.....+8.....P..z |
// /* 0ee0 */ "\x5d\x80\x59\xa6\x11\x8b\x06\x04\x18\x70\x45\xe0\xc8\x11\x0c\x01" //].Y......pE..... |
// /* 0ef0 */ "\x62\xaf\xdf\xe0\x67\x37\x6a\xbd\xd5\xf6\xff\x50\x05\x23\xfd\x8c" //b...g7j....P.#.. |
// /* 0f00 */ "\x02\xf9\x33\x01\x8e\xee\xee\xe1\x2f\xc8\x04\x30\x0c\x01\x64\xaf" //..3...../..0..d. |
// /* 0f10 */ "\xdf\xc1\x7d\x48\xfb\x2a\xc6\x01\xda\x0c\x7b\x3d\x02\x49\xb5\x46" //..}H.*....{=.I.F |
// /* 0f20 */ "\xaf\xc1\x7e\xce\x79\xe6\x46\x05\xaa\x00\xc4\x08\x00\x3e\x3d\x41" //..~.y.F......>=A |
// /* 0f30 */ "\x4a\x6d\x4e\x37\x49\xb5\xd4\xe6\xed\x77\xba\xd4\x01\x43\x02\xfc" //JmN7I....w...C.. |
// /* 0f40 */ "\xbb\x38\x0a\x32\x10\x05\xaa\x01\x0c\x3c\x94\x1f\xed\xdc\x4d\x40" //.8.2.....<....M@ |
// /* 0f50 */ "\xf2\x39\xc0\x5b\xc1\xc1\x4e\x0c\x0f\x98\x8c\x0a\xfb\x0c\xdf\xf6" //.9.[..N......... |
// /* 0f60 */ "\xe3\x82\xdd\x0a\xfd\xf7\xd3\x70\x45\x91\x52\x1f\x94\xe0\x77\x78" //.......pE.R...wx |
// /* 0f70 */ "\x0a\xe6\x85\x7c\x2b\x1c\x0d\x67\xc3\x30\xe0\xc3\x68\x07\xf3\x8b" //...|+..g.0..h... |
// /* 0f80 */ "\xe7\xbc\xf2\x20\x84\x60\x28\x64\x23\xfb\xb0\x14\x93\x01\x8d\x41" //... .`(d#......A |
// /* 0f90 */ "\x03\x07\xc8\x54\x04\xbc\x3c\xc0\x44\x00\x7e\x00\xef\x04\x48\x86" //...T..<.D.~...H. |
// /* 0fa0 */ "\x02\x77\x42\x3d\xdc\xe0\x33\x38\x09\xd1\x80\xa4\xc3\x1e\x14\x8c" //.wB=..38........ |
// /* 0fb0 */ "\x05\x77\x0c\x02\x1e\x44\x39\x30\xda\x02\x3d\xdb\x7c\x7a\x82\x08" //.w...D90..=.|z.. |
// /* 0fc0 */ "\x35\x8e\x5f\x0f\x0f\x10\x66\x18\x0a\xa5\x18\x73\xfb\xb1\xe3\xc8" //5._...f....s.... |
// /* 0fd0 */ "\x41\xac\x07\x7d\x77\x84\x81\x1e\x5b\x7c\x77\x99\xc1\x7f\xba\x24" //A..}w...[|w....$ |
// /* 0fe0 */ "\x0e\xac\x36\x8c\x03\x68\xf3\xe0\x4f\xbf\x41\x40\x04\x03\x05\x29" //..6..h..O.A@...) |
// /* 0ff0 */ "\x08\x12\x08\x22\x08\x36\x07\x66\x1b\x40\x4f\xa7\xdf\xee\x28\xc8" //...".6.f.@O...(. |
// /* 1000 */ "\x35\x08\x12\x0d\x61\x06\xd0\xf3\xfe\x08\x35\x00\x9f\x62\x18\x05" //5...a.....5..b.. |
// /* 1010 */ "\x7e\x58\x81\x63\xe5\x9c\x3b\x53\x10\x65\x1d\x4e\xe3\x06\x6d\x30" //~X.c..;S.e.N..m0 |
// /* 1020 */ "\x01\x0a\xa0\x00\x30\x15\x80\xbb\x98\x00\x7c\x83\x60\x00\x30\xc5" //....0.....|.`.0. |
// /* 1030 */ "\x6c\x8f\x00\x3b\x7b\x90\x6a\x04\x3c\xab\x58\x01\x84\x00\x1d\x03" //l..;{.j.<.X..... |
// /* 1040 */ "\x41\xb4\x60\x03\xa0\xc7\x2a\x87\x9c\xc0\x01\x98\x0a\xda\x20\x00" //A.`...*....... . |
// /* 1050 */ "\x05\x1c\xa6\xde\x91\x30\x06\xb0\xda\x20\x9e\x2b\x4c\x30\x16\x09" //.....0... .+L0.. |
// /* 1060 */ "\x00\x3b\xd6\x46\x01\x16\x1b\x47\xe2\x88\x40\x01\x07\x08\x20\x87" //.;.F...G..@... . |
// /* 1070 */ "\x2f\xd5\xa3\xc3\x22\x08\x87\x59\xd7\x85\x0c\x02\x8c\x36\x80\xbf" ///..."..Y.....6.. |
// /* 1080 */ "\x1f\xba\x7c\x3c\x08\xf8\xa5\x8f\x8a\x00\x28\xf2\x94\x52\x08\x12" //..|<......(..R.. |
// /* 1090 */ "\x20\x88\x32\x84\x19\xc6\x03\x03\x5a\x3a\x91\x30\x1e\xa5\xff\x76" // .2.....Z:.0...v |
// /* 10a0 */ "\x36\x0c\x60\x9c\x76\x03\x98\x08\x60\xdf\xb5\x88\x0a\x4a\x04\x7a" //6.`.v...`....J.z |
// /* 10b0 */ "\x00\xa8\x00\x06\x27\x81\x45\x9c\x9d\xa8\x44\x17\x27\xdd\x88\x2e" //....'.E...D.'... |
// /* 10c0 */ "\x10\x1c\x05\x7f\x14\x00\xa8\xe8\x4d\x0a\x38\x13\x42\x7c\x09\xec" //........M.8.B|.. |
// /* 10d0 */ "\x42\x7a\x09\xa1\x2c\x84\xc3\x70\x03\xfd\xf5\xdd\x5c\x00\x13\xc4" //Bz..,..p........ |
// /* 10e0 */ "\x66\x29\x4a\x4c\x6e\x2c\x76\xe5\xa0\x93\xac\x38\xb6\xc0\x17\x06" //f)JLn,v....8.... |
// /* 10f0 */ "\x0c\x06\x4e\x81\x47\x4c\xaf\xdc\xa7\x62\x0f\x7e\xaf\x0d\xc7\x62" //..N.GL...b.~...b |
// /* 1100 */ "\x68\x50\xbc\x01\x44\x01\xc5\x27\xca\x25\x7f\x1a\x34\x05\x24\xa0" //hP..D..'.%..4.$. |
// /* 1110 */ "\x30\x39\x96\x19\xe5\x2d\x60\x24\xb4\x09\x75\x2e\x3f\x77\x6b\xe5" //09...-`$..u.?wk. |
// /* 1120 */ "\x8a\x9e\x9d\x31\x77\x4b\x76\xdb\x01\xc0\x46\x00\x6a\x00\x6d\xcd" //...1wKv...F.j.m. |
// /* 1130 */ "\x7c\x6a\x22\x02\xac\x65\xd3\xac\x3a\x44\xff\x6f\x6c\xff\x20\x26" //|j"..e..:D.ol. & |
// /* 1140 */ "\x35\x90\x18\x0c\x77\xf1\x18\x7e\x42\x7f\x77\xa8\x02\x41\xfa\x2f" //5...w..~B.w..A./ |
// /* 1150 */ "\xa2\xd2\x3e\x90\x2a\xf4\x32\xa0\x07\x20\x10\x01\x84\x8f\xd7\xe7" //..>.*.2.. ...... |
// /* 1160 */ "\xcb\x67\xa4\x43\xa3\x51\xd3\x29\xf2\xdb\xf4\x96\x3f\x6f\xfe\xa0" //.g.C.Q.)....?o.. |
// /* 1170 */ "\x32\x0b\x7f\x83\xc4\x25\x60\x30\x7a\xfd\xfe\x7a\x64\xf4\x13\x4f" //2....%`0z..zd..O |
// /* 1180 */ "\x00\x7e\xbf\xd7\xef\xf3\x6a\x66\x02\x8c\x02\x30\xe0\xb0\x34\x74" //.~....jf...0..4t |
// /* 1190 */ "\xcb\x01\x08\x20\x55\xd1\x11\xe6\xcf\x01\x84\x79\x30\xac\x17\x60" //... U......y0..` |
// /* 11a0 */ "\x18\x0d\x79\x8f\xc9\xa8\x1c\x8a\xd0\xdb\x73\xba\xd9\x3f\x48\x0c" //..y.......s..?H. |
// /* 11b0 */ "\x83\x97\xfa\x7f\x56\x6d\xf1\xe0\x10\x8d\x64\x07\x01\x92\x2d\xfc" //....Vm....d...-. |
// /* 11c0 */ "\x7e\xe2\x04\xc5\x60\x8e\x04\xe1\x06\xf0\x1a\x06\x03\xf8\x4f\xe9" //~...`.........O. |
// /* 11d0 */ "\xd4\xa8\x02\x55\x40\x09\x00\xcf\xc0\x60\x02\xbf\xc8\x20\x39\x01" //...U@....`... 9. |
// /* 11e0 */ "\x63\x29\xb5\x40\x67\x4b\x5f\x8a\xfd\x4a\xa8\x01\x21\x53\x7c\x64" //c).@gK_..J..!S|d |
// /* 11f0 */ "\xf4\x13\xc2\x2a\x80\x15\x85\xa8\x06\x87\x76\x15\x80\xc7\xee\xfd" //...*......v..... |
// /* 1200 */ "\x4b\xd3\xfa\x73\x7f\xe0\x8a\x01\x1f\x9b\x61\xaf\x0c\xb9\xc5\x40" //K..s......a....@ |
// /* 1210 */ "\x12\x40\x57\xcb\x4e\x17\x4a\xbd\x4c\x1e\x8a\x87\xf8\x70\xd3\xe1" //.@W.N.J.L....p.. |
// /* 1220 */ "\xc3\x01\x88\x0d\x40\x16\xc6\x82\x03\x01\x1d\x43\x00\xf9\xeb\x1d" //....@......C.... |
// /* 1230 */ "\x5c\x06\x02\xfd\x1d\xa2\xa1\x5d\xaa\x00\x96\x18\x5f\x85\x04\x01" //.......]...._... |
// /* 1240 */ "\x1f\x54\x01\x5f\xfc\x88\x0c\x94\x06\x02\x7a\x96\xc0\x05\xe2\xf8" //.T._......z..... |
// /* 1250 */ "\x90\x1c\xf9\x85\xef\x15\x83\xc3\xe0\x48\x05\xc3\xf4\x24\x0f\x3f" //.........H...$.? |
// /* 1260 */ "\x28\x46\xd3\xe2\x9a\x23\xe7\xe8\x8e\x1d\x79\x19\x5d\x3a\xa8\x01" //(F...#....y.]:.. |
// /* 1270 */ "\xb0\x04\x04\xc0\x6b\xf5\x6a\x80\x15\x80\xef\xc0\x02\x2e\x09\xe5" //....k.j......... |
// /* 1280 */ "\xb0\x18\x0b\xfd\xbf\x01\xe3\x8e\xfd\x7c\x60\xf0\xf8\x0c\x06\x58" //.........|`....X |
// /* 1290 */ "\x03\x02\x7d\xbf\xab\x9c\xb0\x01\xf8\x72\x2c\x30\x3e\x0d\x51\x03" //..}......r,0>.Q. |
// /* 12a0 */ "\x7f\xa3\x0f\x4f\xbf\x3c\x64\x43\x67\x01\x93\xd7\xc5\x00\x1c\xfe" //...O.<dCg....... |
// /* 12b0 */ "\xc7\xf1\x40\xa2\x57\x41\x26\x16\x00\x4f\xd8\x04\x41\x81\x80\xb3" //..@.WA&..O..A... |
// /* 12c0 */ "\x70\x96\x5f\xeb\xde\x79\x43\x3f\x1b\xd5\x4a\x80\x14\x85\x68\x06" //p._..yC?..J...h. |
// /* 12d0 */ "\x07\x5b\xbf\x50\xed\x16\xd8\x43\x00\x2f\x0c\x31\xea\x5d\x44\x00" //.[.P...C./.1.]D. |
// /* 12e0 */ "\xa4\x06\x05\x1f\xa7\x78\xf4\x08\xc0\x21\xf9\x96\x0a\xc8\x0d\x40" //.....x...!.....@ |
// /* 12f0 */ "\x04\x8e\xec\x03\x04\x59\xbb\x12\x5a\x58\x6d\x12\x89\x83\x00\x3c" //.....Y..ZXm....< |
// /* 1300 */ "\x74\x26\x0e\x3a\x87\x7e\x86\x0f\x4d\x9f\xe8\xc7\xf3\xe5\xe8\xeb" //t&.:.~..M....... |
// /* 1310 */ "\xea\x9b\x3f\xfa\x2e\x95\x51\x28\x31\x3e\x27\x29\x55\xa9\x8f\x92" //..?...Q(1>')U... |
// /* 1320 */ "\xc9\x8e\xa0\xc0\x37\x1d\x09\x65\xf9\x47\xa1\x11\x6c\x05\x4c\xa4" //....7..e.G..l.L. |
// /* 1330 */ "\x51\xc0\x20\x6f\x58\x0c\xfc\xf8\x12\x3b\x01\x35\x19\xc0\xa3\x51" //Q. oX....;.5...Q |
// /* 1340 */ "\xc9\x61\x06\x02\xc1\x2d\x26\x90\x09\x68\x05\xc7\x02\x2a\x05\x70" //.a...-&..h...*.p |
// /* 1350 */ "\x3a\x72\xa0\x11\x80\x8e\xa0\x8b\x00\x68\xc4\x10\x07\x00\x56\x2e" //:r.......h....V. |
// /* 1360 */ "\x18\x12\xac\x23\x02\x41\x9c\x60\x47\xc8\xc0\x19\x33\x03\x67\x00" //...#.A.`G...3.g. |
// /* 1370 */ "\xb9\x00\x3e\x04\xe0\x3d\xf3\xc6\x04\x9d\x89\x68\x07\x60\xe4\x0c" //..>..=.....h.`.. |
// /* 1380 */ "\x8b\x01\xc3\x9e\xc2\x43\x30\x38\x6b\x02\x38\xc5\xcb\x00\x71\x46" //.....C08k.8...qF |
// /* 1390 */ "\x02\x39\x5c\xb0\xc7\xd1\x06\xc1\x80\x7b\x23\x02\x34\x41\xb8\x4e" //.9.......{#.4A.N |
// /* 13a0 */ "\x3a\xfd\x84\x6c\x02\xee\xa2\xf1\xcb\x71\x04\x24\x60\x59\x47\xd8" //:..l.....q.$`YG. |
// /* 13b0 */ "\x3e\x04\xf6\x30\x71\xf6\x54\x5b\xc2\x7d\x9a\xe8\x66\xc0\x8c\xaf" //>..0q.T[.}..f... |
// /* 13c0 */ "\x22\x41\x20\x06\x1a\xc4\x60\x1a\x78\x05\xb0\xf0\xa9\x01\x74\x6e" //"A ...`.x.....tn |
// /* 13d0 */ "\x60\x47\x16\x05\x62\x8e\xca\x4f\x25\xb8\x1c\xb8\x6c\x10\x6a\x1e" //`G..b..O%...l.j. |
// /* 13e0 */ "\x09\x14\x60\x5b\x1a\xa7\x80\x60\x07\x76\x05\x78\x54\x00\xac\xdf" //..`[...`.v.xT... |
// /* 13f0 */ "\xc4\x06\xc2\xb1\xd2\x32\x1f\x3c\x44\x14\x09\xc5\x11\x71\x50\x02" //.....2.<D....qP. |
// /* 1400 */ "\x1c\xf1\x08\x10\x82\x91\x81\x72\x29\x64\x27\xb4\x5c\x60\x68\x72" //.......r)d'..`hr |
// /* 1410 */ "\x0d\x63\x83\x5b\xc9\x8b\x97\x8d\xa7\xea\x3a\x89\x22\x1f\x4d\xd7" //.c.[......:.".M. |
// /* 1420 */ "\x71\x2d\xf0\xb3\x02\x46\x38\x86\x88\x25\x00\x3e\x34\x60\x57\xf8" //q-...F8..%.>4`W. |
// /* 1430 */ "\xf1\x1b\x03\x88\x81\x7d\x54\xf7\x30\x5f\x01\x99\x3c\x34\x06\x61" //.....}T.0_..<4.a |
// /* 1440 */ "\x88\x78\xb2\x30\x31\x5c\x1b\x04\xe2\x32\x48\xf8\xe1\x6c\x06\x52" //.x.01....2H..l.R |
// /* 1450 */ "\x00\x08\xc0\x5d\x8f\x0b\x46\x07\x22\x03\xff\xc7\x00\x38\xf9\x2f" //...]..F."....8./ |
// /* 1460 */ "\x7c\x57\xc9\x7b\xb6\x2e\x60\x1f\xc6\x7d\xc5\x18\x1c\x1c\x11\xe6" //|W.{..`..}...... |
// /* 1470 */ "\xd7\x06\xd8\xf9\x2c\x0d\xf7\x88\x3e\x02\xbb\x60\x60\x68\xf9\x2c" //....,...>..``h., |
// /* 1480 */ "\x0b\xcf\x18\x14\x1d\xd1\x94\x20\x03\x80\x13\xd8\x1b\xc2\x45\x02" //....... ......E. |
// /* 1490 */ "\x47\xa0\x3e\x84\x04\x10\x74\x78\x78\x0c\x2d\x81\x33\x43\xdc\x97" //G.>...txx.-.3C.. |
// /* 14a0 */ "\x55\x12\x08\x47\xa5\x30\x02\xe7\xa0\xeb\xb0\x06\x41\x8c\x7a\x4e" //U..G.0......A.zN |
// /* 14b0 */ "\xb0\x37\xb0\x03\xe8\xc0\x29\x07\xd1\x7a\x5a\x25\x9e\xa4\x7d\x18" //.7....)..zZ%..}. |
// /* 14c0 */ "\x04\xc0\xea\x90\x47\xf4\x5e\x96\x60\x69\xb7\x62\xf7\xa9\xde\x27" //....G.^.`i.b...' |
// /* 14d0 */ "\x7a\x66\x87\x7b\xce\x42\xa8\x00\x1b\x3f\x3e\x6c\x59\x41\x55\xb9" //zf.{.B...?>lYAU. |
// /* 14e0 */ "\xf3\x32\x01\x2a\x00\x3d\x40\x0a\xc0\x12\x2c\x07\xbc\xed\xee\xc0" //.2.*.=@...,..... |
// /* 14f0 */ "\x2d\x70\x15\xf2\x54\x0c\x07\x7e\xc0\x7a\x00\x4f\x9c\x1a\xe3\x0a" //-p..T..~.z.O.... |
// /* 1500 */ "\x1e\x01\x81\xc9\x8c\x5d\x65\xab\xb6\xfe\x78\x91\x8a\xec\xc0\x38" //.....]e...x....8 |
// /* 1510 */ "\x9d\xcd\xf2\xe0\x07\x9e\x7b\x12\xee\xbe\x5c\x63\x98\x28\xc5\x03" //......{....c.(.. |
// /* 1520 */ "\x6f\x96\x81\x1a\xc9\x48\x00\x46\xb9\x7c\x3b\x28\xa4\xc6\x33\xeb" //o....H.F.|;(..3. |
// /* 1530 */ "\xbf\x1f\x67\x6d\x97\x28\x67\x02\xe0\x1e\x0f\x57\x54\x00\x79\xf0" //..gm.(g....WT.y. |
// /* 1540 */ "\xaa\x18\x74\x19\xc2\xa5\x87\xa7\x23\xeb\xc4\x08\x40\x07\x0a\x3e" //..t.....#...@..> |
// /* 1550 */ "\x00\x00\x10\x07\xc6\x60\x2c\x03\xfc\xbb\xde\x95\x3a\xcb\x78\x2e" //.....`,.....:.x. |
// /* 1560 */ "\xb9\x3a\x44\x29\x4b\xe2\xad\x6b\x5f\xe5\x45\xe4\xae\x04\xc9\x88" //.:D)K..k_.E..... |
// /* 1570 */ "\xea\x80\x24\xea\xad\xf5\x1f\x29\x03\x9f\xe1\xe8\xf0\x00\xf6\x04" //..$....)........ |
// /* 1580 */ "\x3b\x73\x41\x77\x64\x8c\x38\xd4\xc4\x0d\x8b\xc4\xf5\x8a\xef\x93" //;sAwd.8......... |
// /* 1590 */ "\x3c\xdf\xfe\x70\x81\x0b\x9a\x58\x90\x02\xa0\x1a\xca\x52\x42\x09" //<..p...X.....RB. |
// /* 15a0 */ "\x92\xde\x0c\xa5\x34\x01\x4c\x0a\x04\xf3\x04\x4f\xee\xf2\x21\x0c" //....4.L....O..!. |
// /* 15b0 */ "\x08\xfa\xa8\x02\x3e\xdb\xc0\x60\x51\xde\x9b\x0a\x80\x1d\x0b\xcc" //....>..`Q....... |
// /* 15c0 */ "\x4f\x03\x45\x40\x12\x7f\x77\x01\x81\x52\xd6\x98\x02\xc6\xb9\x88" //O.E@..w..R...... |
// /* 15d0 */ "\x87\xbc\x12\x23\xc6\xaf\xa8\xf5\xde\xa0\x0d\x22\xe5\x32\xc2\x0d" //...#.......".2.. |
// /* 15e0 */ "\xee\x79\xd4\x06\xa3\xcd\x22\x40\xd0\x7c\x56\x04\xb5\x2d\x00\xc0" //.y...."@.|V..-.. |
// /* 15f0 */ "\x8c\x60\x84\x1e\xf4\x01\x20\x79\x34\x06\x95\xed\x47\xdd\x61\x08" //.`.... y4...G.a. |
// /* 1600 */ "\x90\x0d\x40\x1b\xd8\x6e\x01\x63\xaf\xae\xf9\x53\xe5\x78\x9b\x4d" //..@..n.c...S.x.M |
// /* 1610 */ "\x68\x00\x1f\xb1\x40\x0b\xfa\x0f\x68\x40\x37\xb4\x2c\x17\x0f\x4d" //h...@...h@7.,..M |
// /* 1620 */ "\xb8\x49\x2d\xe0\x30\x18\xb3\x1e\x05\x50\xaf\xaa\x03\x23\x21\xc3" //.I-.0....P...#!. |
// /* 1630 */ "\x71\x51\xc3\x05\x81\x63\xe2\xa0\x03\x00\xe3\x3a\x04\xf2\x3a\xa3" //qQ...c.....:..:. |
// /* 1640 */ "\xec\xc8\x05\xf3\x94\xb1\xa8\x80\xc0\x97\xa3\xbd\x52\x40\x4c\xff" //............R@L. |
// /* 1650 */ "\x74\x06\xd4\xd6\x03\xea\xf3\x08\x44\x83\x02\xf8\xb2\x8b\xe0\x06" //t.......D....... |
// /* 1660 */ "\xa0\x19\xec\x27\x87\x90\x5a\xb0\x0c\x06\x7a\x23\xce\x86\x60\x37" //...'..Z...z#..`7 |
// /* 1670 */ "\xfa\xb7\x4e\xf5\x40\x06\x9f\xfc\x1e\x53\x9c\x4c\x06\xf6\xe8\x06" //..N.@....S.L.... |
// /* 1680 */ "\xc1\x80\x20\x5e\x34\x8a\x18\xc0\x0d\x47\xc3\x70\x0a\xb5\xe8\xb7" //.. ^4....G.p.... |
// /* 1690 */ "\xe9\x01\xa0\x73\xa0\x57\xef\xf7\xde\xb6\x52\x6d\xcf\x5c\x7b\x5f" //...s.W....Rm..{_ |
// /* 16a0 */ "\x01\x81\x62\x41\xa7\xb9\x61\x00\x7f\xc6\x8f\x28\xbc\x68\xc4\xc1" //..bA..a....(.h.. |
// /* 16b0 */ "\x80\x0a\x11\x00\x04\x0f\x12\xee\xc5\x8c\x62\xa0\x0d\xc2\x81\xeb" //..........b..... |
// /* 16c0 */ "\xc0\x08\x0c\x09\xff\x09\x59\x3f\xda\xa0\x09\x51\xe2\xbc\x10\x82" //......Y?...Q.... |
// /* 16d0 */ "\x60\x61\x74\x0a\x80\x2a\x50\x85\xc0\x42\xa1\xce\x6c\x58\x9c\x05" //`at..*P..B..lX.. |
// /* 16e0 */ "\x4b\x5a\x21\x62\x45\x29\x80\xe1\xfa\xfa\x01\x81\xc7\x9f\x27\xa7" //KZ!bE)........'. |
// /* 16f0 */ "\x51\xe7\xce\x20\xa8\x19\xfc\xf8\xf5\x2c\x75\x0e\xa0\x09\x8d\x11" //Q.. .....,u..... |
// /* 1700 */ "\xd8\x75\xf0\xc1\x81\x90\x80\x03\xf1\x69\xaf\x55\xc7\x15\xd6\x00" //.u.......i.U.... |
// /* 1710 */ "\x11\x04\x54\x00\xa8\xe7\x20\x3d\x9e\x14\x26\x00\x8c\x03\x8a\x81" //..T... =..&..... |
// /* 1720 */ "\xb7\x76\xec\x40\x38\x6d\x44\x06\x21\x04\x0b\xa8\x00\xf8\x85\xc7" //.v.@8mD.!....... |
// /* 1730 */ "\x3d\x74\x8e\x04\xc0\x63\xd2\x5c\x01\xbe\x8a\x73\x88\x00\xb5\x62" //=t...c.....s...b |
// /* 1740 */ "\x14\x92\x07\x1b\x41\x5a\xe0\x5d\x40\x09\xfb\xb1\x68\x09\xeb\x81" //....AZ.]@...h... |
// /* 1750 */ "\xa1\xf9\xf3\xa3\xe8\x20\x06\x08\x3f\x5f\x3d\x22\x8e\x84\xc7\x54" //..... ..?_="...T |
// /* 1760 */ "\xea\x00\xbd\x98\x10\x47\xe7\xce\x50\xe0\x0b\x06\x07\x30\x58\xc8" //.....G..P....0X. |
// /* 1770 */ "\xe8\x57\x38\xe5\x40\x0f\x14\xca\xc4\xfa\xef\x44\xf9\x60\x25\xaa" //.W8.@......D.`%. |
// /* 1780 */ "\x76\x01\xb7\x10\xfd\x64\x1e\x3a\x12\xfa\x55\x7e\x86\x1f\x4f\x87" //v....d.:..U~..O. |
// /* 1790 */ "\xa6\xd3\xe8\x25\xf4\x67\x04\xe6\xa1\x57\xd1\x95\xe7\x4a\xf4\xd5" //...%.g...W...J.. |
// /* 17a0 */ "\xfe\x8d\x1e\x92\x9e\xa5\xc7\x42\x63\x81\x2d\x18\x15\xb1\xc8\x74" //.......Bc.-....t |
// /* 17b0 */ "\x29\x42\x2c\x63\xa8\x01\xd3\xde\xf8\x07\x44\x8b\x10\x76\x30\x43" //)B,c......D..v0C |
// /* 17c0 */ "\xf4\x60\x70\xc4\x17\x8f\xd0\x0b\x03\xd5\xaa\x00\x97\xba\xf0\x0d" //.`p............. |
// /* 17d0 */ "\x47\xce\x90\xda\xd7\x4f\x7b\xc1\x0e\x48\x14\x67\x03\xed\x06\x78" //G....O{..H.g...x |
// /* 17e0 */ "\x12\xb8\x43\xb8\x34\xc5\x45\x9b\x82\x48\x63\x29\x0a\xb0\x43\x94" //..C.4.E..Hc)..C. |
// /* 17f0 */ "\x32\x7a\x9e\x30\x5a\xbb\xee\x46\x52\xd9\x54\x67\xb7\x70\x1c\x7f" //2z.0Z..FR.Tg.p.. |
// /* 1800 */ "\x90\x15\xc0\xfd\x53\x92\xb5\x1c\x22\xe2\x89\x3e\xbb\xd4\x62\x51" //....S..."..>..bQ |
// /* 1810 */ "\x40\x1c\x4d\xe2\x15\x80\xa7\xf0\xa2\x01\x48\x00\x40\x7a\x82\xa0" //@.M.......H.@z.. |
// /* 1820 */ "\x58\x92\xfe\x05\x20\x2a\x9e\x97\x00\x0a\xb8\x00\x60\x0c\xc2\xcf" //X... *......`... |
// /* 1830 */ "\x97\x98\x1a\x38\x09\xc7\x3c\x44\x3e\x33\x81\x25\xd8\x11\x90\x09" //...8..<D>3.%.... |
// /* 1840 */ "\x01\x27\xf1\x14\x60\x49\x58\x04\xc1\x1b\xf3\x40\xe5\xcb\x02\x38" //.'..`IX....@...8 |
// /* 1850 */ "\x1e\x2d\x91\x1e\x80\x90\x11\x6f\xfc\x60\xc1\x1c\xa8\xe6\x08\xe5" //.-.....o.`...... |
// /* 1860 */ "\x5e\xc2\x70\x3c\x98\x7b\x04\x7e\xc6\x08\xe5\x8b\x1f\xf7\x98\x06" //^.p<.{.~........ |
// /* 1870 */ "\x07\x71\x9a\x7f\x87\x54\x8c\x11\xae\xa0\x00\xf8\xa1\xd2\x20\x27" //.q...T........ ' |
// /* 1880 */ "\x01\xa6\xf8\x04\x40\x16\x21\x02\x44\xe9\x56\x12\x80\xcc\xbc\x0d" //....@.!.D.V..... |
// /* 1890 */ "\x18\x13\x6a\x39\xd4\x84\xa0\x33\x7f\x23\xa4\x02\xb8\x13\x5d\xd0" //..j9...3.#....]. |
// /* 18a0 */ "\x7c\x23\x01\x9e\x78\x58\x00\x3e\x25\xd0\x29\xee\x74\x06\x0b\xe1" //|#..xX.>%.).t... |
// /* 18b0 */ "\x69\x20\x14\xa6\xd8\x04\xf1\x51\xfb\x9f\xc8\x46\x03\x0a\x1d\x60" //i .....Q...F...` |
// /* 18c0 */ "\x08\x61\x1f\x05\xf1\xb8\x46\x02\xde\x29\x81\x47\x00\x3c\xee\x82" //.a....F..).G.<.. |
// /* 18d0 */ "\x10\x17\x41\x3f\x96\xc2\xf5\xac\x03\x02\x79\xc1\x42\x50\x8a\x01" //..A?......y.BP.. |
// /* 18e0 */ "\x82\x80\x60\x88\x7f\xeb\x4b\xd7\xe1\x23\x63\xeb\x58\xb8\xfd\xf1" //..`...K..#c.X... |
// /* 18f0 */ "\x58\xaf\xc9\x34\xfc\x91\x86\x0a\x4c\x80\x2f\x92\x15\xc1\x49\x8f" //X..4....L./...I. |
// /* 1900 */ "\xcc\x59\x09\x0f\x80\x8d\x05\x00\x07\xf4\x6d\x38\x7f\xc5\x8f\xf8" //.Y........m8.... |
// /* 1910 */ "\xc5\x3b\xef\xad\x18\x29\xf6\x21\x5f\x25\x6d\xfe\x30\x8f\xf2\x55" //.;...).!_%m.0..U |
// /* 1920 */ "\x2f\xe2\xe8\x86\x10\x80\xd5\xfc\x57\x18\x2d\x51\x01\xad\x84\x80" ///.......W.-Q.... |
// /* 1930 */ "\x63\x76\x19\x56\x00"                                             //cv.V. |
// Sent dumped on RDP Client (5) 6453 bytes |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[1](30) used=1082 free=15196 |
// order(13 clip(145,200,110,1)):memblt(cache_id=2 rect(930,677,64,61) rop=cc srcx=0 srcy=0 cache_idx=87) |
// front::draw:draw_tile((0, 704, 32, 32) (32, 32, 32, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[2](2064) used=1088 free=15190 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[3](30) used=1110 free=15168 |
// order(13 clip(145,200,110,1)):memblt(cache_id=1 rect(0,704,32,32) rop=cc srcx=0 srcy=0 cache_idx=0) |
// Widget_load: image file [./tests/fixtures/ad8b.png] is PNG file |
// front::draw:draw_tile((100, 100, 26, 32) (80, 50, 26, 32)) |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[4](1808) used=1125 free=15153 |
// <Serializer 0x7f702541c010> RDPSerializer::reserve_order[5](30) used=1440 free=14838 |
// order(13 clip(145,200,110,1)):memblt(cache_id=1 rect(100,100,26,32) rop=cc srcx=0 srcy=0 cache_idx=1) |
// Front::end_update() |
// GraphicsUpdatePDU::flush_orders: order_count=6 offset=0 |
// GraphicsUpdatePDU::flush_orders: fast-path |
// Sending on RDP Client (5) 1100 bytes |
// /* 0000 */ "\x00\x84\x4c\x80\x21\x45\x04\xc9\xdd\xa2\xbc\x1f\x84\xe8\x79\x45" //..L.!E........yE |
// /* 0010 */ "\x20\x8a\xe0\x18\x05\x88\x90\x03\x06\x81\x08\x24\xa5\x06\x31\x96" // ..........$..1. |
// /* 0020 */ "\x31\xa4\xe2\x6d\xa6\x20\xf2\x02\x10\xaa\xcb\x78\xd5\x31\x33\x9a" //1..m. .....x.13. |
// /* 0030 */ "\xa0\x0c\xd3\xc5\x71\xd0\x9a\x81\x7a\x13\x44\xfa\xef\x43\xfb\x2a" //....q...z.D..C.* |
// /* 0040 */ "\xbc\xf4\x7f\xa0\xa1\x76\xdf\x81\x4b\x99\x23\x89\xdd\x55\xca\x09" //.....v..K.#..U.. |
// /* 0050 */ "\xc9\x9e\x3a\x0b\xc0\x2f\x41\x78\x03\xe3\x86\x80\x9e\xd9\xfa\x1f" //..:../Ax........ |
// /* 0060 */ "\xb0\xe5\xe4\x30\x84\x0e\x59\xf8\xf0\x3f\xb9\x00\x13\xee\x3a\x02" //...0..Y..?....:. |
// /* 0070 */ "\x30\x00\x5c\xfd\xb5\x40\x0f\x87\x43\x89\xdc\x8c\xf4\x7b\xa9\x73" //0....@..C....{.s |
// /* 0080 */ "\x9f\x2a\xd9\x82\x3f\x5b\xed\xef\x74\xbc\x60\x6c\xc0\xa1\x8c\x01" //.*..?[..t.`l.... |
// /* 0090 */ "\xb4\xf1\xf0\x13\xa5\x7b\xa0\x2c\xfc\xd9\xfd\x6e\x87\xb3\x8a\x7d" //.....{.,...n...} |
// /* 00a0 */ "\x9f\xe5\xcb\x6a\x01\x26\xd3\x5c\x73\x79\x18\xa0\x75\xc9\xce\x00" //...j.&..sy..u... |
// /* 00b0 */ "\xe4\x5f\xda\x80\xf0\xb1\x23\xa0\xb4\xf4\x0c\xbe\x76\x68\x0c\x39" //._....#.....vh.9 |
// /* 00c0 */ "\xcf\xf9\xb8\xcb\xaa\x00\x98\x68\x39\xe4\xea\xf3\xe0\x11\xc7\xc4" //.......h9....... |
// /* 00d0 */ "\x11\x89\xd5\x5c\xe3\x67\x8d\xc4\xfc\xa9\xc4\xed\xcf\xde\xf1\xc3" //.....g.......... |
// /* 00e0 */ "\xc2\x94\xbb\x6f\xe8\xd1\x00\x76\x2c\x1c\x1c\xf4\x1b\x12\x74\x47" //...o...v,.....tG |
// /* 00f0 */ "\x85\x67\x8e\x64\xf8\x1e\x3f\x2c\xac\xd3\xbf\x9b\xd3\x2e\x89\xf4" //.g.d..?,........ |
// /* 0100 */ "\x0d\xed\x68\x03\x29\xc0\x3d\x2f\x28\x80\xbc\x5f\x60\x7d\x06\xe0" //..h.).=/(.._`}.. |
// /* 0110 */ "\x17\xf2\x4f\x91\x9d\x24\x03\x3f\x7a\x58\x7f\x80\x0e\xc9\xe6\x57" //..O..$.?zX.....W |
// /* 0120 */ "\xcd\x02\xfb\x21\xea\x59\xf1\xfd\xfa\x05\xf5\xe0\x13\xc4\x4e\xa9" //...!.Y........N. |
// /* 0130 */ "\xb3\xef\x71\x21\x0f\x24\xb7\xdd\x80\x4a\x47\x55\x80\x2b\x42\x57" //..q!.$...JGU.+BW |
// /* 0140 */ "\xca\x7d\xf9\x9f\x5d\xfe\x53\xa1\x02\xa0\x09\xc2\x01\x50\x04\xaf" //.}..].S......P.. |
// /* 0150 */ "\xdf\xc0\x71\x5b\x20\x67\x16\x4f\xa8\x5c\xd8\x1e\x9c\x90\x57\xcf" //..q[ g.O......W. |
// /* 0160 */ "\x6a\xc7\x98\x20\x0f\xc6\xb0\x08\xf5\xec\xc0\x21\x9d\x9f\xec\xba" //j.. .......!.... |
// /* 0170 */ "\x2e\x86\x7d\x6c\xa1\x63\xb4\x03\x08\x45\x40\x0e\x4b\xe9\x97\x8d" //..}l.c...E@.K... |
// /* 0180 */ "\xe3\x0d\xfb\xaa\x00\x8b\x34\xef\xe0\x3d\xfc\xce\x01\xf1\xf5\xe0" //......4..=...... |
// /* 0190 */ "\x0c\xb1\x8f\xe6\xbd\x44\xc5\x94\x61\x9c\x4f\xf0\xc0\x04\xce\x12" //.....D..a.O..... |
// /* 01a0 */ "\xc0\x43\x38\x20\x0c\x12\x7d\x8a\x11\x8c\x3d\x10\x55\x00\x5a\x5a" //.C8 ..}...=.U.ZZ |
// /* 01b0 */ "\xd6\x02\xc1\x04\xfb\x05\xf3\x5e\x33\x88\x26\x27\x6e\x89\x31\x8e" //.......^3.&'n.1. |
// /* 01c0 */ "\x23\x16\x70\x96\x88\x0d\xd2\x38\x33\x89\xfe\x10\x21\x06\x3f\x17" //#.p....83...!.?. |
// /* 01d0 */ "\xc4\x39\xcc\x05\x8f\x87\x5b\x80\xe8\x13\x89\x84\x4d\xa6\xb5\x00" //.9....[.....M... |
// /* 01e0 */ "\x4e\x74\x4a\x80\x2f\x11\x17\x40\xe6\x26\x35\x7b\xa6\x28\x8c\x38" //NtJ./..@.&5{.(.8 |
// /* 01f0 */ "\x14\xfd\xe1\x96\x17\x10\x73\xe4\x9e\x25\x6a\x80\x2e\x3b\xbd\x54" //......s..%j..;.T |
// /* 0200 */ "\x01\x25\xbc\x1f\x01\x1c\x05\xc0\x18\x97\x9d\xdb\xcd\xc2\x05\xc7" //.%.............. |
// /* 0210 */ "\xf1\x4b\x5a\xa8\xf0\x0c\x65\x35\x50\x21\x0e\x02\xb9\x70\x16\x8e" //.KZ...e5P!...p.. |
// /* 0220 */ "\x84\x08\x11\x4e\x08\x0b\x54\x01\x7d\xde\xed\xf6\xc0\x25\xce\x7e" //...N..T.}....%.~ |
// /* 0230 */ "\xec\x0c\xfc\x63\x01\xc1\xd2\x62\x00\x06\xa4\xa8\x96\x55\xb8\x1c" //...c...b.....U.. |
// /* 0240 */ "\x51\xa6\xd3\x57\x1c\x4e\x82\xc0\x06\x6e\x83\x0a\x25\xce\x39\x08" //Q..W.N...n..%.9. |
// /* 0250 */ "\xc5\x8a\x2c\x08\x86\x97\x63\x56\xc0\xc5\x19\x56\x5b\x87\x22\x99" //..,...cV...V[.". |
// /* 0260 */ "\x15\xd9\x42\xa7\xbd\xe2\xcd\x00\x00\xed\x08\x42\x09\xc2\x21\x82" //..B........B..!. |
// /* 0270 */ "\xc0\x58\x1e\xe9\x89\x94\x10\x16\xa4\xac\x93\x3a\x83\x18\xc0\x6d" //.X.........:...m |
// /* 0280 */ "\x8b\x57\x39\xe6\x0a\x60\x51\x2c\x02\x70\xab\x00\x5d\x00\x2e\x40" //.W9..`Q,.p..]..@ |
// /* 0290 */ "\x17\x00\x0b\x20\x0b\xa0\x05\x30\x05\x50\x02\x48\x30\x45\xa0\x00" //... ...0.P.H0E.. |
// /* 02a0 */ "\x49\xb9\x84\x7e\x0c\x00\x3e\x41\x82\x38\x58\x2c\x40\x15\x82\x64" //I..~..>A.8X,@..d |
// /* 02b0 */ "\xc3\x4c\xcc\x23\xf8\x23\xf9\x00\x15\x90\x05\xe0\xb2\x40\xe3\x23" //.L.#.#.......@.# |
// /* 02c0 */ "\x08\xfc\x0f\x05\x94\x05\x30\x4e\x30\x75\x8f\xe6\x2c\x02\xbf\x99" //......0N0u..,... |
// /* 02d0 */ "\x82\x5c\x8c\x5f\x32\x07\x98\x02\xfb\x9d\x3e\x64\x40\xa0\x03\xd8" //..._2.....>d@... |
// /* 02e0 */ "\x28\x8d\x80\x1e\x43\xf0\x2c\x15\xbe\xc1\x37\x08\x1b\x08\xf8\x00" //(...C.,...7..... |
// /* 02f0 */ "\xfe\x00\x08\x7d\x39\xc1\x25\x6e\xec\x2f\xa6\xb0\x0a\xe1\x3e\x67" //...}9.%n./....>g |
// /* 0300 */ "\xc9\x82\x01\xec\x13\x9d\x1f\x24\xc0\x3d\x82\x7c\xe3\xe4\xa0\x03" //.......$.=.|.... |
// /* 0310 */ "\xdf\x6e\xe4\x02\xbe\x14\x60\xbc\x3a\xf4\x83\xf5\x82\xc5\x39\x80" //.n....`.:.....9. |
// /* 0320 */ "\x42\xb8\x00\x1e\x2d\xb6\x02\x76\xca\x10\x10\x08\x61\x70\xe8\xa0" //B...-..v....ap.. |
// /* 0330 */ "\x08\x63\xe5\x45\x80\x0c\x04\x7c\x07\x00\xda\xb1\x0d\xf3\x0a\x3e" //.c.E...|.......> |
// /* 0340 */ "\x3e\x43\x0f\xd7\xd7\x9e\x58\x72\x9d\xf6\x54\x41\x8a\x34\x0a\xe7" //>C....Xr..TA.4.. |
// /* 0350 */ "\x35\xb6\x49\x68\xb6\x78\xac\x06\xd7\x1d\xa2\x8c\x51\xa9\x37\xfb" //5.Ih.x......Q.7. |
// /* 0360 */ "\xf8\x10\x17\xd3\x5a\xe3\xac\xb6\x78\xac\x0a\xd1\x15\xb7\xcb\x59" //....Z...x......Y |
// /* 0370 */ "\x86\x28\xc0\x9d\xd6\xa0\x7f\xeb\x63\x6a\x8e\xdc\x65\xad\x03\x14" //.(......cj..e... |
// /* 0380 */ "\x60\xbf\x99\x16\xd9\x2d\xce\x6a\xd4\x31\x46\x0f\x6d\xfa\x0a\x80" //`....-.j.1F.m... |
// /* 0390 */ "\x18\x7f\x74\x75\xc6\x5a\x2f\xcd\x74\x80\x04\x03\x01\xb6\x49\x70" //..tu.Z/.t.....Ip |
// /* 03a0 */ "\x44\xd0\x17\x08\x7f\x2c\xf1\x5c\x10\xfe\x1c\xe1\x96\xb9\xcd\x45" //D....,.........E |
// /* 03b0 */ "\xf9\x01\x84\xc0\x60\x36\xff\xcb\x23\xff\x8c\x1f\x44\xc3\xc2\x8a" //....`6..#...D... |
// /* 03c0 */ "\xdd\x78\x5d\x96\xff\x90\x42\x5f\x5e\x05\x26\xc2\x64\x9c\xd6\xe7" //.x]...B_^.&.d... |
// /* 03d0 */ "\xf5\x06\xff\x9c\x07\xb2\x8c\x51\xb8\xb2\x3c\x00\x6c\xf1\x2b\xc4" //.......Q..<.l.+. |
// /* 03e0 */ "\x0a\x80\x18\x59\x80\x4f\x82\x42\xd8\x09\x95\x73\x9a\x8d\x79\x99" //...Y.O.B...s..y. |
// /* 03f0 */ "\x71\x96\x8d\x31\x79\x35\x69\xf9\x21\x52\x1a\x80\x18\x60\x40\x0f" //q..1y5i.!R...`@. |
// /* 0400 */ "\xcf\x8f\x3f\x40\x9b\x10\xc5\x1b\xf2\xb0\x8e\xf9\x8f\xd4\x6b\x6c" //..?@..........kl |
// /* 0410 */ "\x97\xe8\x5d\x40\x14\x28\xc0\x87\xd6\x4c\x0c\xa6\xa7\x05\x31\x8c" //..]@.(...L....1. |
// /* 0420 */ "\x51\x88\x43\x7c\x80\x09\xfb\x88\x15\xba\x4b\x68\x8a\x8d\x7c\x95" //Q.C|......Kh..|. |
// /* 0430 */ "\x40\x14\x64\xa0\x06\x06\x79\x67\x7d\xc0\xc4\xc1\x36\xfc\x51\xde" //@.d...yg}...6.Q. |
// /* 0440 */ "\x52\x01\x0e\x01\x64\x00\x64\xc8\xf8\x00\x10\x00"                 //R...d.d..... |
// Sent dumped on RDP Client (5) 1100 bytes |
// Listener closed |
// Incoming socket 5 (ip=10.10.47.175) |
// Socket RDP Client (5) : closing connection |
// RDP Client (0): total_received=1778, total_sent=19531 |
} /* end indata */;

