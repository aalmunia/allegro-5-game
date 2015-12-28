#include "cdice.h"
#include <iostream>
#include <random>

CDice::CDice() {
    // this->_oNumberGenerator(this->_oRandDevice());
}

CDice::~CDice()
{
    //dtor
}

/* int CDice::throwDice(int iFaces, int iDice) {
    std::mt19937 numGenerator(this->_oRandDevice());
    int iReturn = 0;
    for(int i = 0; i < iDice; i++) {
        iReturn += this->_oIntDistribution(1, 8);
    }
    return iReturn;
} */
