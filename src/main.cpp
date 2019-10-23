
#ifdef _emscripten
#include <emscripten.h>
#endif

#include <iostream>
#include "./Constants.h"
#include "./Game.h"

Game *game = new Game();

void callRender() {
   if (!game->IsRunning()) return;	
   game->ProcessInput();
   game->Update();
   game->Render();
}

int main(int argc, char *args[]) {
    #ifdef _emscripten
    emscripten_set_main_loop(callRender, 0, 0);
    #endif

    game->Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);
    
    #ifndef _emscripten
    while (game->IsRunning()) {
        game->ProcessInput();
        game->Update();
        game->Render();
    }
    game->Destroy();
    #endif
    
    return 1;
}
