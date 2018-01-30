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
   Copyright (C) Wallix 2010-2016
   Author(s): Clément Moroldo
*/


#pragma once

#include "utils/log.hpp"

#include "core/channel_list.hpp"
#include "core/channel_names.hpp"
#include "configs/autogen/enums.hpp"

#include "mod/rdp/rdp.hpp"
#include "mod/vnc/vnc.hpp"



#include "client_input_output_api.hpp"

#include "client_channel_managers/client_channel_RDPSND_manager.hpp"
#include "client_channel_managers/client_channel_CLIPRDR_manager.hpp"
#include "client_channel_managers/client_channel_RDPDR_manager.hpp"
#include "client_channel_managers/client_channel_remoteapp_manager.hpp"






class ClientRedemption : public ClientRedemptionIOAPI
{

    private:
    class ClipboardServerChannelDataSender : public VirtualChannelDataSender
    {
    public:
        mod_api        * _callback;

        ClipboardServerChannelDataSender() = default;


        void operator()(uint32_t total_length, uint32_t flags, const uint8_t* chunk_data, uint32_t chunk_data_length) override {
            //std::cout << "operator()  server " << (int)flags  << std::endl;
            InStream chunk(chunk_data, chunk_data_length);
            this->_callback->send_to_mod_channel(channel_names::cliprdr, chunk, total_length, flags);
        }
    };

    class ClipboardClientChannelDataSender : public VirtualChannelDataSender
    {
    public:
        FrontAPI            * _front;
        CHANNELS::ChannelDef  _channel;

        ClipboardClientChannelDataSender() = default;


        void operator()(uint32_t total_length, uint32_t flags, const uint8_t* chunk_data, uint32_t chunk_data_length) override {
            //std::cout << "operator()  client " << (int)flags  << std::endl;

            this->_front->send_to_channel(this->_channel, chunk_data, total_length, chunk_data_length, flags);
        }
    };


public:
    // io API
    ClientOutputGraphicAPI      * implClientOutputGraphic;
    ClientIOClipboardAPI        * implClientIOClipboard;
    ClientOutputSoundAPI        * implClientOutputSound;
    ClientInputSocketAPI        * implClientInputSocket;
    ClientInputMouseKeyboardAPI * implClientInputMouseKeyboard;



    // RDP
    ClipboardServerChannelDataSender _to_server_sender;
    ClipboardClientChannelDataSender _to_client_sender;
    CHANNELS::ChannelDefArray   cl;
    Font                 _font;
    std::string          _error;
    std::string   error_message;
    UdevRandom           gen;
    std::array<uint8_t, 28> server_auto_reconnect_packet_ref;
    Inifile ini;
    ClientExecute client_execute;
    std::unique_ptr<mod_api> unique_mod;


    enum : int {
        CHANID_CLIPDRD = 1601,
        CHANID_RDPDR   = 1602,
        CHANID_WABDIAG = 1603,
        CHANID_RDPSND  = 1604,
        CHANID_RAIL    = 1605
    };

    //  RDP Channel managers
    ClientChannelRDPSNDManager    clientChannelRDPSNDManager;
    ClientChannelCLIPRDRManager   clientChannelCLIPRDRManager;
    ClientChannelRDPDRManager     clientChannelRDPDRManager;
    ClientChannelRemoteAppManager clientChannelRemoteAppManager;



    // VNC mod
    bool is_apple;
    Theme      theme;
    WindowListCaps windowListCaps;
    ClientExecute exe_vnc;



    // replay mod
    std::unique_ptr<Capture>  capture;
    gdi::GraphicApi    * graph_capture;



    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //------------------------
    //      CONSTRUCTOR
    //------------------------

    ClientRedemption(char* argv[], int argc, RDPVerbose verbose,
                    ClientOutputGraphicAPI *implClientOutputGraphic,
                    ClientIOClipboardAPI * implClientIOClipboard,
                    ClientOutputSoundAPI * implClientOutputSound,
                    ClientInputSocketAPI * implClientInputSocket,
                    ClientInputMouseKeyboardAPI * implClientInputMouseKeyboard)
        : ClientRedemptionIOAPI(argv, argc, verbose)

        , implClientOutputGraphic( implClientOutputGraphic)
        , implClientIOClipboard (implClientIOClipboard)
        , implClientOutputSound (implClientOutputSound)
        , implClientInputSocket (implClientInputSocket)
        , implClientInputMouseKeyboard(implClientInputMouseKeyboard)

        , clientChannelRDPSNDManager(this->verbose, this, this->implClientOutputSound)
        , clientChannelCLIPRDRManager(this->verbose, this, this->implClientIOClipboard)
        , clientChannelRDPDRManager(this->verbose, this)
        , clientChannelRemoteAppManager(this->verbose, this, this->implClientOutputGraphic, this->implClientInputMouseKeyboard)

        , client_execute(*(this), this->info.window_list_caps, false)
        , is_apple(true)
        , exe_vnc(*(this),  this->windowListCaps,  false)

    {
        this->implClientIOClipboard->set_client(this);
        this->implClientOutputSound->set_client(this);
        this->implClientInputSocket->set_client(this);
        this->implClientInputMouseKeyboard->set_client(this);
        this->implClientOutputGraphic->set_drawn_client(this);

        this->client_execute.set_verbose(bool( (RDPVerbose::rail & this->verbose) | (RDPVerbose::rail_dump & this->verbose) ));

        this->disconnect("");

//         if (commandIsValid == COMMAND_VALID) {
//             this->connect();
//
//         } else {
//             std::cout << "Argument(s) required to connect: ";
//             if (!(commandIsValid & NAME_GOTTEN)) {
//                 std::cout << "-n [user_name] ";
//             }
//             if (!(commandIsValid & PWD_GOTTEN)) {
//                 std::cout << "-w [password] ";
//             }
//             if (!(commandIsValid & IP_GOTTEN)) {
//                 std::cout << "-i [ip_server] ";
//             }
//             if (!(commandIsValid & PORT_GOTTEN)) {
//                 std::cout << "-p [port] ";
//             }
//             std::cout << std::endl;
//
//             this->disconnect("");
//         }
    }

    ~ClientRedemption() {}




    virtual void update_keylayout() override {
        this->implClientInputMouseKeyboard->update_keylayout();
        this->keymap.init_layout(this->info.keylayout);
    }


    const CHANNELS::ChannelDefArray & get_channel_list(void) const override {
        return this->cl;
    }

     void delete_replay_mod() override {
        this->replay_mod.reset();
    }

//     void writeWindowsConf() override {
//         this->windowsData.write();
//     }

    void closeFromScreen() override {
        this->implClientOutputGraphic->closeFromScreen();
    }


    bool load_replay_mod(std::string const & movie_dir, std::string const & movie_name, timeval begin_read, timeval end_read) override {
         try {


            this->replay_mod.reset(new ReplayMod( *this
                                                , movie_dir.c_str() //(this->REPLAY_DIR + "/").c_str()
                                                , movie_name.c_str()
                                                , 0             //this->info.width
                                                , 0             //this->info.height
                                                , this->_error
                                                , this->_font
                                                , true
                                                , begin_read
                                                , end_read
                                                , Screen_Qt::BALISED_FRAME
                                                //, FileToGraphic::Verbose::rdp_orders
                                                , to_verbose_flags(0)
                                                ));

            return true;

        } catch (const Error & err) {
            LOG(LOG_ERR, "new ReplayMod error %s", err.errmsg());
        }

        if (this->replay_mod.get() == nullptr) {
            this->implClientOutputGraphic->dropScreen();
            const std::string errorMsg("Cannot read movie \""+movie_name+ "\".");
            LOG(LOG_INFO, "%s", errorMsg.c_str());
            std::string labelErrorMsg("<font color='Red'>"+errorMsg+"</font>");
            this->disconnect(labelErrorMsg);
        }
        return false;
    }

    void replay(std::string const & movie_dir_, std::string const & movie_path_) override {
        if (movie_path_.empty()) {
             //this->implClientOutputGraphic->readError(movie_path_);
            return;
        }

        this->is_replaying = true;
        //this->setScreenDimension();
        if (this->load_replay_mod(movie_dir_, movie_path_, {0, 0}, {0, 0})) {
            this->info.width = this->replay_mod->get_dim().w;
            this->info.height = this->replay_mod->get_dim().h;

            this->implClientOutputGraphic->reset_cache(this->info.width, this->info.height);

            this->implClientOutputGraphic->create_screen(movie_dir_, movie_path_);

            //this->connected = true;

            if (this->replay_mod->get_wrm_version() == WrmVersion::v2) {
                this->implClientInputMouseKeyboard->pre_load_movie();
            }
            this->implClientOutputGraphic->show_screen();
        }
    }


    virtual void  disconnect(std::string const & error) override {
        if (this->mod != nullptr) {
            TimeSystem timeobj;
            this->mod->disconnect(timeobj.get_time().tv_sec);
            this->mod = nullptr;
        }

        if (this->implClientInputSocket != nullptr) {

            this->implClientInputSocket->disconnect();
            ;
        }

        if (this->socket != nullptr) {
            delete (this->socket);
            this->socket = nullptr;
            LOG(LOG_INFO, "Disconnected from [%s].", this->target_IP.c_str());
        }


        this->implClientInputMouseKeyboard->set_ErrorMsg(error);
        this->implClientInputMouseKeyboard->init_form();
    }



    bool init_mod()  {

        try {
            this->mod = nullptr;

            switch (this->mod_state) {
                case MOD_RDP:
                {
                    ModRDPParams mod_rdp_params( this->user_name.c_str()
                                    , this->user_password.c_str()
                                    , this->target_IP.c_str()
                                    , this->local_IP.c_str()
                                    , 2
                                    , ini.get<cfg::font>()
                                    , ini.get<cfg::theme>()
                                    , this->server_auto_reconnect_packet_ref
                                    , this->close_box_extra_message_ref
                                    , this->verbose
                                    //, RDPVerbose::security | RDPVerbose::cache_persister | RDPVerbose::capabilities  | RDPVerbose::channels | RDPVerbose::connection
                                    //, RDPVerbose::basic_trace | RDPVerbose::connection
                                    );

                    mod_rdp_params.device_id                       = "device_id";
                    mod_rdp_params.enable_tls                      = this->modRDPParamsData.enable_tls;
                    mod_rdp_params.enable_nla                      = this->modRDPParamsData.enable_nla;
                    mod_rdp_params.enable_fastpath                 = true;
                    mod_rdp_params.enable_mem3blt                  = true;
                    mod_rdp_params.enable_new_pointer              = true;
                    mod_rdp_params.enable_glyph_cache              = true;
                    mod_rdp_params.enable_ninegrid_bitmap          = true;
                    std::string allow_channels = "*";
                    mod_rdp_params.allow_channels                  = &allow_channels;
                    mod_rdp_params.deny_channels = nullptr;
                    mod_rdp_params.enable_rdpdr_data_analysis = false;

                    this->unique_mod.reset(new mod_rdp( *(this->socket)
                                                , *(this)
                                                , this->info
                                                , ini.get_ref<cfg::mod_rdp::redir_info>()
                                                , this->gen
                                                , this->timeSystem
                                                , mod_rdp_params
                                                , this->authentifier
                                                , this->reportMessage
                                                , this->ini
                                                ));

                }
                    break;

            case MOD_RDP_REMOTE_APP:
            {

                    ModRDPParams mod_rdp_params( this->user_name.c_str()
                                    , this->user_password.c_str()
                                    , this->target_IP.c_str()
                                    , this->local_IP.c_str()
                                    , 2
                                    , ini.get<cfg::font>()
                                    , ini.get<cfg::theme>()
                                    , this->server_auto_reconnect_packet_ref
                                    , this->close_box_extra_message_ref
                                    , this->verbose
                                    //, RDPVerbose::security | RDPVerbose::cache_persister | RDPVerbose::capabilities  | RDPVerbose::channels | RDPVerbose::connection
                                    //, RDPVerbose::basic_trace | RDPVerbose::connection
                                    );

                    mod_rdp_params.device_id                       = "device_id";
                    mod_rdp_params.enable_tls                      = this->modRDPParamsData.enable_tls;
                    mod_rdp_params.enable_nla                      = this->modRDPParamsData.enable_nla;
                    mod_rdp_params.enable_fastpath                 = true;
                    mod_rdp_params.enable_mem3blt                  = true;
                    mod_rdp_params.enable_new_pointer              = true;
                    mod_rdp_params.enable_glyph_cache              = true;
                    mod_rdp_params.enable_ninegrid_bitmap          = true;
                    std::string allow_channels = "*";
                    mod_rdp_params.allow_channels                  = &allow_channels;
                    mod_rdp_params.deny_channels = nullptr;
                    mod_rdp_params.enable_rdpdr_data_analysis = false;

                    this->client_execute.enable_remote_program(true);
                    mod_rdp_params.remote_program = true;
                    mod_rdp_params.client_execute = &(this->client_execute);
                    mod_rdp_params.remote_program_enhanced = INFO_HIDEF_RAIL_SUPPORTED;
                    mod_rdp_params.use_client_provided_remoteapp = this->ini.get<cfg::mod_rdp::use_client_provided_remoteapp>();
                    mod_rdp_params.use_session_probe_to_launch_remote_program = this->ini.get<cfg::context::use_session_probe_to_launch_remote_program>();

                    this->info.width = this->implClientOutputGraphic->screen_max_width;
                    this->info.height = this->implClientOutputGraphic->screen_max_height;

                    this->unique_mod.reset(new mod_rdp( *(this->socket)
                                                , *(this)
                                                , this->info
                                                , ini.get_ref<cfg::mod_rdp::redir_info>()
                                                , this->gen
                                                , this->timeSystem
                                                , mod_rdp_params
                                                , this->authentifier
                                                , this->reportMessage
                                                , this->ini
                                                ));

                    std::string target_info = this->ini.get<cfg::context::target_str>();
                    target_info += ":";
                    target_info += this->ini.get<cfg::globals::primary_user_id>();

                    this->client_execute.set_target_info(target_info.c_str());

            }
                break;

            case MOD_VNC:
            {
                 this->unique_mod.reset(new mod_vnc( *(this->socket)
                                                    , this->user_name.c_str()
                                                    , this->user_password.c_str()
                                                    , *(this)
                                                    , this->info.width
                                                    , this->info.height
                                                    , this->ini.get<cfg::font>()
                                                    , nullptr
                                                    , nullptr
                                                    , this->theme
                                                    , this->info.keylayout
                                                    , 0
                                                    , true
                                                    , true
                                                    , "0,1,-239"
                                                    , false
                                                    , true
                                                    , mod_vnc::ClipboardEncodingType::UTF8
                                                    , VncBogusClipboardInfiniteLoop::delayed
                                                    , this->reportMessage
                                                    , this->is_apple
                                                    , &(this->exe_vnc)
                                                    , to_verbose_flags(0xfffffffd)
                                                   )
                                        );
            }
                break;

            }

            this->mod = this->unique_mod.get();

            this->mod->invoke_asynchronous_graphic_task(mod_api::AsynchronousGraphicTask::none);


        } catch (const Error &) {
            this->mod = nullptr;
            return false;
        }

         return true;
    }

    void init_socket() {
        unique_fd client_sck = ip_connect(this->target_IP.c_str(),
                                          this->port,
                                          3,                //nbTry
                                          1000             //retryDelay
                                          );
        this->client_sck = client_sck.fd();

        if (this->client_sck > 0) {
            try {

                this->socket = new SocketTransport( this->user_name.c_str()
                                                , std::move(client_sck)
                                                , this->target_IP.c_str()
                                                , this->port
                                                , std::chrono::milliseconds(1000)
                                                , to_verbose_flags(0)
                                                //, SocketTransport::Verbose::dump
                                                , &this->error_message
                                                );

                LOG(LOG_INFO, "Connected to [%s].", this->target_IP.c_str());

            } catch (const std::exception &) {
                const std::string errorMsg("Cannot connect to [" + target_IP +  "].");
                std::string windowErrorMsg(errorMsg+" Socket error.");
                LOG(LOG_WARNING, "%s", windowErrorMsg.c_str());
                this->disconnect("<font color='Red'>"+windowErrorMsg+"</font>");
                return;
            }

        } else {
            const std::string errorMsg("Cannot connect to [" + target_IP +  "].");
            std::string windowErrorMsg(errorMsg+" Invalid ip or port.");
            LOG(LOG_WARNING, "%s", windowErrorMsg.c_str());
            this->disconnect("<font color='Red'>"+windowErrorMsg+"</font>");
            return;
        }
    }







    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //------------------------
    //      CONTROLLERS
    //------------------------



    virtual void connect() override {

        this->clientChannelRemoteAppManager.clear();
        this->cl.clear_channels();

        this->is_replaying = false;
        if (this->is_recording) {
            this->set_capture();
        }


        if (this->mod_state != MOD_VNC) {

            if (this->mod_state == MOD_RDP_REMOTE_APP) {
                this->info.remote_program |= INFO_RAIL;
                this->info.remote_program_enhanced |= INFO_HIDEF_RAIL_SUPPORTED;
                this->info.rail_caps.RailSupportLevel =   TS_RAIL_LEVEL_SUPPORTED
    //                                                     | TS_RAIL_LEVEL_DOCKED_LANGBAR_SUPPORTED
                                                        | TS_RAIL_LEVEL_SHELL_INTEGRATION_SUPPORTED
                                                        //| TS_RAIL_LEVEL_LANGUAGE_IME_SYNC_SUPPORTED
                                                        | TS_RAIL_LEVEL_SERVER_TO_CLIENT_IME_SYNC_SUPPORTED
                                                        | TS_RAIL_LEVEL_HIDE_MINIMIZED_APPS_SUPPORTED
                                                        | TS_RAIL_LEVEL_WINDOW_CLOAKING_SUPPORTED
                                                        | TS_RAIL_LEVEL_HANDSHAKE_EX_SUPPORTED;

                this->info.window_list_caps.WndSupportLevel = TS_WINDOW_LEVEL_SUPPORTED;
                this->info.window_list_caps.NumIconCaches = 3;  // 3;
                // 12;
                this->info.window_list_caps.NumIconCacheEntries = 12;

                CHANNELS::ChannelDef channel_rail { channel_names::rail
                                            , GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED |
                                                GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS |
                                                GCC::UserData::CSNet::CHANNEL_OPTION_SHOW_PROTOCOL
                                            , CHANID_RAIL
                                            };
                this->cl.push_back(channel_rail);

            } else {

                if (this->enable_shared_virtual_disk) {
                    CHANNELS::ChannelDef channel_rdpdr{ channel_names::rdpdr
                                                    , GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED |
                                                        GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS
                                                    , CHANID_RDPDR
                                                    };
                    this->cl.push_back(channel_rdpdr);
                }
            }

            if (this->enable_shared_clipboard) {
                CHANNELS::ChannelDef channel_cliprdr { channel_names::cliprdr
                                                    , GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED |
                                                    GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS |
                                                    GCC::UserData::CSNet::CHANNEL_OPTION_SHOW_PROTOCOL
                                                    , CHANID_CLIPDRD
                                                    };
                this->_to_client_sender._channel = channel_cliprdr;
                this->cl.push_back(channel_cliprdr);
            }

    //         CHANNELS::ChannelDef channel_WabDiag { channel_names::wabdiag
    //                                              , GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED |
    //                                                GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS
    //                                              , CHANID_WABDIAG
    //                                              };
    //         this->cl.push_back(channel_WabDiag);

            if (modRDPParamsData.enable_sound) {
                CHANNELS::ChannelDef channel_audio_output{ channel_names::rdpsnd
                                                        , GCC::UserData::CSNet::CHANNEL_OPTION_INITIALIZED |
                                                        GCC::UserData::CSNet::CHANNEL_OPTION_COMPRESS |
                                                        GCC::UserData::CSNet::CHANNEL_OPTION_SHOW_PROTOCOL
                                                        , CHANID_RDPSND
                                                        };
                this->cl.push_back(channel_audio_output);
            }

        }

        this->init_socket();

        this->update_keylayout();
//             this->trans_cache = new QPixmap(this->info.width, this->info.height);
//             this->trans_cache->fill(Qt::transparent);

        if (this->mod_state != MOD_RDP_REMOTE_APP) {
            this->implClientOutputGraphic->reset_cache(this->info.width, this->info.height);
        } else {
            this->implClientOutputGraphic->reset_cache(this->implClientOutputGraphic->screen_max_width, this->implClientOutputGraphic->screen_max_height);
        }
        this->implClientOutputGraphic->create_screen();



        if (this->init_mod()) {

             if (this->implClientInputSocket->start_to_listen(this->client_sck, this->mod)) {
//                 this->implClientOutputGraphic->form->hide();
                if (mod_state != MOD_RDP_REMOTE_APP) {
                    this->implClientOutputGraphic->show_screen();
                }
                this->connected = true;

                return;
             }
        }

        const std::string errorMsgfail("Error: Mod Initialization failed.");
        std::string labelErrorMsg("<font color='Red'>"+errorMsgfail+"</font>");
        this->implClientOutputGraphic->dropScreen();
        this->disconnect(labelErrorMsg);
    }

    void disconnexionReleased() override{
        this->is_replaying = false;
        this->connected = false;
        this->implClientOutputGraphic->dropScreen();
        this->disconnect("");

    }

    virtual void set_capture() {
        Inifile ini;
            ini.set<cfg::video::capture_flags>(CaptureFlags::wrm | CaptureFlags::png);
            ini.set<cfg::video::png_limit>(0);
            ini.set<cfg::video::disable_keyboard_log>(KeyboardLogFlags::none);
            ini.set<cfg::session_log::enable_session_log>(0);
            ini.set<cfg::session_log::keyboard_input_masking_level>(KeyboardInputMaskingLevel::unmasked);
            ini.set<cfg::context::pattern_kill>("");
            ini.set<cfg::context::pattern_notify>("");
            ini.set<cfg::debug::capture>(0xfffffff);
            ini.set<cfg::video::capture_groupid>(1);
            ini.set<cfg::video::record_tmp_path>(this->REPLAY_DIR);
            ini.set<cfg::video::record_path>(this->REPLAY_DIR);
            ini.set<cfg::video::hash_path>(this->REPLAY_DIR+std::string("/signatures"));
            time_t now;
            time(&now);
            std::string data(ctime(&now));
            std::string data_cut(data.c_str(), data.size()-1);
            std::string name("-Replay");
            std::string movie_name(data_cut+name);
            ini.set<cfg::globals::movie_path>(movie_name.c_str());
            ini.set<cfg::globals::trace_type>(TraceType::localfile);
            ini.set<cfg::video::wrm_compression_algorithm>(WrmCompressionAlgorithm::no_compression);
            ini.set<cfg::video::frame_interval>(std::chrono::duration<unsigned, std::ratio<1, 100>>(1));
            ini.set<cfg::video::break_interval>(std::chrono::seconds(600));

            UdevRandom gen;

            //NullReportMessage * reportMessage  = nullptr;
            struct timeval time;
            gettimeofday(&time, nullptr);
            PngParams png_params = {0, 0, ini.get<cfg::video::png_interval>(), 100, 0, true, this->info.remote_program, ini.get<cfg::video::rt_display>()};
            VideoParams videoParams = {Level::high, this->info.width, this->info.height, 0, 0, 0, std::string(""), true, true, false, ini.get<cfg::video::break_interval>(), 0};
            OcrParams ocr_params = { ini.get<cfg::ocr::version>(),
                                        static_cast<ocr::locale::LocaleId::type_id>(ini.get<cfg::ocr::locale>()),
                                        ini.get<cfg::ocr::on_title_bar_only>(),
                                        ini.get<cfg::ocr::max_unrecog_char_rate>(),
                                        ini.get<cfg::ocr::interval>(),
                                        0
                                    };

            std::string record_path = this->REPLAY_DIR.c_str() + std::string("/");

            WrmParams wrmParams(
                    this->info.bpp
                , this->cctx
                , gen
                , this->fstat
                , ini.get<cfg::video::hash_path>().c_str()
                , std::chrono::duration<unsigned int, std::ratio<1l, 100l> >{60}
                , ini.get<cfg::video::break_interval>()
                , WrmCompressionAlgorithm::no_compression
                , 0
            );

            PatternParams patternCheckerParams {"", "", 0};
            SequencedVideoParams sequenced_video_params {};
            FullVideoParams full_video_params = { false };
            MetaParams meta_params {
                MetaParams::EnableSessionLog::No,
                MetaParams::HideNonPrintable::No
            };
            KbdLogParams kbd_log_params {false, false, false, false};

            CaptureParams captureParams;
            captureParams.now = tvtime();
            captureParams.basename = movie_name.c_str();
            captureParams.record_tmp_path = record_path.c_str();
            captureParams.record_path = record_path.c_str();
            captureParams.groupid = 0;
            captureParams.report_message = nullptr;

            DrawableParams drawableParams;
            drawableParams.width  = this->info.width;
            drawableParams.height = this->info.height;
            drawableParams.rdp_drawable = nullptr;

            this->capture = std::make_unique<Capture>(captureParams
                                            , drawableParams
                                            , true, wrmParams
                                            , false, png_params
                                            , false, patternCheckerParams
                                            , false, ocr_params
                                            , false, sequenced_video_params
                                            , false, full_video_params
                                            , false, meta_params
                                            , false, kbd_log_params
                                            , videoParams
                                            , nullptr
                                            , Rect(0, 0, 0, 0)
                                            );

            this->capture.get()->gd_drawable->width();

            this->graph_capture = this->capture.get()->get_graphic_api();
    }




    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //--------------------------------
    //      CHANNELS FUNCTIONS
    //--------------------------------

    void send_clipboard_format() override {
        this->clientChannelCLIPRDRManager.send_FormatListPDU();
    }

    void send_to_channel( const CHANNELS::ChannelDef & channel, uint8_t const * data, size_t , size_t chunk_size, int flags) override {

        const CHANNELS::ChannelDef * mod_channel = this->cl.get_by_name(channel.name);
        if (!mod_channel) {
            return;
        }

        InStream chunk(data, chunk_size);

        switch (channel.chanid) {

            case CHANID_CLIPDRD: this->clientChannelCLIPRDRManager.receive(chunk, flags);
                break;

            case CHANID_RDPDR: this->clientChannelRDPDRManager.receive(chunk);
                break;

            case CHANID_RDPSND: this->clientChannelRDPSNDManager.receive(chunk);
                break;

            case CHANID_RAIL:    this->clientChannelRemoteAppManager.receive(chunk);
                break;
/*
            case CHANID_WABDIAG:
            {
                int len = chunk.in_uint32_le();
                std::string msg(reinterpret_cast<char const *>(chunk.get_current()), len);

                if        (msg == std::string("ConfirmationPixelColor=White")) {
                    this->wab_diag_question = true;
                    this->answer_question(0xffffffff);
                    this->asked_color = 0xffffffff;
                } else if (msg == std::string("ConfirmationPixelColor=Black")) {
                    this->wab_diag_question = true;
                    this->answer_question(0xff000000);
                    this->asked_color = 0xff000000;
                } else {
                    LOG(LOG_INFO, "SERVER >> wabdiag %s", msg.c_str());
                }
            }
                break;

            default: LOG(LOG_WARNING, " send_to_channel unknow channel id: %d", channel.chanid);
                break;*/
        }
    }



    void draw(const RDP::RAIL::ActivelyMonitoredDesktop  & cmd) {
        LOG(LOG_INFO, "RDP::RAIL::ActivelyMonitoredDesktop");
        //cmd.log(LOG_INFO);

        this->clientChannelRemoteAppManager.draw(cmd);
    }

    void draw(const RDP::RAIL::NewOrExistingWindow            & cmd) {
        LOG(LOG_INFO, "RDP::RAIL::NewOrExistingWindow");

        this->clientChannelRemoteAppManager.draw(cmd);
    }

    void draw(const RDP::RAIL::DeletedWindow            & cmd) {
        LOG(LOG_INFO, "RDP::RAIL::DeletedWindow");
        //cmd.log(LOG_INFO);
        this->clientChannelRemoteAppManager.draw(cmd);
    }

    void draw(const RDP::RAIL::WindowIcon            & ) {
        LOG(LOG_INFO, "RDP::RAIL::WindowIcon");
//         cmd.log(LOG_INFO);
    }

    void draw(const RDP::RAIL::CachedIcon            & ) {
        LOG(LOG_INFO, "RDP::RAIL::CachedIcon");
//         cmd.log(LOG_INFO);
    }

    void draw(const RDP::RAIL::NewOrExistingNotificationIcons            & cmd) {
        LOG(LOG_INFO, "RDP::RAIL::NewOrExistingNotificationIcons");
        cmd.log(LOG_INFO);
    }

    void draw(const RDP::RAIL::DeletedNotificationIcons            & cmd) {
        LOG(LOG_INFO, "RDP::RAIL::DeletedNotificationIcons");
        cmd.log(LOG_INFO);
    }

    void draw(const RDP::RAIL::NonMonitoredDesktop            & cmd) {
        LOG(LOG_INFO, "RDP::RAIL::NonMonitoredDesktop");
        cmd.log(LOG_INFO);
    }



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //--------------------------------
    //    SOCKET EVENTS FUNCTIONS
    //--------------------------------

    void callback() override {

        if (this->_recv_disconnect_ultimatum) {
            this->implClientOutputGraphic->dropScreen();
            std::string labelErrorMsg("<font color='Red'>Disconnected by server</font>");
            this->disconnect(labelErrorMsg);
//             delete(this->cache);
//             this->cache = nullptr;
//             this->trans_cache = nullptr;
            this->capture = nullptr;
            this->graph_capture = nullptr;
            this->_recv_disconnect_ultimatum = false;
        }

        if (this->mod != nullptr) {
            try {
                this->mod->draw_event(time(nullptr), *(this));

            } catch (const Error & e) {
                this->implClientOutputGraphic->dropScreen();
                const std::string errorMsg("Error: Connection to [" + this->target_IP +  "] is closed. Error "+ e.errmsg());
                LOG(LOG_INFO, "%s", errorMsg.c_str());
                std::string labelErrorMsg("<font color='Red'>"+errorMsg+"</font>");

                this->disconnect(labelErrorMsg);
            }
        }
    }


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //-----------------------------
    //       DRAW FUNCTIONS
    //-----------------------------

    using ClientRedemptionIOAPI::draw;

    void draw(const RDPPatBlt & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(cmd, clip, color_ctx);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip, gdi::ColorCtx(gdi::Depth::from_bpp(this->info.bpp), &this->mod_palette));
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }


    void draw(const RDPOpaqueRect & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(cmd, clip, color_ctx);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip, gdi::ColorCtx(gdi::Depth::from_bpp(this->info.bpp), &this->mod_palette));
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }


    void draw(const RDPBitmapData & bitmap_data, const Bitmap & bmp) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            //bitmap_data.log(LOG_INFO, "RDPBitmapData");
            LOG(LOG_INFO, "RDPBitmapData");
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(bitmap_data, bmp);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(bitmap_data, bmp);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }


    void draw(const RDPLineTo & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(cmd, clip, color_ctx);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip, gdi::ColorCtx(gdi::Depth::from_bpp(this->info.bpp), &this->mod_palette));
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }


    void draw(const RDPScrBlt & cmd, Rect clip) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(cmd, clip);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }


    void draw(const RDPMemBlt & cmd, Rect clip, const Bitmap & bitmap) override {
         if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
         }

        this->implClientOutputGraphic->draw(cmd, clip, bitmap);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip, bitmap);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }


    void draw(const RDPMem3Blt & cmd, Rect clip, gdi::ColorCtx color_ctx, const Bitmap & bitmap) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(cmd, clip, color_ctx, bitmap);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip, gdi::ColorCtx(gdi::Depth::from_bpp(this->info.bpp), &this->mod_palette), bitmap);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }

/*        if (this->wab_diag_question) {
            this->answer_question(this->asked_color);
        }*/
    }


    void draw(const RDPDestBlt & cmd, Rect clip) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        this->implClientOutputGraphic->draw(cmd, clip);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }

    }

    void draw(const RDPMultiDstBlt & cmd, Rect clip) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }


    }

    void draw(const RDPMultiOpaqueRect & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }

        (void) color_ctx;

    }

    void draw(const RDP::RDPMultiPatBlt & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }
        (void) color_ctx;

    }

    void draw(const RDP::RDPMultiScrBlt & cmd, Rect clip) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }


    }

    void draw(const RDPGlyphIndex & cmd, Rect clip, gdi::ColorCtx color_ctx, const GlyphCache & gly_cache) override {
         if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
         }

        this->implClientOutputGraphic->draw(cmd, clip, color_ctx, gly_cache);

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(cmd, clip, gdi::ColorCtx(gdi::Depth::from_bpp(this->info.bpp), &this->mod_palette), gly_cache);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }
    }

    void draw(const RDPPolygonSC & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            //cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }
        (void) cmd;
        (void) clip;
        (void) color_ctx;

    }

    void draw(const RDPPolygonCB & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            //cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }
        (void) cmd;
        (void) clip;
        (void) color_ctx;

    }

    void draw(const RDPPolyline & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }
        (void) color_ctx;

    }

    void draw(const RDPEllipseSC & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }
        (void) cmd;
        (void) clip;
        (void) color_ctx;

    }

    void draw(const RDPEllipseCB & cmd, Rect clip, gdi::ColorCtx color_ctx) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            //cmd.log(LOG_INFO, clip);
            LOG(LOG_INFO, "========================================\n");
        }
        (void) cmd;
        (void) clip;
        (void) color_ctx;

    }

    void draw(const RDP::FrameMarker & order) override {
        if (bool(this->verbose & RDPVerbose::graphics)) {
            LOG(LOG_INFO, "--------- FRONT ------------------------");
            //order.log(LOG_INFO);
            LOG(LOG_INFO, "========================================\n");
        }

        if (this->is_recording && !this->is_replaying) {
            this->graph_capture->draw(order);
            struct timeval time;
            gettimeofday(&time, nullptr);
            this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
        }

    }

    void draw(RDPNineGrid const & /*cmd*/, Rect /*clip*/, gdi::ColorCtx /*color_ctx*/, Bitmap const & /*bmp*/) override {

    }

    void set_pointer(Pointer const & cursor) override {
        this->implClientOutputGraphic->set_pointer(cursor);
    }

//     void update_pointer_position(uint16_t xPos, uint16_t yPos) override {
//
//         if (this->is_replaying) {
// //             this->screen->_trans_cache.fill(Qt::transparent);
//             QRect nrect(xPos, yPos, this->cursor_image.width(), this->cursor_image.height());
//
// //             this->screen->paintTransCache().drawImage(nrect, this->cursor_image);
//         }
//     }

    ResizeResult server_resize(int width, int height, int bpp) override {
        return this->implClientOutputGraphic->server_resize(width, height, bpp);
    }

    void end_update() override {

        if ((this->connected || this->is_replaying)) {

            this->implClientOutputGraphic->end_update();

            if (this->is_recording && !this->is_replaying) {
                this->graph_capture->end_update();
                struct timeval time;
                gettimeofday(&time, nullptr);
                this->capture.get()->periodic_snapshot(time, this->mouse_data.x, this->mouse_data.y, false);
            }
        }
    }

    bool must_be_stop_capture() override {
//         this->is_pipe_ok = false;
//         if (this->capture) {
//             this->capture.reset(nullptr);
//             this->graph_capture = nullptr;
//             this->drawn_client->is_recording = false;
//
//             return true;
//         }
        return false;
    }

};


// ///////////////////////////////
// // APPLICATION
// int main(int argc, char** argv){
//
//     //" -name QA\\administrateur -pwd '' -ip 10.10.46.88 -p 3389";
//
//     // sudo python ./sesman/sesmanlink/WABRDPAuthentifier
//
//     // sudo nano /etc/rdpproxy/rdpproxy.ini
//
//     // /etc/rdpproxy/cert
//
//     // bjam san -j4 rdpproxy
//
//     // sudo bin/gcc-4.9.2/san/rdpproxy -nf
//
//     // sudo bin/gcc-4.9.2/release/link-static/rdpproxy -nf
//
//     //bjam -s qt=4 debug client_rdp_Qt4 && bin/gcc-4.9.2/debug/threading-multi/client_rdp_Qt4
//
//     // sed '/usr\/include\/qt4\|threading-multi\/src\/Qt4\/\|in expansion of macro .*Q_OBJECT\|Wzero/,/\^/d' &&
//
//     // ../../tools/c++-analyzer/bt  bin/gcc-4.9.2/debug/threading-multi/client_rdp_Qt4
//
//     // ../packager/packager.py --version 1.0.0 --no-entry-changelog --build-package
//
//     // sudo dpkg -i /home/qa/Desktop/redemption_0.9.740bjessie_amd64.deb
//
//
//
//     QApplication app(argc, argv);
//
//     QtIOGraphicMouseKeyboard * graphic_control_api = new QtIOGraphicMouseKeyboard();
//     QtInputOutputClipboard * clipboard_api = new QtInputOutputClipboard(graphic_control_api->get_static_qwidget());
//     QtOutputSound          * sound_api = new QtOutputSound(graphic_control_api->get_static_qwidget());
//     QtInputSocket          * socket_api = new QtInputSocket(graphic_control_api->get_static_qwidget());
//
//
//     // RDPVerbose::rdpdr_dump | RDPVerbose::cliprdr;
//     //RDPVerbose::graphics | RDPVerbose::cliprdr | RDPVerbose::rdpdr;
//     RDPVerbose verbose = to_verbose_flags(0);
//
//     ClientRedemption front_qt(argv, argc, verbose, graphic_control_api, clipboard_api, sound_api, socket_api, graphic_control_api);
//
//
//     app.exec();
//
//     // scp -P 22 -r cmoroldo@10.10.43.46:/home/cmoroldo/Bureau/redemption_test_charge/movie.wrm /home/qa/Desktop/movie_sample_data/
//
//
//     //  xfreerdp /u:x /p: /port:3389 /v:10.10.43.46 /multimon /monitors:2
// }