#include "../header/Character.h"

using namespace std;

void Character::SetName(string name){
     this->name = name;
}

string Character::Name(){
    return this->name;
}

void Character::SetOrigin(Path path){
    this->origin = path;
}

Character::Path Character::Origin(){
    return this->origin;
}
