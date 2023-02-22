/*
    Author: Justin Dang
    >--------------------------------------------
    FUNCTION:
    
        -> Handles storing and modifying data and stats of an entity.
    >--------------------------------------------
*/
#ifndef ENTITY_H
#define ENTITY_H
#include <stdint.h>
#include <string>
#include "../header/EntityData.h"

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

        Entity(string _name, Path _origin, double startingHP = 0, double startingArmor = 0, int startingLevel = 0){
            name = _name;
            origin = _origin;
            SetMaxHealth(startingHP);
            SetCurrentHealth(startingHP);
            SetExperience(0.0);
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

