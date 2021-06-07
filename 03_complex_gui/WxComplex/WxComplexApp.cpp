/***************************************************************
 * Name:      WxComplexApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Gabriel Kunz (gabrielkunz@outlook.com)
 * Created:   2021-06-07
 * Copyright: Gabriel Kunz (https://github.com/gabrielkunz)
 * License:
 **************************************************************/

#include "WxComplexApp.h"

//(*AppHeaders
#include "WxComplexMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(WxComplexApp);

bool WxComplexApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	WxComplexFrame* Frame = new WxComplexFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
