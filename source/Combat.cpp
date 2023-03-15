#include "../header/Combat.h"

bool Combat::DoPlayerCombat(){
    double attackDamage = player->weapon->Damage();

    if (player->Luck() > (rand() % 13)){
        attackDamage += player->weapon->CriticalDamage();
    }

    enemy->SetCurrentHealth(max((enemy->CurrentHealth() - (float)attackDamage), (float)0.0));

    if (enemy->CurrentHealth() <= 0){
        return true;
    }

    return false;
}

bool Combat::DoEnemyCombat(){
    double attackDamage = enemy->weapon->Damage();

    if (enemy->Luck() > (rand() % 13)){
        attackDamage += enemy->weapon->CriticalDamage();
    }

    player->SetCurrentHealth(max((player->CurrentHealth() - attackDamage), 0.0));

    if (player->CurrentHealth() <= 0){
        return true;
    }

    return false;
}