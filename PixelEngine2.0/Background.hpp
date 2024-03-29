#include <SDL_gpu.h>
#include <vector>

class BackgroundLayer {
public:
    std::vector<SDL_Surface*> surface;
    std::vector<GPU_Image*> texture; // 텍스쳐 데이터를 가지고 있는 GPU_Image
    float parralaxX;
    float parralaxY;
    float moveX;
    float moveY;
    BackgroundLayer(SDL_Surface* texture, float parallaxX, float parallaxY, float moveX, float moveY);
    void init();
};

class Background {
public:
    Uint32 solid;
    std::vector<BackgroundLayer> layers;
    Background(Uint32 solid, std::vector<BackgroundLayer> layers);
    void init();
};

class Backgrounds {
public:
    static Background TEST_OVERWORLD;
};
