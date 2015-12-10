#include "CApplication.hpp"

CApplication::CApplication() {

}

CApplication::~CApplication() {

}

void CApplication::setWindowDimensions(int iWidth, int iHeight) {
    this->_iWindowWidth = iWidth;
    this->_iWindowHeight = iHeight;
}

void CApplication::initApplication() {
    if(this->_iWindowWidth > 0 && this->_iWindowHeight > 0) {
        al_init();
        al_install_keyboard();
        this->_pDisplay = al_create_display(this->_iWindowWidth, this->_iWindowHeight);
        al_clear_to_color(al_map_rgb(255, 255, 0));
        this->_pEventQueue = al_create_event_queue();
        al_register_event_source(this->_pEventQueue, al_get_keyboard_event_source());
    } else {
        std::cout << "La ventana no puede inicializarse" << std::endl;
    }
}

void CApplication::showWindow() {
    if(this->_pDisplay != NULL) {

    } else {
        std::cout << "Hay que inicializar la ventana primero" << std::endl;
    }
}

bool CApplication::mainLoop() {
    ALLEGRO_EVENT event;
    while(true) {
        if(al_get_next_event(this->_pEventQueue, &event)) {
            if(event.type == ALLEGRO_EVENT_KEY_DOWN) {
                if(event.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
                    al_destroy_event_queue(this->_pEventQueue);
                    return 0;
                }
                if(event.keyboard.keycode == ALLEGRO_KEY_ENTER) {
                    if(this->_isYellow) {
                        al_clear_to_color(al_map_rgb(0,0,255));
                        this->_isYellow = false;
                    } else {
                        al_clear_to_color(al_map_rgb(255,255,0));
                        this->_isYellow = true;
                    }
                }
            }
        }
        al_flip_display();
    }
}
