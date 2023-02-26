#include "gtest/gtest.h"
#include "../header/EntityStats.h"

/*
    Entity/EntityData Class
*/
TEST(EntityStatsTests, testEntityStatsConstructorValidInputs){
    EntityStats *stats = new EntityStats(5, 5, 5, 5, 5);
    ASSERT_TRUE(stats->Vitality() == 5);
    ASSERT_TRUE(stats->Strength() == 5);
    ASSERT_TRUE(stats->Agility() == 5);
    ASSERT_TRUE(stats->Compatibility() == 5);
    ASSERT_TRUE(stats->Luck() == 5);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsConstructorInvalidInputs){
    EntityStats *stats = new EntityStats(-5, -5, -5, -5, -5);
    ASSERT_TRUE(stats->Vitality() == 0);
    ASSERT_TRUE(stats->Strength() == 0);
    ASSERT_TRUE(stats->Agility() == 0);
    ASSERT_TRUE(stats->Compatibility() == 0);
    ASSERT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsConstructorValidInputsWithStruct){
    entityStats tempStats = { 5, 5, 5, 5, 5}
    EntityStats *stats = new EntityStats(tempStats);
    ASSERT_TRUE(stats->Vitality() == 5);
    ASSERT_TRUE(stats->Strength() == 5);
    ASSERT_TRUE(stats->Agility() == 5);
    ASSERT_TRUE(stats->Compatibility() == 5);
    ASSERT_TRUE(stats->Luck() == 5);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsConstructorInvalidInputsWithStruct){
    entityStats tempStats = { -5, -5, -5, -5, -5}
    EntityStats *stats = new EntityStats(tempStats);
    ASSERT_TRUE(stats->Vitality() == 0);
    ASSERT_TRUE(stats->Strength() == 0);
    ASSERT_TRUE(stats->Agility() == 0);
    ASSERT_TRUE(stats->Compatibility() == 0);
    ASSERT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetAgilityWithValidInputPositive){
    entityStats tempStats = { 5, 5, 5, 5, 5}
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetAgility(1);
    EXPECT_TRUE(stats->Agility() == 1);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetAgilityWithValidInputNegative){
    entityStats tempStats = { 5, 5, 5, 5, 5}
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetAgility(-1);
    EXPECT_TRUE(stats->Agility() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddAgilityWithPositiveInput){
    entityStats tempStats = { 5, 5, 5, 5, 5}
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddAgility(1);
    EXPECT_TRUE(stats->Agility() == 6);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddAgilityWithInvalidInput){
    entityStats tempStats = { 5, 5, 5, 5, 5}
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetAgility(-1);
    EXPECT_TRUE(stats->Agility() == 0);
    delete stats;
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}