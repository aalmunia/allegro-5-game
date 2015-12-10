#include <iostream>
#include <allegro5/allegro5.h>
#include "classes/CImage.hpp"
#include "classes/CApplication.hpp"

using namespace std;

int main()
{
    CApplication* pMyApp = new CApplication();
    pMyApp->setWindowDimensions(100, 100);
    pMyApp->initApplication();
    return pMyApp->mainLoop();
    // return 0;
}
