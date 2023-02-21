#ifndef ENTITYDATA_H
#define ENTITYDATA_H
#include <string>

class EntityData {
    /*
            All data types must be set by derived class.
    */
    private:
        double currentHealth;       // done
        double maxHealth;           // done
        double armor;               // done
        int level;
        double experience;

    public:
        // Health functions:
        void SetMaxHealth(double hp);
        double MaxHealth();
        void AddMaxHealth(double hp);
        void SetCurrentHealth(double hp);
        void AddCurrentHealth(double hp);
        double CurrentHealth();

        // Experience/Level functions
        void SetExperience(double xp);
        void AddExperience(double xp);
        double Experience();
        void SetLevel(int lvl);
        void AddLevel(int lvl);
        double Level();
        bool CanLevelUp();
        void LevelUp();
        bool CanLevelDown();
        void LevelDown();

        // Armor functions
        void SetArmor(double _armor);
        double Armor();
        void AddArmor(double _armor);
};

#endif