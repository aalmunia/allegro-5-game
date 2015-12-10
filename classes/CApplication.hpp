#include <iostream>
#include <vector>
#include <allegro5/allegro5.h>
#include <allegro5/keyboard.h>
#include <allegro5/keycodes.h>

class CApplication {
    public:
        CApplication();
        ~CApplication();
        void setWindowDimensions(int iWidth, int iHeight);
        void initApplication();
        void showWindow();
        bool mainLoop();
    private:
        int _iWindowWidth = 0;
        int _iWindowHeight = 0;
        bool _isYellow = true;
        ALLEGRO_DISPLAY* _pDisplay = NULL;
        ALLEGRO_EVENT_QUEUE* _pEventQueue = NULL;
};
