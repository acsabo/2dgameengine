//
//  main.cpp
//  2dgameengine
//
//  Created by Adriano Sabo on 30/09/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#include "Constants.h"
#include "Game.h"

int main(int argc, char *args[]) {
    Game *game = new Game();
    
    game->Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);
    
    while (game->IsRunning()) {
        game->ProcessInput();
        game->Update();
        game->Render();
    }
    
    game->Destroy();
    
    return 0;
}
