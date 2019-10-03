//
//  AssetManager.h
//  2dgameengine
//
//  Created by Adriano Sabo on 02/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef AssetManager_h
#define AssetManager_h

#include <map>
#include <string>
#include "./TextureManager.h"
#include "./EntityManager.h"

class AssetManager {
private:
    EntityManager* manager;
    std::map<std::string, SDL_Texture*> textures;
public:
    AssetManager(EntityManager* manager);
    ~AssetManager();
    void ClearData();
    void AddTexture(std::string textureId, const char* filePath);
    SDL_Texture* GetTexture(std::string textureId);
};

#endif
