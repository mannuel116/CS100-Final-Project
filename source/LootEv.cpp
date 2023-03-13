#include <iostream>
#include "../header/LootEv.h"
#include "../header/Weapon.h"

using namespace std;

void LootEv::runEvent(Character player) {
    /*
        generate random number to determine what type of loot will be dropped either after combat or during loot event
        1-12 = hp item
        13-19 = agl item
        20-24 = weapon
        25-30 = implant
    */
    int itemNumber = (rand() % 29) + 1;

    if (itemNumber <= 12) getHpBoost(player);
    else if (itemNumber <= 19) getAglBoost(player);
    else if (itemNumber <= 24) getWeapon(player);
    else getImplant(player);
}

void LootEv::getHpBoost(Character player) {
    int hpType = (rand() % 9) + 1;
    string itemName = (hpType <= 5)? "MAXDOC MK. 1" : (hpType <= 8)? "MAXDOC MK. 2" : "MAXDOC MK. 3";
    float itemEffect = (hpType <= 5)? .4 : (hpType <= 8)? .6 : .8;
    //Consumable *hp = new Consumable(itemName,itemEffect);
    //player.addItem(hp);
}

void LootEv::getAglBoost(Character player) {
    //Consumable *agl = new Consumable("Agility Boost",.5);
    //player.addItem(agl);
}

void LootEv::getWeapon(Character player) {
    int randWeapon = (rand() % 6) + 1;
    string name;
    float damage = 0, crit = 0;

    switch(randWeapon) {
        case 1: {
            name = "Arasaka Nowaki";
            damage = 30;
            crit = 50;
            break;
        }
        case 2: {
            name = "Militech M251s Ajax";
            damage = 50;
            crit = 10;
            break;
        }
        case 3: {
            name = "Arasaka Tamayura";
            damage = 10;
            crit = 30;
            break;
        }
        case 4: {
            name = "Seraph";
            damage = 20;
            crit = 30;
            break;
        }
        case 5: {
            name = "Militech Crusher";
            damage = 60;
            crit = 0;
            break;
        }
        case 6: {
            name = "Arasaka Howler";
            damage = 70;
            crit = 0;
            break;
        }
        case 6: {
            name = "Fenrir";
            damage = 30;
            crit = 20;
            break;
        }
        case 6: {
            name = "Problem Solver";
            damage = 20;
            crit = 40;
            break;
        }
    }
    //Weapon *weapon = new Weapons(name, damage, crit);
    /*
        Add weapon to player inventory here
    */
}