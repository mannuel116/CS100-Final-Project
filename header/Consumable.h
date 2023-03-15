#ifndef CONSUMBALE_H
#define CONSUMBALE_H

#include <iostream>
#include "Item.h"

using std::string;

class Consumable : public Item {
    private:
        float effect;
        string type;
    public:
        Consumable(string, string, float);
        int useItem();
        void description();
};

#endif