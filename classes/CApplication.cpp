#include "CApplication.h"

CApplication::CApplication() {

}

CApplication::~CApplication() {

}

void CApplication::setWindowDimensions(int iWidth, int iHeight) {
    this->_iWindowWidth = iWidth;
    this->_iWindowHeight = iHeight;
}

void CApplication::setWindowBackgroundColor(unsigned char iRed, unsigned char iGreen, unsigned char iBlue) {
    /* this->_oColorBackground = al_map_rgba(iRed, iGreen, iBlue, 0);
    al_clear_to_color(this->_oColorBackground); */
    this->setWindowBackgroundColor(iRed, iGreen, iBlue, 0);
}

void CApplication::setWindowBackgroundColor(unsigned char iRed, unsigned char iGreen, unsigned char iBlue, unsigned char iAlpha) {
    this->_oColorBackground = al_map_rgba(iRed, iGreen, iBlue, iAlpha);
    al_clear_to_color(this->_oColorBackground);
}

void CApplication::initApplication() {
    if(this->_iWindowWidth > 0 && this->_iWindowHeight > 0) {
        al_init();
        al_install_keyboard();
        al_install_mouse();
        al_set_new_display_flags(ALLEGRO_WINDOWED);
        al_set_new_display_flags(ALLEGRO_RESIZABLE);
        this->_pDisplay = al_create_display(this->_iWindowWidth, this->_iWindowHeight);
        this->_oColorBackground = al_map_rgba(100, 100, 100, 0);
        al_clear_to_color(this->_oColorBackground);
        this->_pEventQueue = al_create_event_queue();
        // Registrar mas fuentes de eventos, ratón, ventana, pantalla, etc...
        al_register_event_source(this->_pEventQueue, al_get_keyboard_event_source());
        al_register_event_source(this->_pEventQueue, al_get_mouse_event_source());
        al_register_event_source(this->_pEventQueue, al_get_display_event_source(this->_pDisplay));
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
    bool bClose = false;
    while(!bClose) {
        if(al_get_next_event(this->_pEventQueue, &event)) {
            switch(event.type) {

                case ALLEGRO_EVENT_KEY_DOWN:
                    this->handleKeyDownEvent(event);
                break;

                case ALLEGRO_EVENT_KEY_UP:
                    this->handleKeyUpEvent(event);
                break;

                case ALLEGRO_EVENT_MOUSE_AXES:
                    this->handleMouseAxesEvent(event);
                break;

                case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:
                    this->handleMouseButtonDownEvent(event);
                break;

                case ALLEGRO_EVENT_MOUSE_BUTTON_UP:
                    this->handleMouseButtonUpEvent(event);
                break;

                case ALLEGRO_EVENT_DISPLAY_CLOSE:
                    this->handleDisplayCloseEvent(event, bClose);
                break;

                case ALLEGRO_EVENT_DISPLAY_RESIZE:
                    std::cout << "Se ha producido un evento de reescalado" << std::endl;
                    this->handleDisplayResizeEvent(event);
                break;

                case ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY:
                    this->handleMouseEnterDisplayEvent(event);
                break;

                case ALLEGRO_EVENT_MOUSE_LEAVE_DISPLAY:
                    this->handleMouseLeaveDisplayEvent(event);
                break;

                default:
                    std::cout << "El evento producido no tiene un manejador" << std::endl;
                    std::cout << "El ID del evento es: " << event.type << std::endl;
                break;
            }
        }
        al_flip_display();
    }
    return bClose;
}

void CApplication::handleKeyDownEvent(ALLEGRO_EVENT oEvent) {
    /* std::cout << "Estamos en el metodo KEY_DOWN, implementado en la clase CApplication" << std::endl;
    if(oEvent.keyboard.keycode == ALLEGRO_KEY_ENTER) {
        std::cout << "La tecla pulsada es el ENTER" << std::endl;
    }
    if(oEvent.keyboard.keycode == ALLEGRO_KEY_ESCAPE) {
        std::cout << "La tecla pulsada es el ESCAPE" << std::endl;
    } */
}

void CApplication::handleKeyUpEvent(ALLEGRO_EVENT oEvent) {
    /* std::cout << "Estamos en el evento KEY_UP, implementado en la clase CApplication" << std::endl;
    std::cout << "El código ASCII correspondiente a la tecla levantada es: " << oEvent.keyboard.keycode << std::endl; */
}

void CApplication::handleMouseAxesEvent(ALLEGRO_EVENT oEvent) {
    /* std::cout << "Estamos en el evento MOUSE_AXES" << std::endl;
    std::cout << "La coordenada X es: " << oEvent.mouse.x << std::endl;
    std::cout << "La coordenada Y es: " << oEvent.mouse.y << std::endl; */
}

void CApplication::handleMouseButtonDownEvent(ALLEGRO_EVENT oEvent) {
    /* std::cout << "Estamos en el evento MOUSE_DOWN" << std::endl;
    std::cout << "La coordenada X es: " << oEvent.mouse.x << std::endl;
    std::cout << "La coordenada Y es: " << oEvent.mouse.y << std::endl;
    std::cout << "El ID del botón pulsado es: " << oEvent.mouse.button << std::endl; */
}

void CApplication::handleMouseButtonUpEvent(ALLEGRO_EVENT oEvent) {
    /* std::cout << "Estamos en el evento MOUSE_UP" << std::endl;
    std::cout << "La coordenada X es: " << oEvent.mouse.x << std::endl;
    std::cout << "La coordenada Y es: " << oEvent.mouse.y << std::endl; */
}


void CApplication::handleDisplaySwitchInEvent(ALLEGRO_EVENT oEvent) {

}

void CApplication::handleDisplaySwitchOutEvent(ALLEGRO_EVENT oEvent) {

}

void CApplication::handleDisplayResizeEvent(ALLEGRO_EVENT oEvent) {
    al_resize_display(this->_pDisplay, oEvent.display.width, oEvent.display.height);
    al_acknowledge_resize(this->_pDisplay);
    // Esto es lo que hace que se vea correctamente, para cada evento de cambio
    // de tamaño de ventana, debemos volver a pintar toda la escena.
    al_clear_to_color(this->_oColorBackground);
    al_flip_display();
}

void CApplication::handleDisplayCloseEvent(ALLEGRO_EVENT oEvent, bool& bClose) {
    std::cout << "Se ha pulsado el botón de cerrar la ventana" << std::endl;
    al_destroy_display(this->_pDisplay);
    al_destroy_event_queue(this->_pEventQueue);
    bClose = true;
}

void CApplication::handleMouseEnterDisplayEvent(ALLEGRO_EVENT oEvent) {
    std::cout << "Evento MOUSE_ENTER_DISPLAY" << std::endl;
    std::cout << "Posición X: " << oEvent.mouse.x << std::endl;
    std::cout << "Posición Y: " << oEvent.mouse.y << std::endl;
}

void CApplication::handleMouseLeaveDisplayEvent(ALLEGRO_EVENT oEvent) {
    std::cout << "Evento MOUSE_LEAVE_DISPLAY" << std::endl;
    std::cout << "Posición X: " << oEvent.mouse.x << std::endl;
    std::cout << "Posición Y: " << oEvent.mouse.y << std::endl;
}
