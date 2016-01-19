#include <iostream>
#include <allegro5/allegro5.h>
#include "classes/CImage.h"
#include "classes/CApplication.h"
#include "classes/CDice.h"

using namespace std;

int main()
{
    CApplication* pMyApp = new CApplication();
    pMyApp->setWindowDimensions(150, 150);
    std::string sTitulo("Framework Allegro 5");
    pMyApp->initApplication();
    pMyApp->setWindowTitle(sTitulo);
    pMyApp->mainLoop();

    /* CDice *oDado = new CDice();
    CDice *oDado_2 = new CDice();
    std::cout << "Salida de ejecución: " << std::endl;
    for(int i = 0; i < 40; i++) {
        std::cout << "Resultado de dado 1 lanzado: " << oDado->throwDice(100, 1) << std::endl;
        std::cout << "Resultado de dado 2 lanzado: " << oDado_2->throwDice(100, 1) << std::endl;
    }
    delete oDado;
    delete oDado_2; */

    return 0;
}
