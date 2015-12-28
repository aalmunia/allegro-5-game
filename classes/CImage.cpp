#include "CImage.h"

/**
 * Constructor de la clase. Asume que ya hemos realizado las llamadas pertinentes
 * a las funciones de inicialización de las extensiones de allegro 5
 **/
CImage::CImage() {

}

void CImage::initAllegroLib() {
    al_init();
    al_init_image_addon();
    al_init_font_addon();
    this->_pDisplay = al_create_display(600, 480);
    al_set_new_bitmap_flags(ALLEGRO_MEMORY_BITMAP);
    this->_pBitmap = al_load_bitmap("/home/aalmunia/MyCodeTests/cpp/myAllegro5_code/tiles/hyptosis_til-art-batch-2.png");
}

void CImage::loadBitmap(const char* sFilename) {

}

void CImage::renderImage() {
    // al_draw_bitmap(this->_pBitmap, 0, 0, 0);
}

CImage::~CImage() {

}
