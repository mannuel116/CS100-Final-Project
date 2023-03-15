#include "gtest/gtest.h"
#include "../header/Weapon.h"
#include "../header/Combat.h"
#include <string>

using namespace std;

/*
    Weapon/Item Class
*/
TEST(WeaponTests, testWeaponConstructor){
    string name = "Cat";
    string description = "Saimese kitty that knows Wing Chun.";

    Weapon *weapon = new Weapon(name, description, (float)9999.9, (float)1.0);
    ASSERT_NEAR(weapon->CriticalDamage(), 1, .1);
    ASSERT_NEAR(weapon->Damage(), 9999.9, .1);
    ASSERT_TRUE(weapon->Name() == name);
    ASSERT_TRUE(weapon->Description() == description);

    delete weapon;
}

/*
    Combat Class
*/
TEST(CombatTests, testCombatFatal){
  Character *tempPlayer = new Character("Javier", Character::Path::Corporate);
  Enemy *tempEnemy = new Enemy("Justin");

  Combat *combat = new Combat(tempPlayer, tempEnemy);

  string name = "Cat";
  string description = "Saimese kitty that knows Wing Chun.";
  Weapon *ofMassDestruction = new Weapon(name, description, 9999.9, 9999.9);
  tempPlayer->weapon = ofMassDestruction;
  tempEnemy->weapon = ofMassDestruction;

  EXPECT_TRUE(combat->DoPlayerCombat());
  EXPECT_TRUE(combat->DoEnemyCombat());

  delete combat;
  delete ofMassDestruction;
}

TEST(CombatTests, testCombatNonFatal){
  Character *tempPlayer = new Character("Javier", Character::Path::Corporate);
  Enemy *tempEnemy = new Enemy("Justin");

  Combat *combat = new Combat(tempPlayer, tempEnemy);

  string name = "Cat";
  string description = "Saimese kitty that knows Wing Chun.";
  Weapon *ofMassDestruction = new Weapon(name, description, 1.0, 2.0);
  tempPlayer->weapon = ofMassDestruction;
  tempEnemy->weapon = ofMassDestruction;

  EXPECT_FALSE(combat->DoPlayerCombat());
  EXPECT_FALSE(combat->DoEnemyCombat());

  delete combat;
  delete ofMassDestruction;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}