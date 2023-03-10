#ifndef COMBATEV_H
#define COMBATEV_H

#include <iostream>
#include "event.h"


class CombatEV : public Event {
    public:
        void runEvent(Entity player, Enemy enemy);     //General function to run event
        bool chckAgl(Entity player, Enemy enemy) ;     //Determines who has higher agility to initiate combat
        void fight(Entity first, Enemy second);        //Loops combat until player or enemy dies
};

#endif