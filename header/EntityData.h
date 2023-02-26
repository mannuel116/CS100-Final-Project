/*
    Author: Justin Dang
    >--------------------------------------------
    FUNCTION:
    
        -> Handles storing and modifying data and stats of an entity.
    >--------------------------------------------
*/
#ifndef ENTITYDATA_H
#define ENTITYDATA_H
#include <string>
#include <algorithm>

using namespace std;

struct entityData {
    int level;
    double currentHealth, maxHealth, armor, experience = 0;
};

class EntityData {
    private:
        int level;                  
        double experience;          
        double currentHealth;      
        double maxHealth;           
        double armor;     
        entityData data;          

    public:
        // (int _level, double _experience, double _currentHealth, double _maxHealth, double _armor)
        EntityData(entityData _data){
            this->level = max(_data.level, 0);
            this->experience = max(_data.experience, 0.0);
            this->currentHealth = max(_data.currentHealth, 0.0);
            this->maxHealth = max(_data.maxHealth, 0.0);
            this->armor = max(_data.armor, 0.0);
            data = { this->level, this->currentHealth, this->maxHealth, this->armor , this->experience};
        }
        EntityData( int _level = 0, double _currentHealth = 0.0, double _maxHealth = 0.0, double _armor = 0.0,  double _experience = 0.0){
            this->level = max(_level, 0);
            this->experience = max(_experience, 0.0);
            this->currentHealth = max(_currentHealth, 0.0);
            this->maxHealth = max(_maxHealth, 0.0);
            this->armor = max(_armor, 0.0);
            //data = { this->level, this->currentHealth, this->maxHealth, this->armor, this->experience};
        }

        // Health functions:
        double MaxHealth();
        void SetMaxHealth(double hp);
        void AddMaxHealth(double hp);
        double CurrentHealth();
        void SetCurrentHealth(double hp);
        void AddCurrentHealth(double hp);

        // Experience/Level functions
        double Experience();
        void SetExperience(double xp);
        void AddExperience(double xp);
        double Level();
        void SetLevel(int lvl);
        void AddLevel(int lvl);
        bool CanLevelUp();
        void LevelUp();
        bool CanLevelDown();
        void LevelDown();

        // Armor functions
        double Armor();
        void SetArmor(double _armor);
        void AddArmor(double _armor);

        void UpdateData();
};

#endif