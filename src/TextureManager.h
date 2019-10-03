//
//  TextureManager.h
//  2dgameengine
//
//  Created by Adriano Sabo on 02/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef TextureManager_h
#define TextureManager_h

#include "./Game.h"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* fileName);
    static void Draw(SDL_Texture* texture, SDL_Rect sourceRectangle, SDL_Rect destinationRectangle, SDL_RendererFlip flip);
};

#endif
