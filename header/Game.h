#ifndef GAME_H
#define GAME_H

#include "Story.h"

class Game {
    private:
        /*
            Player variable
            Inventory variable or is player going to inherit inventory? If yes, no need for this variable
        */
       Character *user;
       Story *story;
    public:
        Game();
        void prologue();
        void floorOne();
        void floorTwo();
        void floorThree();
        void epilogue();
        void makeChar();
        ~Game();
};

#endif