#include <iostream>
#include "../header/Story.h"

using namespace std;

void Story::newLine() {
    cout << "           [ENTER]";
    cin.get();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


void Story::importantInfo() {
    cout << "---------------------------------Important Info---------------------------------\n"
         << "When playing this game you will see \"[ENTER]\" appear in the terminal.\n"
         << "Simply press the \"Enter\" key in order to continue playing.";
    newLine();
}

void Story::intro() {
    cout << "...."; newLine();
    cout << "She listens to David's live feed, desperately hoping to hear any sign of his survival"; newLine();
    cout << "..."; newLine();
    cout << ".."; newLine();
    cout << "\"I had some fun afterall\""; newLine();
    cout << "\"You know, you could prove an interesting construct\""; newLine();
    cout << "\"Whatever choom. Like I give a R*D@#TED\""; newLine();
    cout << "\"Oh well\""; newLine();
    cout << "Silence falls once again, to be broken only by the sound of a single gunshot"; newLine();
    cout << "\"Yes, it's done\""; newLine();
    cout << "\"Understood. Preparations for engram construction will begin immediately\""; newLine();
    cout << "END COMM"; newLine();
}

void Story::actOne() {
    cout << "\"Edgerunners!\""; newLine();
    cout << "\"Hear me now\""; newLine();
    cout << "You can't believe it."; newLine();
    cout << "It's really him"; newLine();
    cout << "Johnny Silverhand, Night City legend"; newLine();
    cout << "When you took this job you thought it was just some tripped up fixer using his name"; newLine();
    cout << "Guess you were wrong"; newLine();
    cout << "You've heard the stories about him"; newLine();
    cout << "Like the one where he lead a whole Militech assault on the Arasaka Towers"; newLine();
    cout << "And dropped on a nuke on them"; newLine();
    cout << "\"Today is the day you'll finally put to good use the chrome that's replaced so much of your god given flesh\""; newLine();
    cout << "\"Today is the day you show our wonderful abode that is Night City, what it means to BE an Edgerunner\""; newLine();
    cout << "\"Today\""; newLine();
    cout << "\"...\""; newLine();
    cout << "\"Is the day we hit Arasaka\""; newLine();
    cout << "Looks like the stories were true"; newLine();
    cout << "Johnny keeps talking but you tune him out as thoughts of why you took this job flood your mind"; newLine();
    cout << "You've never been one to \"Do Good\" for the city"; newLine();
    cout << "After all, what good has it done for you"; newLine();
    cout << "The promise of keeping any Arasaka chrome you find was just too good to pass up, and so here you are"; newLine();
    cout << "But"; newLine(); 
    cout << "It might just be that hitting a corrupt piece of #%$@ corpse like 'Saka feels pretty good too"; newLine();
    cout << "Whatever the real reason might be, you decide it's beyond you as you realize Johnny is now quiet"; newLine();
    cout << "\"Hey!\""; newLine();
    cout << "Is he talking to you?"; newLine();
    cout << "\"Chrome got you hexed up already or what? I'm talking to you!\""; newLine();
    cout << "Yup he's talking to you"; newLine();
    cout << "\"Get over here!\""; newLine();
    cout << "The image of a scorpion and the collor yellow pop into your mind as he says that"; newLine();
    cout << "You decide to stop wasting time and go see what he wants"; newLine();
    cout << "\"You wanna know somethin' funny?\""; newLine();
    cout << "\"You are the only new face I see here\""; newLine();
    cout << "\"The rest of these goons might as well be on corpse payroll with how often they work with me\""; newLine();
    cout << "\"So\""; newLine();
    cout << "\"Tell me\""; newLine();
    cout << "\"Who are you?\""; newLine();
}

void Story::actTwo(Character p) {
    cout << "\"Nice to meet you \"" << p.Name(); newLine();
    if (p.Origin() == Corporate) {
        cout << "\"So you were actually on corpse payroll?\""; newLine();
        cout << "\"Well I'll be damned\""; newLine();
        cout << "\"Takes guts to leave that kinda life style behind\""; newLine();
        cout << "\"Takes even more to be able to look at yourself in the mirror when you're livin' it\""; newLine();
        cout << "\"And now you're about to hit the biggest corp of them all\""; newLine();
        cout << "\"Ain't life funny like that sometimes?\""; newLine();
    }
    else if (p.Origin() == Nomad) {
        cout << "\"You know I've done some travelling myself\""; newLine();
        cout << "\"Always end up coming back to Night City though\""; newLine();
        cout << "\"Guess you just can't get enough of it once you've had it\""; newLine();
    }
    else {
        cout << "\"So you grew up right here in Night City\""; newLine();
        cout << "\"Gotta be a different breed to do that\""; newLine();
    }
    cout << "\"Anyways\""; newLine();
    cout << "\"Now that everyone knows everyone\""; newLine();
    cout << "\"Hows about we quit this lollygagging and go and introduce ourselves to Arasaka\""; newLine();
    cout << "You and the rest of Johnny's team load up into an AV"; newLine();
    cout << "As it starts ascending, you begin thinking to yourself"; newLine();
    cout << "You've done plenty of risky jobs before"; newLine();
    cout << "Arasaka's involvement shouldn't make this one any more dangerous than the others"; newLine();
    cout << "However"; newLine();
    cout << "You can't help but feel a little uneasy about going staight to their front door"; newLine();
    cout << "Thinking about all the loot you'll get calms you down"; newLine();
    cout << "Johnny gets up and announces our arrival"; newLine();
    cout << "This is it"; newLine();
    cout << "Arasaka"; newLine();
}

void Story::actThree(Character p) {
    cout << "The second the AV lands, all hell breaks loose"; newLine();
    cout << "Most of the team is already out the door firing back at Arasaka cylons, corporate security officers"; newLine();
    cout << "You're about to get on the ground when Johnny calls you"; newLine();
    cout << "\"" << p.Name() << "!\""; newLine();
    cout << "\"Falco!\""; newLine();
    cout << "\"You two are with me\""; newLine();
    cout << "Falco was one the guys Johnny introduced earlier"; newLine();
    cout << "He didn't say much about him other than the fact that he was an important asset to the job"
    cout << "\"While everyone else is keeping these cylons busy in the front, were gonna find a way inside\""; newLine();
    cout << "You hand't realize it before, but you're at the Arasaka Towers"; newLine();
    cout << "The same place Johnny was all those years ago"; newLine();
    cout << "All the noise and commotion down below becomes a distant thought as the AV begins to ascend once again"; newLine();
    cout << "You must've gone up 40 stories before Johnny stops the pilot and tells you to blow a hole into the tower"; newLine();
    cout << "You do, and then jump from the AV into the tower, being careful to mind the gap between the two that would surely lead to your untimely demise otherwise"; newLine();
    cout << "Upon landing, you see a cylon already waiting for you"; newLine();
    cout << "Good"; newLine();
    cout << "You were itching to see some action"; newLine();
}