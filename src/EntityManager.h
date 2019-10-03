//
//  EntityManager.h
//  2dgameengine
//
//  Created by Adriano Sabo on 01/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef EntityManager_h
#define EntityManager_h

#include "./Entity.h"
#include "./Component.h"
#include <vector>

class EntityManager {
private:
    std::vector<Entity*> entities;
public:
    void ClearData();
    void Update(float deltaTime);
    void Render();
    bool HasNoEntities() const;
    unsigned int GetEntityCount() const;
    void ListAllEntities() const;
    std::vector<Entity*> GetEntities() const;
    Entity& AddEntity(std::string entityName);
};

#endif
