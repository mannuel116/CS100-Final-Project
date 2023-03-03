#include <iostream>
#include "../header/combatev.h"

void CombatEV::runEvent(Entity player, Enemy enemy) {
    if (chckAgl(player, enemy)){
        fight(player, enemy);
    }else{
        fight(enemy, player);
    }
}
bool CombatEV::chckAgl(Entity player, Enemy enemy) {
    if(player.Agility() > enemy.Agility()){
        return true;       //player is faster than enemy
    }else{
        return false;     //player is slower than enemy
    }
}
void CombatEV::fight(Entity first, Enemy second) {
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