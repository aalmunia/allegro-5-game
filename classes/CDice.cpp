#include "CDice.h"

CDice::CDice() {
    timeval time;
    gettimeofday(&time, NULL);
    long millis = (time.tv_sec * 1000) + (time.tv_usec / 1000);
    srand(millis);
}

CDice::~CDice()
{
    //dtor
}

int CDice::throwDice(int iFaces, int iDice) {
    // Dependiendo de como hayamos especificado que sea el método de obtener números
    // aleatorios, así haremos para obtenerlos.
    // Versión C, usando srand() y rand()
    int iReturn = 0;
    if(this->_bIsCStyleRandom) {
        for(int i = 0; i < iDice; i++) {
            int iResult = (rand() % iFaces) + 1;
            iReturn += iResult;
        }
    } else {

    }

    // Versión C++, usando std::random y <random>


    return iReturn;
}
