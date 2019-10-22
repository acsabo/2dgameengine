#include <emscripten.h>
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
    //Game *game = new Game();
    emscripten_set_main_loop(callRender, 0, 0);
    game->Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);

//    while (game->IsRunning()) {
//        game->ProcessInput();
//        game->Update();
        //game->Render();
 //   }

   // game->Destroy();

    return 1;
}
