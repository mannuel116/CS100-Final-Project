/*
    Author: Justin Dang
    >--------------------------------------------
    Need help?
        -> Refer to my test cases on some examples of how to use this class.
    >--------------------------------------------
    FUNCTION:
        -> Handles storing and modifying data and stats of an character.
        -> Use Case:
            -> Can create enemies without having to give them stats
                -> If you want to give the enemy stats, the enemy class should inherit from EnemyStats.h
            -> Can create non-interactable(No need for data other than name and origin) npc, but class was 
               developed with intention that we most likely will be interacting with most entities.
    >--------------------------------------------
    Documentation:
        - Constructor:
            -> Character(string name, Path origin, struct characterData)
            -> Character(string name, 
                            Path origin,
                            int _level = 0, 
                            double _health = 0.0, 
                            double _armor = 0.0,  
                            double _experience = 0.0)
                - Side note for above constructor:
                    -> I left experience at the end to all for the constructor to be
                        called as so:
                            Character(name, path/race, level, health, armor);
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
                    ex. To get character level:
                        int characterLevel = character.Level();
            - <Variable>() 
                -> returns the variable.
            - Set<Variable>()
                -> sets the variable.
            - Add<Variable>(int/double amount)
                -> Can add or subtract a given amount from the given variable.
    >--------------------------------------------
*/
#ifndef CHARACTER_H
#define CHARACTER_H
#include "../header/CharacterData.h"
#include "../header/CharacterStats.h"
#include "../header/Inventory.h"
#include <algorithm>
#include <string>

using namespace std;

/*-------------------------------------
    INCLUDE INVENTORY HERE ONCE IT IS IMPLMENETED(CONSUMABLE AND WEAPON NOT IMPLEMENTED YET)
*///-----------------------------------
class Character : public CharacterData, public CharacterStats{
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
        /*
        (string name, Path origin, 
        characterData data(struct),
        characterStats stats(struct))
        */ 
        Character(string _name, Path _origin, characterData _data, CharacterStats _stats) : 
        CharacterData(_data), 
        CharacterStats(_stats)
        {
            name = _name;
            origin = _origin;
        }
        /*
        (string name, Path origin, 
        int level, double startingHP, double startingArmor, double startingXP,
        int vitality, int strength, int agility, int compatibility, int luck, int psychosis) 
        */
        Character(string _name, Path _origin,
         int startingLevel = 0, double startingHP = 0.0, double startingArmor = 0.0, double startingExperience = 0.0,
         int _vitality = 0, int _strength = 0, int _agility = 0, int _compatibility = 0, int _luck = 0, int _psychosis = 0) :
         CharacterData(startingLevel, startingHP, startingArmor, startingExperience), 
         CharacterStats(_vitality, _strength, _agility, _compatibility, _luck, _psychosis)
        {
            name = _name;
            origin = _origin;
        }

        void SetName(string name);
        string Name();
        void SetOrigin(Path path);
        Path Origin();
        // virtual void Attack(); // Waiting on clarification for combat
    private:
        Path origin;
        string name;
};


#endif

