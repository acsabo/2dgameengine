//
//  Game.h
//  2dgameengine
//
//  Created by Adriano Sabo on 01/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "./Entity.h"
#include "./Component.h"
#include "./EntityManager.h"

class AssetManager;

class Game {
private:
    bool isRunning;
    SDL_Window *window;
public:
    Game();
    ~Game();
    int ticksLastFrame = 0;
    bool IsRunning() const;
    static SDL_Renderer *renderer;
    static AssetManager* assetManager;
    void LoadLevel(int levelNumber);
    void Initialize(int width, int height);
    void ProcessInput();
    void Update();
    void Render();
    void Destroy();
};

#endif
