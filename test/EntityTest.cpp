#include "gtest/gtest.h"
#include "../header/Entity.h"

/*
    Entity/EntityData Class
*/
TEST(EntityTests, testConstructor){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Entity::Path::Corporate);
    ASSERT_TRUE(player->Level() == 5);
    ASSERT_TRUE(player->CurrentHealth() == 30);
    ASSERT_TRUE(player->Armor() == 8);
    delete player;
}

TEST(EntityTests, testConstructorWithInvalidInput){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, -1, -1, 0);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Entity::Path::Corporate);
    ASSERT_TRUE(player->Level() == 0);
    ASSERT_TRUE(player->CurrentHealth() == 0);
    ASSERT_TRUE(player->Armor() == 0);
    delete player;
}

TEST(EntityDataTests, testEntityDataStruct){
    entityData tempData = {5, 30, 30, 8};
    Entity *player = new Entity("Justin", Entity::Path::Corporate, tempData);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Entity::Path::Corporate);
    ASSERT_TRUE(player->Level() == 5);
    ASSERT_TRUE(player->CurrentHealth() == 30);
    ASSERT_TRUE(player->Armor() == 8);
    delete player;
}

TEST(EntityDataTests, testEntityDataStructWithInvalidInput){
    entityData tempData = {-3, -2, -1, 0};
    Entity *player = new Entity("Justin", Entity::Path::Corporate, tempData);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Entity::Path::Corporate);
    ASSERT_TRUE(player->Level() == 0);
    ASSERT_TRUE(player->CurrentHealth() == 0);
    ASSERT_TRUE(player->Armor() == 0);
    delete player;
}

TEST(EntityDataTests, testSetCurrentHealthAboveMaxHP){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->SetCurrentHealth(999999);
    EXPECT_TRUE(player->CurrentHealth() == 30);
    delete player;
}

TEST(EntityDataTests, testAddCurrentHealthWithNegativeParameter){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->AddCurrentHealth(-5);
    EXPECT_TRUE(player->CurrentHealth() == 25);
    delete player;
}

TEST(EntityDataTests, testAddCurrentHealthAboveMaxHP){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->AddCurrentHealth(31);
    EXPECT_TRUE(player->CurrentHealth() == 30);
    delete player;
}

TEST(EntityDataTests, testAddExperienceWithZero){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->AddExperience(0);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(EntityDataTests, testAddExperienceAtLevelZeroWithNegative){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->AddExperience(-5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(EntityDataTests, testAddExperienceWithPositiveInteger){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->AddExperience(5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 10);
    delete player;
}

TEST(EntityDataTests, testAddExperienceWithPositiveFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 5, 30, 8);
    player->AddExperience(5.5);
    EXPECT_NEAR(player->Experience(), .5, .1);
    EXPECT_TRUE(player->Level() == 10);
    delete player;
}

TEST(EntityDataTests, testAddExperienceWithNegativeInteger){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddExperience(-5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(EntityDataTests, testAddExperienceWithNegativeFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddExperience(-5.5);
    EXPECT_NEAR(player->Experience(), .5, .1);
    EXPECT_TRUE(player->Level() == 4);
    delete player;
}

TEST(EntityDataTests, testSetPositiveLevel){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->SetLevel(5);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(EntityDataTests, testSetNegativeLevel){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->SetLevel(-5);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(EntityDataTests, testSetLevelMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->SetLevel(-99999);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(EntityDataTests, testAddLevelPositive){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddLevel(5);
    EXPECT_TRUE(player->Level() == 15);
    delete player;
}

TEST(EntityDataTests, testAddLevelNegative){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddLevel(-5);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(EntityDataTests, testAddLevelMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddLevel(-99999);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(EntityDataTests, testSetArmorMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->SetArmor(-99999);
    EXPECT_NEAR(player->Armor(), 0, .1);
    delete player;
}

TEST(EntityDataTests, testAddArmorPositiveFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddArmor(5);
    EXPECT_NEAR(player->Armor(), 13, .1);
    delete player;
}

TEST(EntityDataTests, testAddArmorWithNegativeFloat){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddArmor(-5);
    EXPECT_NEAR(player->Armor(), 3, .1);
    delete player;
}

TEST(EntityDataTests, testAddArmorMin){
    Entity *player = new Entity("Justin", Entity::Path::Corporate, 10, 30, 8);
    player->AddArmor(-99999);
    EXPECT_NEAR(player->Armor(), 0, .1);
    delete player;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}