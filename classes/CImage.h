#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>

class CImage {
    public:
        CImage();
        ~CImage();
        void initAllegroLib();
        void loadBitmap(const char* sFilename);
        void renderImage();
        void cutBitmap(int iWidth, int iHeight);
    private:
        ALLEGRO_DISPLAY* _pDisplay = NULL;
        ALLEGRO_BITMAP* _pBitmap = NULL;
};
