//
//  Entity.h
//  2dgameengine
//
//  Created by Adriano Sabo on 01/10/19.
//  Copyright © 2019 Adriano Sabo. All rights reserved.
//

#ifndef Entity_h
#define Entity_h

#include <vector>
#include <string>
#include <map>
#include "./EntityManager.h"
#include "./Component.h"

class EntityManager;
class Component;

class Entity {
private:
    EntityManager& manager;
    bool isActive;
    std::vector<Component*> components;
    std::map<const std::type_info*, Component*> componentTypeMap;
public:
    std::string name;
    Entity(EntityManager& manager);
    Entity(EntityManager& manager, std::string name);
    void Update(float deltaTime);
    void Render();
    void Destroy();
    bool IsActive() const;
    void ListAllComponents() const;
    
    template <typename T, typename... TArgs>
    T& AddComponent(TArgs&&... args) {
        T* newComponent(new T(std::forward<TArgs>(args)...));
        newComponent->owner = this;
        components.emplace_back(newComponent);
        componentTypeMap[&typeid(*newComponent)] = newComponent;
        newComponent->Initialize();
        return *newComponent;
    }
    
    template <typename T>
    T* GetComponent() {
        return static_cast<T*>(componentTypeMap[&typeid(T)]);
    }
};

#endif
