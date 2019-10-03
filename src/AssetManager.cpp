//
//  AssetManager.cpp
//  2dgameengine
//
//  Created by Adriano Sabo on 02/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#include "AssetManager.h"


AssetManager::AssetManager(EntityManager* manager): manager(manager) {
    
}

void AssetManager::ClearData() {
    textures.clear();
}

void AssetManager::AddTexture(std::string textureId, const char* filePath) {
    textures.emplace(textureId, TextureManager::LoadTexture(filePath));
}

SDL_Texture* AssetManager::GetTexture(std::string textureId) {
    return textures[textureId];
}
