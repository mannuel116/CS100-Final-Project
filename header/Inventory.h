#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "Consumable.h"
#include "Weapon.h"
#include "Character.h"
#include <vector>

class Inventory {
    private:
        vector<Consumable *> consumables;
        vector<Weapon *> weapons;
        int invSize;
        int itemCnt;
    public:
        Inventory();
        void invMenu(Character *);
        void setInvSize(int);
        void getWep(int, Character *);
        void printCons(Character *);
        void printWep(Character *);
        void useCons(int, Character *);
        void equipWep(int, Character *);
        void addWep(Weapon *);
        void addCons(Consumable *);
        bool full();
        ~Inventory();
};

#endif
