#ifndef CONSUMBALE_H
#define CONSUMBALE_H

#include <iostream>
#include "Item.h"
#include "../header/Character.h"

using std::string;

class Consumable : public Item {
    private:
        float effect;
        string type; //"health"
        string description;
    public:
        Consumable(string _name, string _type, float _effect, string _description) : Item(_name, _description){ 
            this->type = _type;
            this->effect = _effect;
        }
        void useItem(Character *player); 
        string Type();
        float Effect();
};

#endif