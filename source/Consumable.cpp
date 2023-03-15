#include "../header/Consumable.h"
#include "../header/Character.h"
#include <string>


void Consumable::useItem(Character *player){
    if (this->type == "health"){
        player->AddCurrentHealth(this->effect);
    }
    //can add other types of consumable usages as other if statments 
}
string Consumable::Type(){
    return this->type;
}
float Consumable::Effect(){
    return this->effect;
}
