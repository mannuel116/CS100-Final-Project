/*
    >--------------------------------------------
    (Justin)NOTE:
        -> If enemy has a weapon, include the weapon class and 
            create a weapon variable under private. You can
            then modify equip weapon to take in a weapon object
            and assign it to the private weapon variable.

    CHANGES(made by Justin):
        -> added SetCurrentHealth to constructor
        -> changed SetMaxHealth(startingHealth) -> SetMaxHealth(startingHealth + (100 * Vitality()))
    >--------------------------------------------
*/
#ifndef ENEMY_H
#define ENEMY_H
#include "../header/EnemyStats.h"
#include "../header/EnemyData.h"
#include "../header/Weapon.h"
#include "../header/Item.h"
#include <string>

using namespace std;

class Enemy : public EnemyStats, public EnemyData {
    private:
        Weapon enemyWeapon;

    public:
        Enemy(string enemyName, int _vitality = 0, int _agility = 0, int _luck = 0, float xpDrop = 0) : EnemyStats(_vitality, _agility, _luck)
        {
            setName(enemyName);
            SetMaxHealth(_vitality*100);
            SetCurrentHealth(_vitality*100);
            setExp(xpDrop);
        }
        ~Enemy() {
            delete weapon;
        }
        void equipWeapon(float weaponDMG, float weaponCrit);
        Weapon *weapon;
};


#endif