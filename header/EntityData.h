#ifndef ENTITYDATA_H
#define ENTITYDATA_H
#include <string>
#include <algorithm>

using namespace std;

class EntityData {
    /*
            All data types must be set by derived class.
    */
    private:
        double currentHealth;       // done
        double maxHealth;           // done
        double armor;               // done
        int level = 0;
        double experience = 0;

    public:
        void setMaxHealth(double hp){
            currentHealth = maxHealth = hp;
        }

        double MaxHealth(){
            return maxHealth;
        }

        void addMaxHealth(double hp){       // Should increasing MaxHP increase currentHP?
            maxHealth += hp;
            // currentHealth += hp;
        }

        void setCurrentHealth(double hp){
            currentHealth = hp;
        }

        void addCurrentHealth(double hp){ 
            double tempHP = currentHealth;
            currentHealth = min(tempHP + hp, maxHealth);
        }

        double CurrentHealth(){
            return currentHealth;
        }

        void setExpereince(double xp){
            experience = xp;
        }

        /*
            Need to think about how to handle experience:
                - Experience needs to carry over to next level when player has enough to level up.
                    -> can be done by checking if experience > requiredXPForLvlUP, then add 1 level and experience - requiredXPForLvlUP
                - Does it make sense to handle levelling up in the addExperience function, or have a seperate LevelUp function that checks and handles the above
                
            Idea:
                - Experience can be [0,1] range. Experience gained can be through percentages:
                    -> Early on mobs give about 20%-40% experience. (2.5-5 mobs/events average for levelup)
                    -> Later on experience can be given in 15%-30%. (3.33-6.66 mobs/events average for levelup)
        */
        void addExperience(double xp){ 
            double tempXP = experience;

            // Levelup function goes here

        }

        double Experience(){
            return experience;
        }

        void setLevel(double lvl){
            level = lvl;
        }

        void addLevel(double lvl){ 
            level += lvl;
        }

        double Level(){
            return level;
        }

        // bool LevelUp(){
        //     if()
        // }

        void setArmor(double _armor){
            armor = _armor;
        }

        double armor(){
            return armor;
        }

        void addArmor(double _armor){      
            armor += _armor;
        }

        
};

#endif