#include "gtest/gtest.h"
#include "../header/Entity.h"

/*
    Add Entity Class test cases here:
*/

TEST(Entity, testSetCurrentHealthAboveMaxHP){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 5);
    player->SetCurrentHealth(999999);
    EXPECT_TRUE(player->CurrentHealth() == 30);
}

TEST(Entity, testAddCurrentHealthWithNegativeParameter){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 5);
    player->AddCurrentHealth(-5);
    EXPECT_TRUE(player->CurrentHealth() == 25);
}

TEST(Entity, testAddCurrentHealthAboveMaxHP){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 5);
    player->AddCurrentHealth(31);
    EXPECT_TRUE(player->CurrentHealth() == 30);
}

TEST(Entity, testAddExperienceWithZero){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 0);
    player->AddExperience(0);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 0);
}

TEST(Entity, testAddExperienceAtLevelZeroWithNegative){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 0);
    player->AddExperience(-5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 0);
}

TEST(Entity, testAddExperienceWithPositiveInteger){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 0);
    player->AddExperience(5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 5);
}

TEST(Entity, testAddExperienceWithPositiveFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 0);
    player->AddExperience(5.5);
    EXPECT_NEAR(player->Experience(), .5, .1);
    EXPECT_TRUE(player->Level() == 5);
}

TEST(Entity, testAddExperienceWithNegativeInteger){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddExperience(-5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 5);
}

TEST(Entity, testAddExperienceWithNegativeFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddExperience(-5.5);
    EXPECT_NEAR(player->Experience(), .5, .1);
    EXPECT_TRUE(player->Level() == 4);
}

TEST(Entity, testSetPositiveLevel){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->SetLevel(5);
    EXPECT_TRUE(player->Level() == 5);
}

TEST(Entity, testSetNegativeLevel){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->SetLevel(-5);
    EXPECT_TRUE(player->Level() == 0);
}

TEST(Entity, testSetLevelMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->SetLevel(-99999);
    EXPECT_TRUE(player->Level() == 0);
}

TEST(Entity, testAddLevelPositive){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddLevel(5);
    EXPECT_TRUE(player->Level() == 15);
}

TEST(Entity, testAddLevelNegative){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddLevel(-5);
    EXPECT_TRUE(player->Level() == 5);
}

TEST(Entity, testAddLevelMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddLevel(-99999);
    EXPECT_TRUE(player->Level() == 0);
}

TEST(Entity, testSetArmorMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->SetArmor(-99999);
    EXPECT_NEAR(player->Armor(), 0, .1);
}

TEST(Entity, testAddArmorPositiveFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddArmor(5);
    EXPECT_NEAR(player->Armor(), 13, .1);
}

TEST(Entity, testAddArmorWithNegativeFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddArmor(-5);
    EXPECT_NEAR(player->Armor(), 3, .1);
}

TEST(Entity, testAddArmorMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 30, 8, 10);
    player->AddArmor(-99999);
    EXPECT_NEAR(player->Armor(), 0, .1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}