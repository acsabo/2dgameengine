//
//  Game.hpp
//  2dgameengine
//
//  Created by Adriano Sabo on 30/09/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class Game {
private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
public:
    Game();
    ~Game();
    bool IsRunning() const;
    void Initialize(int width, int height);
    void ProcessInput();
    void Update();
    void Render();
    void Destroy();
};

#endif /* Game_hpp */
