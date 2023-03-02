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
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    ASSERT_TRUE(stats->Vitality() == 5);
    ASSERT_TRUE(stats->Strength() == 5);
    ASSERT_TRUE(stats->Agility() == 5);
    ASSERT_TRUE(stats->Compatibility() == 5);
    ASSERT_TRUE(stats->Luck() == 5);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsConstructorInvalidInputsWithStruct){
    entityStats tempStats = { -5, -5, -5, -5, -5};
    EntityStats *stats = new EntityStats(tempStats);
    ASSERT_TRUE(stats->Vitality() == 0);
    ASSERT_TRUE(stats->Strength() == 0);
    ASSERT_TRUE(stats->Agility() == 0);
    ASSERT_TRUE(stats->Compatibility() == 0);
    ASSERT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetVitalityWithValidInputPositive){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetVitality(1);
    EXPECT_TRUE(stats->Vitality() == 1);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetVitalityWithInvalidInputNegative){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetVitality(-1);
    EXPECT_TRUE(stats->Vitality() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddVitalityWithPositiveInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddVitality(1);
    EXPECT_TRUE(stats->Vitality() == 6);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddVitalityWithNegativeInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddVitality(-1);
    EXPECT_TRUE(stats->Vitality() == 4);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddVitalityWithInvalidInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddVitality(-999);
    EXPECT_TRUE(stats->Vitality() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetStrengthWithValidInputPositive){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetStrength(1);
    EXPECT_TRUE(stats->Strength() == 1);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetStrengthWithInvalidInputNegative){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetStrength(-1);
    EXPECT_TRUE(stats->Strength() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddStrengthWithPositiveInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddStrength(1);
    EXPECT_TRUE(stats->Strength() == 6);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddStrengthWithNegativeInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddStrength(-1);
    EXPECT_TRUE(stats->Strength() == 4);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddStrengthWithInvalidInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddStrength(-999);
    EXPECT_TRUE(stats->Strength() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetAgilityWithValidInputPositive){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetAgility(1);
    EXPECT_TRUE(stats->Agility() == 1);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetAgilityWithInvalidInputNegative){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetAgility(-1);
    EXPECT_TRUE(stats->Agility() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddAgilityWithPositiveInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddAgility(1);
    EXPECT_TRUE(stats->Agility() == 6);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddAgilityWithNegativeInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddAgility(-1);
    EXPECT_TRUE(stats->Agility() == 4);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddAgilityWithInvalidInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddAgility(-999);
    EXPECT_TRUE(stats->Agility() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetCompatibilityWithValidInputPositive){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetCompatibility(1);
    EXPECT_TRUE(stats->Compatibility() == 1);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetCompatibilityWithInvalidInputNegative){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetCompatibility(-1);
    EXPECT_TRUE(stats->Compatibility() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddCompatibilityWithPositiveInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddCompatibility(1);
    EXPECT_TRUE(stats->Compatibility() == 6);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddCompatibilityWithNegativeInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddCompatibility(-1);
    EXPECT_TRUE(stats->Compatibility() == 4);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddCompatibilityWithInvalidInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddCompatibility(-999);
    EXPECT_TRUE(stats->Compatibility() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetLuckWithValidInputPositive){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetLuck(1);
    EXPECT_TRUE(stats->Luck() == 1);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsSetLuckWithInvalidInputNegative){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->SetLuck(-1);
    EXPECT_TRUE(stats->Luck() == 0);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddLuckWithPositiveInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddLuck(1);
    EXPECT_TRUE(stats->Luck() == 6);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddLuckWithNegativeInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddLuck(-1);
    EXPECT_TRUE(stats->Luck() == 4);
    delete stats;
}

TEST(EntityStatsTests, testEntityStatsAddLuckWithInvalidInput){
    entityStats tempStats = { 5, 5, 5, 5, 5};
    EntityStats *stats = new EntityStats(tempStats);
    stats->AddLuck(-999);
    EXPECT_TRUE(stats->Luck() == 0);
    delete stats;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}