#include <iostream>
#include "../header/CombatEV.h"

void CombatEV::runEvent(Character player, Enemy enemy) {
    if (chckAgl(player, enemy)){
        fight(player, enemy);
    }else{
        fight(enemy, player);
    }
}
bool CombatEV::chckAgl(Character player, Enemy enemy) {
    if(player.Agility() > enemy.Agility()){
        return true;       //player is faster than enemy
    }else{
        return false;     //player is slower than enemy
    }
}
void CombatEV::fight(Character player, Enemy enemy) {
    /*
        bool fight = true;
        int dmg = 0;
        while (fight) {
            first.doCombat();
            if (dmg > 0)
                second.setHP(dmg);

        }
    */
}