//
//  EntityManager.hpp
//  2dgameengine
//
//  Created by Adriano Sabo on 01/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef EntityManager_h
#define EntityManager_h

#include <vector>
#include "Entity.h"
#include "Component.h"

class EntityManager {
private:
    std::vector<Entity*> entities;
public:
    void ClearData();
    void Update(float deltaTime);
    void Render();
    bool HasNoEntities();
    Entity& AddEntity(std::string entityName);
    std::vector<Entity*> GetEntities() const;
    unsigned int GetEntityCount();
};

#endif /* EntityManager_hpp */
