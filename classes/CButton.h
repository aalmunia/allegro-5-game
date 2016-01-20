#ifndef CBUTTON_H
#define CBUTTON_H

#include <iostream>
#include <allegro5/allegro5.h>
#include "CBaseControl.h"

class CButton : public CBaseControl
{
    public:
        CButton();
        virtual ~CButton();
        void handleEvent(ALLEGRO_EVENT oEventHandle);
    protected:
    private:
};

#endif // CBUTTON_H
