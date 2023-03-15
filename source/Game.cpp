#include <iostream>
#include "../header/Game.h"
#include "../header/Story.h"
#include "../header/Character.h"

using namespace std;

Game::Game() {
    /*
        Player var = new Player();
        Inventory var = new Inventory();
    */
   story = new Story();
}

void Game::prologue() {
    story->importantInfo();
    story->intro();
    story->actOne();
    makeChar();
}

void Game::floorOne() {
    story->actTwo();
    story->actThree();

}

void Game::makeChar() {
    string name = "", origin = "", input = "", stats = "";
    bool done = false;
    do {
        cout << "-----------CHARACTER CREATION-----------\n";
        cout << "1. Enter name\n"
             << "2. Allocate stats\n"
             << "3. Choose origin\n";
             << "4. Finish\n";
        cin  >> input;
        if (input == "1") setName(name);
        else if (input == "2") setStats(stats);
        else if (input == "3") setOrigin();
        else if (input == "4") {
            if (name.length() > 0 and origin.length() > 0 and stats.length() > 0) done = true;
            else cout << "You must complete each option before continuing\n";
        }
    } while(input != "1" and input != "2" and input != "3" or done);
    
}

void Game::setName(string &name) {
    cout << "Enter name: ";
    getline(cin,name);
}

void Game::setOrigin(string &origin) {
    string input;
    do {
        cout << "-------------ORIGINS--------------\n"
             << "1. Corporate\n"
             << "-You were one of the lucky few who didn't succumb to the overwhelming depravity that surrounds all who dwell in Night City.\n"
             << " Instead, you rose above and became a corpse, ignoring the issues that plague this city.\n"
             << " However, for one reason or another, that life wasn't for you.\n"
             << " Because of your time spent living lavishly and your past corporate history, you gain an additional 2 points in Combatibility and Vitality.\n\n"
             << "2. Nomad\n"
             << "-Settling down was never in the cards for you.\n"
             << " You made it your life's goal to travel and see first hand the good, the bad, and the ugly that exists in a world driven by technology.\n"
             << " Next up, Night City.\n"
             << " Gain an additional 2 points in Luck and Agility.\n\n"
             << "3. Street Punk\n"
             << "-Being born in this world guarantees a life full ups and downs. Being born in Night City, well, that guarantees nothing.\n"
             << " The game was rigged from the start and that pisses you off.\n"
             << " Until your dying breath, you're gonna show this city that it doesn't own you.\n"
             << " Gain an additional 2 points in Strength and Vitality\n\n"
             << "Enter number to choose\n";
        cin  >> input;
    } while(input != "1" and input != "2" and input != "3");
}

void Game::setStats(string &stats) {
    stats = "";
    string input;
    int statCnt = 5;
    do {
        cout << "----------Stat Allocation----------\n"
             << "Starting point for all stats is 5/10\nYou have " << statCnt << " free point(s) to allocate now\n"
             << "1. Vitality: Determines Max HP\n"
             << "2. Agility: Determines your starting turn in combat encounters\n"
             << "3. Strength: Determines inventory size\n"
             << "4. Luck: Determines crit chance during attacks\n"
             << "5. Compatibility: Determines max implant slots\n"
             << "Enter stat number to allocate point\n";
        cin  >> input;
        if (input == "1") {stats += "V"; statCnt--;}
        else if (input == "2") {stats += "A"; statCnt--;}
        else if (input == "3") {stats += "S"; statCnt--;}
        else if (input == "4") {stats += "L"; statCnt--;}
        else if (input == "5") {stats += "C"; statCnt--;}
    } while (statCnt > 0 or input != "1" or input != "2" or input != "3" or input != "4" or input != "5");
}


Game::~Game() {
    delete story;
}