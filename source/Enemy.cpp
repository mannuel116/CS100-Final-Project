#include "../header/Enemy.h"

using namespace std;

void Enemy::setxpDrop(double xp){
    this->xpDrop = max(xp, 0.0);
}

double Enemy::getxpDrop(){
    return this->xpDrop;
}

void Enemy::updateDeathStatus(){
    this->dead = true;
}

bool Enemy::getDeathStatus(){
    return this->dead;
}

void Enemy::setEnemyLootDrop(EnemyLootDrops lootdp){
    this->LD = lootdp;
}

Enemy::EnemyLootDrops Enemy::getEnemyLootDrop(){
    return this->LD;
}
