#include "../header/Entity.h"

void Entity::SetName(string name){
     this->name = name;
}

string Entity::Name(){
    return this->name;
}

void Entity::SetRace(string race){
    this->race = race;
}

string Entity::Race(){
    return this->race;
}
