#ifndef IAPPEVENTHANDLER_H
#define IAPPEVENTHANDLER_H

#include <allegro5/allegro5.h>

class IAppEventHandler
{
    public:
        virtual ~IAppEventHandler() {}
        virtual void handleKeyDownEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleKeyUpEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleMouseAxesEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleMouseButtonDownEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleMouseButtonUpEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleMouseEnterDisplayEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleMouseLeaveDisplayEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleDisplayResizeEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleDisplayCloseEvent(ALLEGRO_EVENT oEvent, bool& bClose) = 0;
        virtual void handleDisplaySwitchOutEvent(ALLEGRO_EVENT oEvent) = 0;
        virtual void handleDisplaySwitchInEvent(ALLEGRO_EVENT oEvent) = 0;
};

#endif // IAPPEVENTHANDLER_H
