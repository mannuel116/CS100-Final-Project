#include "gtest/gtest.h"
#include "../header/Enemy.h"


TEST(Enemytests, testconstructor){
    Enemy *enemy = new Enemy("Bob", 2, 3, 4, 101, 0.7);
    EXPECT_EQ(enemy->getName(), "Bob");
    EXPECT_EQ(enemy->Vitality(), 2);
    EXPECT_EQ(enemy->Agility(), 3);
    EXPECT_EQ(enemy->Luck(), 4);
    EXPECT_EQ(enemy->CurrentHealth(), 101);
    EXPECT_EQ(enemy->MaxHealth(), 301);
    EXPECT_NEAR(enemy->getExp(), 0.7, 0.01);
    EXPECT_EQ(enemy->getWeapon().Description(), "description");
    EXPECT_EQ(enemy->getWeapon().Name(), "name");
    EXPECT_EQ(enemy->getWeapon().Damage(), 0);
    EXPECT_EQ(enemy->getWeapon().CriticalDamage(), 0);
    delete enemy;
}
TEST(Enemytests, testBaseConstructor){
    Enemy *enemy = new Enemy();
    EXPECT_EQ(enemy->getName(), "name");
    EXPECT_EQ(enemy->Vitality(), 0);
    EXPECT_EQ(enemy->Agility(), 0);
    EXPECT_EQ(enemy->Luck(), 0);
    EXPECT_EQ(enemy->CurrentHealth(), 100);
    EXPECT_EQ(enemy->MaxHealth(), 100);
    EXPECT_NEAR(enemy->getExp(), 0, 0.01);
    EXPECT_EQ(enemy->getWeapon().Description(), "description");
    EXPECT_EQ(enemy->getWeapon().Name(), "name");
    EXPECT_EQ(enemy->getWeapon().Damage(), 0);
    EXPECT_EQ(enemy->getWeapon().CriticalDamage(), 0);
    delete enemy;
}

TEST(Enemytests, testenemyWeaponsEquip){
    Enemy *enemy = new Enemy("Joe");
    Weapon Gun("AK47", "An Autorifle", 20.0, 2.0);
    enemy->equipWeapon(Gun);
    EXPECT_EQ(enemy->getWeapon().Description(), "An Autorifle");
    EXPECT_EQ(enemy->getWeapon().Name(), "AK47");
    EXPECT_NEAR(enemy->getWeapon().Damage(), 20.0, 0.01);
    EXPECT_NEAR(enemy->getWeapon().CriticalDamage(), 2.0, 0.01);
}

TEST(Enemytests, testenemyWeaponsEquip2){
    Enemy *enemy = new Enemy("Joe");
    Weapon Sword("katana", "a Japanese sword", 40.0, 16.0);
    enemy->equipWeapon(Sword);
    EXPECT_EQ(enemy->getWeapon().Description(), "a Japanese sword");
    EXPECT_EQ(enemy->getWeapon().Name(), "katana");
    EXPECT_NEAR(enemy->getWeapon().Damage(), 40.0, 0.01);
    EXPECT_NEAR(enemy->getWeapon().CriticalDamage(), 16.0, 0.01);
}





int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}