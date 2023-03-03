#ifndef ENEMY_H
#define ENEMY_H
#include "../header/EntityStats.h"
#include <algorithm>
#include <string>

using namespace std;

class Enemy : public EnemyStats, public EnemyData {
    private:
        Item loot;

    public:
        Enemy(string enemyName, int _vitality, int _agility, int _luck, float startingHealth, float xpDrop) : EnemyStats(_vitality, _agility, _luck){
            setName(enemyName);
            SetMaxHealth(startingHealth);
            setExp(xpDrop);
        }

        void equipWeapon(string weaponName, float weaponDMG, float weaponCrit);
        Item getDrop();
};


#endif