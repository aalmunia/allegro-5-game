#ifndef CBASECONTROL_H
#define CBASECONTROL_H

#include <vector>
#include <allegro5/allegro5.h>

class CBaseControl
{
    public:
        CBaseControl();
        virtual ~CBaseControl();
        void subscribeToEvent(ALLEGRO_EVENT oEventSubscribe);

    protected:
        std::vector<ALLEGRO_EVENT> _vecSubscribedEvents;
        int _posX;
        int _posY;
    private:
};

#endif // CBASECONTROL_H
