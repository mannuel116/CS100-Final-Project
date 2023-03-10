#include "gtest/gtest.h"
#include "../header/Enemy.h"


//outdated tests (FIX in next sprint)
/*
TEST(Enemytests, testconstructor){
    Enemy *enemy = new Enemy(2, 3, 4, 0, 5, Enemy::EnemyLootDrops::StatUpgrade_Vitality, 0.4);
    EXPECT_NEAR(enemy->getxpDrop(), 0.4, 0.01);
    EXPECT_EQ(enemy->Vitality(), 2);
    EXPECT_EQ(enemy->Strength(), 3);
    EXPECT_EQ(enemy->Agility(), 4);
    EXPECT_EQ(enemy->Compatibility(), 0);
    EXPECT_EQ(enemy->Luck(), 5);
    EXPECT_EQ(enemy->getEnemyLootDrop(), Enemy::EnemyLootDrops::StatUpgrade_Vitality);
    EXPECT_FALSE(enemy->getDeathStatus());
    delete enemy;
}

TEST(Enemytests, testConstructorNegativexpDrop){
    Enemy *enemy = new Enemy(0, 0, 0, 0, 0, Enemy::EnemyLootDrops::StatUpgrade_Vitality, -0.3);
    EXPECT_NEAR(enemy->getxpDrop(), 0.0, 0.01);
    EXPECT_EQ(enemy->getEnemyLootDrop(), Enemy::EnemyLootDrops::StatUpgrade_Vitality);
    delete enemy;
}

TEST(Enemytests, testSetxpDropPositive){
    Enemy *enemy = new Enemy(0, 0, 0, 0, 0, Enemy::EnemyLootDrops::StatUpgrade_Vitality, 0.2);
    enemy->setxpDrop(2.3);
    EXPECT_NEAR(enemy->getxpDrop(), 2.3, 0.01);
    delete enemy;
}

TEST(Enemytests, testSetxpDropNegative){
    Enemy *enemy = new Enemy(0, 0, 0, 0, 0, Enemy::EnemyLootDrops::StatUpgrade_Vitality, 0.2);
    enemy->setxpDrop(-2.3);
    EXPECT_NEAR(enemy->getxpDrop(), 0.0, 0.01);
    delete enemy;
}

TEST(Enemytests, testUpdateDeathStatus){
    Enemy *enemy = new Enemy(0, 0, 0, 0, 0, Enemy::EnemyLootDrops::StatUpgrade_Vitality, 0.2);
    enemy->updateDeathStatus();
    EXPECT_TRUE(enemy->getDeathStatus());
    delete enemy;
}

TEST(Enemytests, testSetEnemyLootDrop){
    Enemy *enemy = new Enemy(0, 0, 0, 0, 0, Enemy::EnemyLootDrops::StatUpgrade_Vitality, 0.2);
    enemy->setEnemyLootDrop(Enemy::EnemyLootDrops::StatUpgrade_Luck);
    EXPECT_EQ(enemy->getEnemyLootDrop(), Enemy::EnemyLootDrops::StatUpgrade_Luck);
    delete enemy;
}

*/
