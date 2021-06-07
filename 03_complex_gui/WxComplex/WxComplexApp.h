/***************************************************************
 * Name:      WxComplexApp.h
 * Purpose:   Defines Application Class
 * Author:    Gabriel Kunz (gabrielkunz@outlook.com)
 * Created:   2021-06-07
 * Copyright: Gabriel Kunz (https://github.com/gabrielkunz)
 * License:
 **************************************************************/

#ifndef WXCOMPLEXAPP_H
#define WXCOMPLEXAPP_H

#include <wx/app.h>

class WxComplexApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // WXCOMPLEXAPP_H
