#ifndef CDICE_H
#define CDICE_H

#include <iostream>
#include <random>
#include <sys/time.h>

class CDice
{
    public:
        CDice();
        virtual ~CDice();
        void setRandomStyle(bool bOldStyle) { this->_bIsCStyleRandom = bOldStyle; }
        int throwDice(int iFaces, int iDice);
        // std::random_device _oRandDevice;
        // std::mt19937 _oNumberGenerator;
        // std::uniform_int_distribution <int> _oIntDistribution;
    protected:
    private:
        bool _bIsCStyleRandom = true;
};

#endif // CDICE_H
