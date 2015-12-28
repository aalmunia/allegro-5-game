#include <iostream>
#include <allegro5/allegro5.h>
#include "classes/CImage.h"
#include "classes/CApplication.h"
#include "classes/cdice.h"

using namespace std;

int main()
{
    CApplication* pMyApp = new CApplication();
    pMyApp->setWindowDimensions(150, 150);
    pMyApp->initApplication();
    pMyApp->mainLoop();
    return 0;

    /* CDice *oDado = new CDice();
    std::cout << "Salida de ejecución: " << std::endl;
    for(int i = 0; i < 15; i++) {
        std::cout << "Resultado de dado lanzado: " << oDado->throwDice(8, 1) << std::endl;
    }
    delete oDado;
    return 0; */

    // return 0;
}
