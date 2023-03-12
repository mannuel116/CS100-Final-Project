#ifndef WEAPONS_H
#define WEAPONS_H

#include "Item.h"
class Character;


using std::string;

class Weapon : public Item {
    private:
        float damage, crit;
    public:
        Weapon(string, float, float);
        string getName();
        float useItem(Character);
        float getDmg();
        float doCrit(Character);
        float getCrit();
        void description();
};

#endif