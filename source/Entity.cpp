#include "../header/Entity.h"

using namespace std;

void Entity::SetName(string name){
     this->name = name;
}

string Entity::Name(){
    return this->name;
}

void Entity::SetOrigin(Path path){
    this->origin = path;
}

Entity::Path Entity::Origin(){
    return this->origin;
}
