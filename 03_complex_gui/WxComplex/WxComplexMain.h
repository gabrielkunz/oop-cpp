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
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

#include "Complex.h"

class WxComplexFrame: public wxFrame
{
    public:

        WxComplexFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~WxComplexFrame();

    private:

        //(*Handlers(WxComplexFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButtonSumClick(wxCommandEvent& event);
        void OnButtonSubClick(wxCommandEvent& event);
        void OnButtonMulClick(wxCommandEvent& event);
        void OnButtonDivClick(wxCommandEvent& event);
        void OnButtonSumClick1(wxCommandEvent& event);
        //*)

        //(*Identifiers(WxComplexFrame)
        static const long ID_BUTTON_SUM;
        static const long ID_BUTTON_SUB;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICLINE1;
        static const long ID_TEXTCTRL_NUM1_REAL;
        static const long ID_TEXTCTRL_NUM2_REAL;
        static const long ID_TEXTCTRL_NUM1_IMG;
        static const long ID_TEXTCTRL_NUM2_IMG;
        static const long ID_STATICTEXT_RES_REAL;
        static const long ID_STATICTEXT_RES_IMG;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(WxComplexFrame)
        wxButton* ButtonDiv;
        wxButton* ButtonMul;
        wxButton* ButtonSub;
        wxButton* ButtonSum;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticTextResImg;
        wxStaticText* StaticTextResReal;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrlNum1Img;
        wxTextCtrl* TextCtrlNum1Real;
        wxTextCtrl* TextCtrlNum2Img;
        wxTextCtrl* TextCtrlNum2Real;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXCOMPLEXMAIN_H
