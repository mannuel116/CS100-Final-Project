#include "../header/EntityStats.h"

using namespace std;

int EntityStats::Vitality(){
    return this->vitality;
}

void EntityStats::SetVitality(int _vitality){
    this->vitality = max(0, _vitality);
}

void EntityStats::AddVitality(int _vitality){
    int tempVitality = this->vitality;
    vitality = max(0, tempVitality + _vitality);
}

int EntityStats::Strength(){
    return this->strength;
}

void EntityStats::SetStrength(int _strength){
    this->strength = max(0, _strength);
}

void EntityStats::AddStrength(int _strength){
    int tempStrength = this->strength;
    strength = max(0, tempStrength + _strength);
}

int EntityStats::Agility(){
    return this->agility;
}

void EntityStats::SetAgility(int _agility){
    this->agility = max(0, _agility);
}
void EntityStats::AddAgility(int _agility){
    int tempAgility = this->agility;
    this->agility = max(0, tempAgility + _agility);
}

int EntityStats::Compatibility(){
    return this->compatibility;
}

void EntityStats::SetCompatibility(int _compatibility){
    this->compatibility = max(0, _compatibility);
}

void EntityStats::AddCompatibility(int _compatibility){
    int tempCompatibility = this->compatibility;
    compatibility = max(0, tempCompatibility + _compatibility);
}

int EntityStats::Luck(){
    return this->luck;
}
void EntityStats::SetLuck(int _luck){
    this->luck = max(0, _luck);
}

void EntityStats::AddLuck(int _luck){
    int tempLuck = this->luck;
    luck = max(0, tempLuck + _luck);
}