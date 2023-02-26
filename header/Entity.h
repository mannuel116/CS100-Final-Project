/*
    Author: Justin Dang
    >--------------------------------------------
    Need help?
        -> Refer to my test cases on some examples of how to use this class.
    >--------------------------------------------
    FUNCTION:
        -> Handles storing and modifying data and stats of an entity.
        -> Use Case:
            -> Can create enemies without having to give them stats
                -> If you want to give the enemy stats, the enemy class should inherit from EntityStats.h
            -> Can create non-interactable(No need for data other than name and origin) npc, but class was 
               developed with intention that we most likely will be interacting with most entities.
    >--------------------------------------------
    Documentation:
        - Constructor:
            -> Entity(string name, Path origin, struct entityData)
            -> Entity(string name, 
                            Path origin,
                            int _level = 0, 
                            double _health = 0.0, 
                            double _armor = 0.0,  
                            double _experience = 0.0)
                - Side note for above constructor:
                    -> I left experience at the end to all for the constructor to be
                        called as so:
                            Entity(name, path/race, level, health, armor);
                        Can omit experience and it will be set to 0.
                    -> Path is similar to a race. Up for iteration if need be.

        - Variables:
            -> name
            -> origin
            -> level
            -> experience
            -> currentHealth
            -> maxHealth
            -> armor
        - Methods:
            - NOTE:
                Variables are lower case; to get the variable, just change
                it to uppercase and call method
                    ex. To get entity level:
                        int entityLevel = entity.Level();
            - <Variable>() 
                -> returns the variable.
            - Set<Variable>()
                -> sets the variable.
            - Add<Variable>(int/double amount)
                -> Can add or subtract a given amount from the given variable.
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
        // (string name, Path origin, struct entityData data)
        Entity(string _name, Path _origin, entityData _data){
            name = _name;
            origin = _origin;
            SetMaxHealth(_data.currentHealth);
            SetCurrentHealth(_data.currentHealth);
            SetExperience(_data.experience);
            SetLevel(_data.level);
            SetArmor(_data.armor);
        }
        //(string name, Path origin, int level = 0, double startingHealth = 0, double startingArmor = 0, double startingExperience = 0) 
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

