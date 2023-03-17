#ifndef MENU_H
#define MENU_H

#include <iostream>

using namespace std;

class Menu{
    private:
        char menuInput;
        bool gameState;
    public:
        void pausemenu();
        void menuDescision();
        void invalidInput();
        void processMenuDescision();

};

#endif