//TO MY FELLOW GROUP MATES: IM CRY
//TO MY SWEET, SWEET GARETT GEESINK, SHOULD YOU SEE THIS MESSAGE: IM CRY
#include "../header/Menu.h"

void pauseMenu(){
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"endl; //19 \n plus endl, 20 lines enough?
    cout<<" ________   ___  ________  ___  ___  _________        ________  ___  _________    ___    ___ "<<endl; //this is supposed to say night city btw
    cout<<"|\\   ___  \\|\\  \\|\\   ____\\|\\  \\|\\  \\|\\___   ___\\     |\\   ____\\|\\  \\|\\___   ___\\ |\\  \\  /  /|"<<endl;
    cout<<"\\ \\  \\\\ \\  \\ \\  \\ \\  \\___|\\ \\  \\\\\\  \\|___ \\  \\_|     \\ \\  \\___|\\ \\  \\|___ \\  \\_| \\ \\  \\/  / /"<<endl;
    cout<<" \\ \\  \\\\ \\  \\ \\  \\ \\  \\  __\\ \\   __  \\   \\ \\  \\       \\ \\  \\    \\ \\  \\   \\ \\  \\   \\ \\    / / "<<endl;
    cout<<"  \\ \\  \\\\ \\  \\ \\  \\ \\  \\|\\  \\ \\  \\ \\  \\   \\ \\  \\       \\ \\  \\____\\ \\  \\   \\ \\  \\   \\/  /  /  "<<endl;
    cout<<"   \\ \\__\\\\ \\__\\ \\__\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\       \\ \\_______\\ \\__\\   \\ \\__\\__/  / /   "<<endl;
    cout<<"    \\|__| \\|__|\\|__|\\|_______|\\|__|\\|__|    \\|__|        \\|_______|\\|__|    \\|__|\\___/ /   "<<endl;
    cout<<"                                                                                \\|___|/ "<<endl;
    cout<<"Press \"1\" to resume or start the game, or press \"2\" to quit.";//change this bit if we're only using this for pause menu and not the beginning of the game
    char gameState;
    cin >> (gameState);
    this->menuInput = gameState;
    delete gameState;
};
void menuDescision(){//will process what the user inputs in pauseMenu()
    if(this->menuInput == "1"){
        this->gameState = true;
    }
    else if(this->menuInput == "2"){
        this->gameState = false;
    }
    else{
        invalidInput();
    }
    processMenuDescision();
};
void invalidInput(){//if input is not 1 or 2, will ask user to reinput, redirects to menuDescision()
    cout<< "The key you have inputted does not seem to be either \"1\" or \"2\", please try again. Press \"1\" to resume or start the game, or press \"2\" to quit."
    char gameStateReinput;
    cin>> gameStateReinput;
    this->menuInput = gameStateReinput;
    delete gameStateReinput;
    menuDescision();
}

void processMenuDescision(){
    if(this->gameState == true){
        //idk what to put here to resume the game, where to redirect to? it does nothing for now. or do i just leave it to do nothing?
    }
    else if(this->gameState == false){
        cout<<"You have chosen to quit the game. Thanks for playing, see you next time!"
        return 0;
    }
    else{
        cout<<"You shouldn't be seeing this. If you are, you must be some sort of magician! Please let the developers know about this!" //idk man im cry
    }
};

//NOTE: did not make a menu test file yet, gonna jerry rig what i can from what i remember but i will need someone to help me
//EDIT: made a test file, pretty sure it doesnt work.
//EDIT 2: ok, 100% it doesnt work