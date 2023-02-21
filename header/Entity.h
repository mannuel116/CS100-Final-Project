#ifndef ENTITY_H
#define ENTITY_H
#include <stdint.h>
#include <string>
#include "../source/EntityData.cpp"

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

        Entity(string _name, Path _origin, double startingHP, double startingArmor, int startingLevel){
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
        void SetRace(string race);
        string Race();
    private:
        Path origin;
        string name;
};


#endif

