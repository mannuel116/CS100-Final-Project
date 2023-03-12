#ifndef COMBATEV_H
#define COMBATEV_H

#include <iostream>
#include "Event.h"
#include "Enemy.h"
#include "Character.h"


class CombatEV : public Event {
    public:
        void runEvent(Character player, Enemy enemy);     //General function to run event
        bool chckAgl(Character player, Enemy enemy) ;     //Determines who has higher agility to initiate combat
        void fight(Character first, Enemy second);        //Loops combat until player or enemy dies
};

#endif