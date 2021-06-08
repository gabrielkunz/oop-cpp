/***************************************************************
 * Name:      WxComplexMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Gabriel Kunz ()
 * Created:   2021-06-07
 * Copyright: Gabriel Kunz (https://github.com/gabrielkunz)
 * License:
 **************************************************************/

#include "WxComplexMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(WxComplexFrame)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(WxComplexFrame)
const long WxComplexFrame::ID_BUTTON_SUM = wxNewId();
const long WxComplexFrame::ID_BUTTON_SUB = wxNewId();
const long WxComplexFrame::ID_BUTTON_MUL = wxNewId();
const long WxComplexFrame::ID_BUTTON_DIV = wxNewId();
const long WxComplexFrame::ID_STATICLINE1 = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM1_REAL = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM2_REAL = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM1_IMG = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM2_IMG = wxNewId();
const long WxComplexFrame::ID_STATICTEXT_RES_REAL = wxNewId();
const long WxComplexFrame::ID_STATICTEXT_RES_IMG = wxNewId();
const long WxComplexFrame::ID_STATICTEXT1 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT2 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT3 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT4 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT5 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT6 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT7 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT8 = wxNewId();
const long WxComplexFrame::ID_STATICTEXT9 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WxComplexFrame,wxFrame)
    //(*EventTable(WxComplexFrame)
    //*)
END_EVENT_TABLE()

WxComplexFrame::WxComplexFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(WxComplexFrame)
    Create(parent, wxID_ANY, _("Complex Number Calculator"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(417,179));
    Move(wxPoint(-1,-1));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    ButtonSum = new wxButton(this, ID_BUTTON_SUM, _("+"), wxPoint(16,16), wxSize(30,30), 0, wxDefaultValidator, _T("ID_BUTTON_SUM"));
    ButtonSub = new wxButton(this, ID_BUTTON_SUB, _("-"), wxPoint(16,56), wxSize(30,30), 0, wxDefaultValidator, _T("ID_BUTTON_SUB"));
    ButtonMul = new wxButton(this, ID_BUTTON_MUL, _("X"), wxPoint(16,96), wxSize(30,30), 0, wxDefaultValidator, _T("ID_BUTTON_MUL"));
    ButtonDiv = new wxButton(this, ID_BUTTON_DIV, _("/"), wxPoint(16,136), wxSize(30,30), 0, wxDefaultValidator, _T("ID_BUTTON_DIV"));
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxPoint(72,96), wxSize(336,5), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    TextCtrlNum1Real = new wxTextCtrl(this, ID_TEXTCTRL_NUM1_REAL, wxEmptyString, wxPoint(96,16), wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_NUM1_REAL"));
    TextCtrlNum2Real = new wxTextCtrl(this, ID_TEXTCTRL_NUM2_REAL, wxEmptyString, wxPoint(96,56), wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_NUM2_REAL"));
    TextCtrlNum1Img = new wxTextCtrl(this, ID_TEXTCTRL_NUM1_IMG, wxEmptyString, wxPoint(264,16), wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_NUM1_IMG"));
    TextCtrlNum2Img = new wxTextCtrl(this, ID_TEXTCTRL_NUM2_IMG, wxEmptyString, wxPoint(264,56), wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_NUM2_IMG"));
    StaticTextResReal = new wxStaticText(this, ID_STATICTEXT_RES_REAL, _("0"), wxPoint(96,136), wxSize(120,20), wxALIGN_RIGHT, _T("ID_STATICTEXT_RES_REAL"));
    StaticTextResImg = new wxStaticText(this, ID_STATICTEXT_RES_IMG, _("0"), wxPoint(264,136), wxSize(120,20), wxALIGN_RIGHT, _T("ID_STATICTEXT_RES_IMG"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("N1:"), wxPoint(64,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("N2:"), wxPoint(64,64), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("+"), wxPoint(232,24), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("+"), wxPoint(232,64), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("i"), wxPoint(256,24), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("i"), wxPoint(256,64), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Result:"), wxPoint(72,112), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("+"), wxPoint(232,136), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("i"), wxPoint(256,136), wxDefaultSize, 0, _T("ID_STATICTEXT9"));

    Connect(ID_BUTTON_SUM,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonSumClick);
    Connect(ID_BUTTON_SUB,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonSubClick);
    Connect(ID_BUTTON_MUL,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonMulClick);
    Connect(ID_BUTTON_DIV,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonDivClick);
    //*)

}

WxComplexFrame::~WxComplexFrame()
{
    //(*Destroy(WxComplexFrame)
    //*)
}

void WxComplexFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void WxComplexFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void WxComplexFrame::OnButtonSumClick(wxCommandEvent& event)
{
    double num1_real = 0;
    TextCtrlNum1Real->GetValue().ToDouble(&num1_real);
    double num1_img = 0;
    TextCtrlNum1Img->GetValue().ToDouble(&num1_img);
    double num2_real = 0;
    TextCtrlNum2Real->GetValue().ToDouble(&num2_real);
    double num2_img = 0;
    TextCtrlNum2Img->GetValue().ToDouble(&num2_img);

    auto * num1 = new Complex(num1_real, num1_img);
    auto * num2 = new Complex(num2_real, num2_img);

    auto * result = new Complex();
    result = num1->sum(num2);

    StaticTextResReal->SetLabel(std::to_string(result->getRealPart()));
    StaticTextResImg->SetLabel(std::to_string(result->getImaginaryPart()));

    delete num1;
    delete num2;
    delete result;
}


void WxComplexFrame::OnButtonSubClick(wxCommandEvent& event)
{

}

void WxComplexFrame::OnButtonMulClick(wxCommandEvent& event)
{

}

void WxComplexFrame::OnButtonDivClick(wxCommandEvent& event)
{

}

