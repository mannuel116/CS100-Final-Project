#include "../header/CharacterStats.h"

using namespace std;

int CharacterStats::Vitality(){
    return this->vitality;
}

void CharacterStats::SetVitality(int _vitality){
    this->vitality = max(0, _vitality);
}

void CharacterStats::AddVitality(int _vitality){
    int tempVitality = this->vitality;
    this->vitality = max(0, tempVitality + _vitality);
}

int CharacterStats::Strength(){
    return this->strength;
}

void CharacterStats::SetStrength(int _strength){
    this->strength = max(0, _strength);
}

void CharacterStats::AddStrength(int _strength){
    int tempStrength = this->strength;
    this->strength = max(0, tempStrength + _strength);
}

int CharacterStats::Agility(){
    return this->agility;
}

void CharacterStats::SetAgility(int _agility){
    this->agility = max(0, _agility);
}
void CharacterStats::AddAgility(int _agility){
    int tempAgility = this->agility;
    this->agility = max(0, tempAgility + _agility);
}

int CharacterStats::Compatibility(){
    return this->compatibility;
}

void CharacterStats::SetCompatibility(int _compatibility){
    this->compatibility = max(0, _compatibility);
}

void CharacterStats::AddCompatibility(int _compatibility){
    int tempCompatibility = this->compatibility;
    this->compatibility = max(0, tempCompatibility + _compatibility);
}

int CharacterStats::Luck(){
    return this->luck;
}
void CharacterStats::SetLuck(int _luck){
    this->luck = max(0, _luck);
}

void CharacterStats::AddLuck(int _luck){
    int tempLuck = this->luck;
    this->luck = max(0, tempLuck + _luck);
}

int CharacterStats::Psychosis(){
    return this->psychosis;
}

void CharacterStats::SetPsychosis(int _psychosis){
    this->psychosis = max(0, _psychosis);
}

void CharacterStats::AddPsychosis(int _psychosis){
    int tempPsychosis = this->psychosis;
    this->psychosis = max(0, tempPsychosis + _psychosis);
}