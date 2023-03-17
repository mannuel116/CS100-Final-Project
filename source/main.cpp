#include <iostream>
#include "../header/Game.h"
#include <time.h>
#include "../header/Menu.h"

using namespace std;

int main() {
    srand(time(0));

    Menu *menu = new Menu();
    if (menu->pauseMenu()) {
    Game *game = new Game();
    game->runGame();
    delete game;
    }
    delete menu;

    return 0;
}