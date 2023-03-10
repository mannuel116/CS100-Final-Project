#include "../header/EnemyData.h"

using namespace std;

float EnemyData::MaxHealth(){
    return this->maxHealth;
}
void EnemyData::SetMaxHealth(float hp){
    this->maxHealth = max(hp, 0.0);
}
float EnemyData::CurrentHealth(){
    return this->currHealth;
}
void EnemyData::SetCurrentHealth(float hp){
    this->currHealth = max(hp, 0.0);
}
float EnemyData::getExp(){
    return this->xp;
}
void EnemyData::setExp(float _xp){
    this->xp = max(_xp, 0.0);
}
string EnemyData::getName(){
    return this->name;
}
void EnemyData::setName(string _name){
    this->name = _name;
}
