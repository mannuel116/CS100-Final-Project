#include "../header/EntityData.h"
#include <algorithm>
#include <string>

using namespace std;

void EntityData::SetMaxHealth(double hp){
    currentHealth = maxHealth = hp;
}

double EntityData::MaxHealth(){
    return maxHealth;
}

void EntityData::AddMaxHealth(double hp){       // Should increasing MaxHP increase currentHP?
    maxHealth += hp;
    // currentHealth += hp;
}

void EntityData::SetCurrentHealth(double hp){
    if(hp > 0){
        currentHealth = min(hp, maxHealth);
    }
    else if(hp < 0){
        currentHealth = max(hp, 0.0);
    }
}

void EntityData::AddCurrentHealth(double hp){ 
    double tempHP = currentHealth;
    if(hp > 0){
        currentHealth = min(tempHP + hp, maxHealth);
    }
    else if(hp < 0){
        currentHealth = max(tempHP + hp, 0.0);
    }
}

double EntityData::CurrentHealth(){
    return currentHealth;
}
void EntityData::SetExperience(double xp){
    experience = max(xp, 0.0);
}

void EntityData::AddExperience(double xp){ 
    if(level == 0 && xp <= 0.0){
        return;
    }

    experience += xp;
    
    if(CanLevelUp()){
        LevelUp();
    }
    else if(CanLevelDown()){
        LevelDown();
    }
}

double EntityData::Experience(){
    return experience;
}

 void EntityData::SetLevel(int lvl){
    level = max(0, lvl);
}
void EntityData::AddLevel(int lvl){ 
    int tempLvl = level;
    level = max(0, tempLvl + lvl);
}

double EntityData::Level(){
    return level;
}

bool EntityData::CanLevelUp(){
    if(experience >= 1)
       return true;
    return false;  
}

void EntityData::LevelUp(){
    while(CanLevelUp()){
        experience -= 1.0;
        level += 1;
    }
}

bool EntityData::CanLevelDown(){
    if(experience < 0 && level > 0)
       return true;
    return false;  
}

void EntityData::LevelDown(){
    while(CanLevelDown()){
        experience += 1.0;
        level -= 1;
    }
}

void EntityData::SetArmor(double _armor){
    armor = max(_armor, 0.0);
}

double EntityData::Armor(){
    return armor;
}

void EntityData::AddArmor(double _armor){   
    double tempArmor = armor;   
    armor = max(tempArmor + _armor, 0.0);
}