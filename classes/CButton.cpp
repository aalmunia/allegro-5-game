#include "CButton.h"

CButton::CButton()
{
    //ctor
}

CButton::~CButton()
{
    //dtor
}

void CButton::handleEvent(ALLEGRO_EVENT oEventHandle) {
    std::cout << "Lista de eventos " << std::endl;
    for(unsigned int i = 0; i < this->_vecSubscribedEvents.size(); i++) {
        std::cout << this->_vecSubscribedEvents[i].type << std::endl;
    }
    std::cout << std::endl;
}
