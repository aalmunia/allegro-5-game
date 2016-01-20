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
        void setPosition(unsigned int iXPos, unsigned int iYPos);
        unsigned int getXPosition();
        unsigned int getYPosition();
        virtual void handleEvent(ALLEGRO_EVENT oEventHandle) = 0;
        std::vector<ALLEGRO_EVENT> _vecSubscribedEvents;
    protected:
        unsigned int _posX;
        unsigned int _posY;
    private:
};

#endif // CBASECONTROL_H
