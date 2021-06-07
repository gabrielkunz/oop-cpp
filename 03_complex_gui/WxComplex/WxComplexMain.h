/***************************************************************
 * Name:      WxComplexMain.h
 * Purpose:   Defines Application Frame
 * Author:    Gabriel Kunz ()
 * Created:   2021-06-07
 * Copyright: Gabriel Kunz (https://github.com/gabrielkunz)
 * License:
 **************************************************************/

#ifndef WXCOMPLEXMAIN_H
#define WXCOMPLEXMAIN_H

//(*Headers(WxComplexFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class WxComplexFrame: public wxFrame
{
    public:

        WxComplexFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~WxComplexFrame();

    private:

        //(*Handlers(WxComplexFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(WxComplexFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(WxComplexFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXCOMPLEXMAIN_H
