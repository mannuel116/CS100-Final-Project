#ifndef LOOTEV_H
#define LOOTEV_H

#include <iostream>
#include "Event.h"


class LootEV : public Event {
    public:
        void runEvent(Character, Enemy);     //General function to run event
        void getHpBoost(Character);
        void getAglBoost(Character);
        void getWeapon(Character);
        void getImplant(Character);
};

#endif