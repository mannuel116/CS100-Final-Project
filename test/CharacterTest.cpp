#include "gtest/gtest.h"
#include "../header/Character.h"

/*
    Character/CharacterData Class
*/
TEST(CharacterTests, testConstructor){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Character::Path::Corporate);
    ASSERT_TRUE(player->Level() == 5);
    ASSERT_TRUE(player->CurrentHealth() == 30);
    
    delete player;
}

TEST(CharacterTests, testConstructorWithInvalidInput){
    Character *player = new Character("Justin", Character::Path::Corporate, -1, -1);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Character::Path::Corporate);
    ASSERT_TRUE(player->Level() == 0);
    ASSERT_TRUE(player->CurrentHealth() == 0);
    delete player;
}

TEST(CharacterDataTests, testCharacterDataStruct){
    characterData tempData;
    tempData.level = 5;
    tempData.maxHealth = 30;
    tempData.currentHealth = 30;
    characterStats tempStats = { 5, 5, 5, 5};
    Character *player = new Character("Justin", Character::Path::Corporate, tempData, tempStats);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Character::Path::Corporate);
    ASSERT_TRUE(player->Level() == 5);
    ASSERT_NEAR(player->CurrentHealth(), 530, .1);
    delete player;
}

TEST(CharacterDataTests, testCharacterDataStructWithInvalidInput){
    characterData tempData = {-3, -2, -1, 0};
    characterStats tempStats = { 5, 5, 5, 5};
    Character *player = new Character("Justin", Character::Path::Corporate, tempData, tempStats);
    ASSERT_TRUE(player->Name() == "Justin");
    ASSERT_TRUE(player->Origin() == Character::Path::Corporate);
    ASSERT_TRUE(player->Level() == 0);
    ASSERT_NEAR(player->CurrentHealth(), 500, .1);
    delete player;
}

TEST(CharacterDataTests, testSetCurrentHealthAboveMaxHP){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->SetCurrentHealth(999999);
    EXPECT_NEAR(player->CurrentHealth(), 999999, .1);
    delete player;
}

TEST(CharacterDataTests, testAddCurrentHealthWithNegativeParameter){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->AddCurrentHealth(-5);
    EXPECT_TRUE(player->CurrentHealth() == 25);
    delete player;
}

TEST(CharacterDataTests, testAddCurrentHealthAboveMaxHP){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->AddCurrentHealth(31);
    EXPECT_TRUE(player->CurrentHealth() == 30);
    delete player;
}

TEST(CharacterDataTests, testAddExperienceWithZero){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->AddExperience(0);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(CharacterDataTests, testAddExperienceAtLevelZeroWithNegative){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->AddExperience(-5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(CharacterDataTests, testAddExperienceWithPositiveInteger){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->AddExperience(5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 10);
    delete player;
}

TEST(CharacterDataTests, testAddExperienceWithPositiveFloat){
    Character *player = new Character("Justin", Character::Path::Corporate, 5, 30);
    player->AddExperience(5.5);
    EXPECT_NEAR(player->Experience(), .5, .1);
    EXPECT_TRUE(player->Level() == 10);
    delete player;
}

TEST(CharacterDataTests, testAddExperienceWithNegativeInteger){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->AddExperience(-5);
    EXPECT_NEAR(player->Experience(), 0, .1);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(CharacterDataTests, testAddExperienceWithNegativeFloat){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->AddExperience(-5.5);
    EXPECT_NEAR(player->Experience(), .5, .1);
    EXPECT_TRUE(player->Level() == 4);
    delete player;
}

TEST(CharacterDataTests, testSetPositiveLevel){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->SetLevel(5);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(CharacterDataTests, testSetNegativeLevel){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->SetLevel(-5);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(CharacterDataTests, testSetLevelMin){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->SetLevel(-99999);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

TEST(CharacterDataTests, testAddLevelPositive){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->AddLevel(5);
    EXPECT_TRUE(player->Level() == 15);
    delete player;
}

TEST(CharacterDataTests, testAddLevelNegative){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->AddLevel(-5);
    EXPECT_TRUE(player->Level() == 5);
    delete player;
}

TEST(CharacterDataTests, testAddLevelMin){
    Character *player = new Character("Justin", Character::Path::Corporate, 10, 30);
    player->AddLevel(-99999);
    EXPECT_TRUE(player->Level() == 0);
    delete player;
}

// TEST(CharacterDataTests, testSetArmorMin){
//     Character *player = new Character("Justin", Character::Path::Corporate, 10, 30, 8);
//     player->SetArmor(-99999);
//     EXPECT_NEAR(player->Armor(), 0, .1);
//     delete player;
// }

// TEST(CharacterDataTests, testAddArmorPositiveFloat){
//     Character *player = new Character("Justin", Character::Path::Corporate, 10, 30, 8);
//     player->AddArmor(5);
//     EXPECT_NEAR(player->Armor(), 13, .1);
//     delete player;
// }

// TEST(CharacterDataTests, testAddArmorWithNegativeFloat){
//     Character *player = new Character("Justin", Character::Path::Corporate, 10, 30, 8);
//     player->AddArmor(-5);
//     EXPECT_NEAR(player->Armor(), 3, .1);
//     delete player;
// }

// TEST(CharacterDataTests, testAddArmorMin){
//     Character *player = new Character("Justin", Character::Path::Corporate, 10, 30, 8);
//     player->AddArmor(-99999);
//     EXPECT_NEAR(player->Armor(), 0, .1);
//     delete player;
// }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}