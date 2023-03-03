#ifndef WEAPONS_H
#define WEAPONS_H

#include <iostream>
#include "item.h"

using std::string;

class Weapons : public Item {
    private:
        float damage, crit;
    public:
        Weapons(string, float, float);
        string getName();
        float useItem(CharEntity);
        float getDmg();
        float doCrit(CharEntity);
        float getCrit();
        void description();
};

#endif