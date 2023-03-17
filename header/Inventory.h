/*
    Author: Justin Dang
    >--------------------------------------------
    Need help?
        -> Refer to my test cases on some examples of how to use this class.
    >--------------------------------------------
    FUNCTION:
        -> Stores items(potions, weapons)
    >--------------------------------------------
    Documentation:
        ->
    >--------------------------------------------
*/
#ifndef INVENTORY_H
#define INVENTORY_H
#include "../header/Weapon.h"
#include "../header/Consumable.h"
#include <vector>

using namespace std;

class Inventory{
    public:
        vector<Weapon> weapon_Inventory;
        vector<Consumable> consumable_Inventory;
};

#endif