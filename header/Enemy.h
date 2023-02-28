#ifndef ENEMY_H
#define ENEMY_H
#include "../header/EntityStats.h"
#include <algorithm>
#include <string>

using namespace std;

class Enemy : public EntityStats {


    public:
        enum EnemyLootDrops {
            Implant,            //should be changed to specific implant name when we figure that out"
            StatUpgrade_Vitality,
            StatUpgrade_Agility,
            StatUpgrade_Strength,
            StatUpgrade_Compatibility,
            StatUpgrade_Luck,
            //etc (any other loot drop we would want an enemy to hold)
        };

        //constructor
        Enemy(int _vitality, int _strength, int _agility, int _compatibility, int _luck, EnemyLootDrops _LD, double _xpDrop) : EntityStats(_vitality, _strength, _agility, _compatibility, _luck){
            this->LD = _LD;
            this->dead = false;
            this->xpDrop = max(_xpDrop, 0.0);
        }

        //getters and setters
        void setxpDrop(double xp);
        double getxpDrop();
        void updateDeathStatus();
        bool getDeathStatus();
        void setEnemyLootDrop(EnemyLootDrops lootdp);
        EnemyLootDrops getEnemyLootDrop();

    private:
        EnemyLootDrops LD;
        bool dead;
        double xpDrop;

};


#endif