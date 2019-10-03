//
//  TextureManager.cpp
//  2dgameengine
//
//  Created by Adriano Sabo on 02/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* fileName) {
    SDL_Surface* surface = IMG_Load(fileName);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

void TextureManager::Draw(SDL_Texture* texture, SDL_Rect sourceRectangle, SDL_Rect destinationRectangle, SDL_RendererFlip flip) {
    SDL_RenderCopyEx(Game::renderer, texture, &sourceRectangle, &destinationRectangle, 0.0, NULL, flip);
}
