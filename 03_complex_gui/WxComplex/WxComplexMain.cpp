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
const long WxComplexFrame::ID_BUTTON1 = wxNewId();
const long WxComplexFrame::ID_BUTTON2 = wxNewId();
const long WxComplexFrame::ID_STATICLINE1 = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM1_REAL = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM2_REAL = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM1_IMG = wxNewId();
const long WxComplexFrame::ID_TEXTCTRL_NUM2_IMG = wxNewId();
const long WxComplexFrame::ID_STATICTEXT_RES_REAL = wxNewId();
const long WxComplexFrame::ID_STATICTEXT_RES_IMG = wxNewId();
const long WxComplexFrame::idMenuQuit = wxNewId();
const long WxComplexFrame::idMenuAbout = wxNewId();
const long WxComplexFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WxComplexFrame,wxFrame)
    //(*EventTable(WxComplexFrame)
    //*)
END_EVENT_TABLE()

WxComplexFrame::WxComplexFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(WxComplexFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1217,772));
    Move(wxPoint(-1,-1));
    ButtonSum = new wxButton(this, ID_BUTTON_SUM, _("+"), wxPoint(24,40), wxSize(40,40), 0, wxDefaultValidator, _T("ID_BUTTON_SUM"));
    ButtonSub = new wxButton(this, ID_BUTTON_SUB, _("-"), wxPoint(24,96), wxSize(40,40), 0, wxDefaultValidator, _T("ID_BUTTON_SUB"));
    ButtonMul = new wxButton(this, ID_BUTTON1, _("X"), wxPoint(24,152), wxSize(40,40), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    ButtonDiv = new wxButton(this, ID_BUTTON2, _("/"), wxPoint(24,208), wxSize(40,40), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxPoint(96,160), wxSize(312,5), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    TextCtrlNum1Real = new wxTextCtrl(this, ID_TEXTCTRL_NUM1_REAL, wxEmptyString, wxPoint(104,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL_NUM1_REAL"));
    TextCtrlNum2Real = new wxTextCtrl(this, ID_TEXTCTRL_NUM2_REAL, wxEmptyString, wxPoint(104,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL_NUM2_REAL"));
    TextCtrlNum1Img = new wxTextCtrl(this, ID_TEXTCTRL_NUM1_IMG, wxEmptyString, wxPoint(264,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL_NUM1_IMG"));
    TextCtrlNum2Img = new wxTextCtrl(this, ID_TEXTCTRL_NUM2_IMG, wxEmptyString, wxPoint(264,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL_NUM2_IMG"));
    StaticTextResReal = new wxStaticText(this, ID_STATICTEXT_RES_REAL, wxEmptyString, wxPoint(112,224), wxSize(104,20), 0, _T("ID_STATICTEXT_RES_REAL"));
    StaticTextResImg = new wxStaticText(this, ID_STATICTEXT_RES_IMG, wxEmptyString, wxPoint(240,224), wxSize(152,20), 0, _T("ID_STATICTEXT_RES_IMG"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON_SUM,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonSumClick);
    Connect(ID_BUTTON_SUB,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonSubClick);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonMulClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&WxComplexFrame::OnButtonDivClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&WxComplexFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&WxComplexFrame::OnAbout);
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

