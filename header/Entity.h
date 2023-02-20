#ifndef ENTITY_H
#define ENTITY_H
#include <stdint.h>
#include <string>

using namespace std;

class Entity : EntityData {
    private:
        string race;
        string name;

    public:
        enum class Kind {
            Human,
            // Other races go here:
            // Sushi,
            // Pizza hut,
            // help
        };

        void setName(string name){
            this->name = name;
        }

        string Name(){
            return this->name;
        }

        void setRace(string race){
            this->race = race;
        }

        string Race(){
            return this->race;
        }

};


#endif

