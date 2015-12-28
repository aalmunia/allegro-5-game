#include <iostream>
#include <vector>
#include <allegro5/allegro5.h>
#include <allegro5/keyboard.h>
#include <allegro5/keycodes.h>
#include "iappeventhandler.h"

class CApplication : public IAppEventHandler {
    public:
        CApplication();
        ~CApplication();
        void closeApplication();
        void setWindowDimensions(int iWidth, int iHeight);
        void setWindowBackgroundColor(unsigned char iRed, unsigned char iGreen, unsigned char iBlue);
        void setWindowBackgroundColor(unsigned char iRed, unsigned char iGreen, unsigned char iBlue, unsigned char iAlpha);
        void initApplication();
        void showWindow();
        bool mainLoop();
        void handleKeyDownEvent(ALLEGRO_EVENT oEvent);
        void handleKeyUpEvent(ALLEGRO_EVENT oEvent);
        void handleMouseAxesEvent(ALLEGRO_EVENT oEvent);
        void handleMouseButtonDownEvent(ALLEGRO_EVENT oEvent);
        void handleMouseButtonUpEvent(ALLEGRO_EVENT oEvent);
        void handleMouseEnterDisplayEvent(ALLEGRO_EVENT oEvent);
        void handleMouseLeaveDisplayEvent(ALLEGRO_EVENT oEvent);
        void handleDisplayResizeEvent(ALLEGRO_EVENT oEvent);
        void handleDisplayCloseEvent(ALLEGRO_EVENT oEvent, bool& bClose);
        void handleDisplaySwitchOutEvent(ALLEGRO_EVENT oEvent);
        void handleDisplaySwitchInEvent(ALLEGRO_EVENT oEvent);
    private:
        int _iWindowWidth = 0;
        int _iWindowHeight = 0;
        bool _isYellow = true;
        ALLEGRO_DISPLAY* _pDisplay = NULL;
        ALLEGRO_EVENT_QUEUE* _pEventQueue = NULL;
        ALLEGRO_COLOR _oColorBackground;
};
