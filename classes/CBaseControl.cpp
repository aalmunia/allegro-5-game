#include "CBaseControl.h"

CBaseControl::CBaseControl() {

}

CBaseControl::~CBaseControl() {

}

void CBaseControl::subscribeToEvent(ALLEGRO_EVENT oEventSubscribe) {
    this->_vecSubscribedEvents.push_back(oEventSubscribe);
}

void CBaseControl::setPosition(unsigned int iXPos, unsigned int iYPos) {
    this->_posX = iXPos;
    this->_posY = iYPos;
}

unsigned int CBaseControl::getXPosition() {
    return this->_posX;
}

unsigned int CBaseControl::getYPosition() {
    return this->_posY;
}
