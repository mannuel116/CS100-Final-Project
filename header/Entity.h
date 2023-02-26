/*
    Author: Justin Dang
    >--------------------------------------------
    FUNCTION:
        -> Handles storing and modifying data and stats of an entity.
        -> Use Case:
            -> Can create enemies without having to give them stats
                -> If you want to give the enemy stats, the enemy class should inherit from EntityStats.h
            -> Can create non-interactable(No need for data other than name and origin) npc, but class was 
               developed with intention that we most likely will be interacting with most entities.
    >--------------------------------------------
*/
#ifndef ENTITY_H
#define ENTITY_H
#include "../header/EntityData.h"
#include <algorithm>
#include <string>

using namespace std;

class Entity : public EntityData {
    public:
        enum Path {
            Corporate,
            Nomad,
            Street_Kid
            // Other races go here:
            // Sushi,
            // Pizza hut,
            // help
        };
        // (string _name, Path _origin, entityData _data)
        Entity(string _name, Path _origin, entityData _data){
            name = _name;
            origin = _origin;
            SetMaxHealth(_data.currentHealth);
            SetCurrentHealth(_data.currentHealth);
            SetExperience(_data.experience);
            SetLevel(_data.level);
            SetArmor(_data.armor);
        }
        //(string _name, Path _origin, int startingLevel = 0, double startingHP = 0, double startingArmor = 0, double startingExperience = 0) 
        Entity(string _name, Path _origin, int startingLevel = 0, double startingHP = 0.0, double startingArmor = 0.0, double startingExperience = 0.0){
            name = _name;
            origin = _origin;
            SetMaxHealth(startingHP);
            SetCurrentHealth(startingHP);
            SetExperience(startingExperience);
            SetLevel(startingLevel);
            SetArmor(startingArmor);
        }


        void SetName(string name);
        string Name();
        void SetOrigin(Path path);
        Path Origin();
    private:
        Path origin;
        string name;
};


#endif

