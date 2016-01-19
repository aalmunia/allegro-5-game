#include "CBaseControl.h"

CBaseControl::CBaseControl() {

}

CBaseControl::~CBaseControl() {
    //dtor
}

void CBaseControl::subscribeToEvent(ALLEGRO_EVENT oEventSubscribe) {
    this->_vecSubscribedEvents.push_back(oEventSubscribe);
}
