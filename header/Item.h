#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using std::string;

class Item {
    private:
        string name;
    public:
        Item(string n) {name = n;}
        virtual int useItem() = 0;
        virtual void description() = 0;
        string getName() {return name;}
};

#endif
