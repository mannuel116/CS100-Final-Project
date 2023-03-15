#include "../header/Enemy.h"
#include "../header/Weapon.h"
#include "../header/Item.h"

using namespace std;

void Enemy::equipWeapon(Weapon _weapon){
    this->enemyWeapon = _weapon;
}
Weapon Enemy::getWeapon(){
    return this->enemyWeapon;
}


