[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9904903&assignment_repo_type=AssignmentRepo)
# Night City Rogue-Like
 
  Authors: \<[Justin Dang](https://github.com/JustinBLDang)\>
 \<[Steven Wang](https://github.com/mannuel116)\>
 \<[Javier Vargas](https://github.com/jvarCS)\>
 \<[Maazin Zubair](https://github.com/Maazin-Zubair)\>

## Project Description
  * Why is it important or interesting to you?
    * We found this project to be interesting because it allows us to think of different ways to code RPG elements from games we’ve played previously into our own program while also letting us implement creative decisions beyond programming such as story and world building. Since most RPGs revolve around the mage, tank, adventurer, etc, we decided to go beyond these usual tropes and instead use the world of Cyberpunk, specifically the Cyberpunk: Edgerunners show on Netflix, 
 as the basis for our game.
 
  * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
    * VSCode
    * C++
    * Github
    * Git

  * What will be the input/output of your project?
    * In this project,  we will be developing a text-based rpg that incorporates narrative with strategy by pushing the player through difficult scenarios that build their character’s story. We will use text-based input for all controls, similar to inputting commands in a console, meaning the only peripherals a player needs is a keyboard. In the end, the goal of the player should be to make it as far as possible or toward a satisfactory ending for their playthrough. 

  * What are the features that the project provides?
    * Narrative
        * Scenarios that the player will encounter and make a decision in
        * Character selection
    * Data Storage:
        * Saving checkpoints
        * Health
        * Inventory:
          * Items such as equipment
    * Command line
        * Allows the player to control their character and access menus/information they will need
 
## Class Diagram
Image goes here

CS100 – Project Class Diagram Description
1.	Interface
The Interface class is what our player will see when first running the program. In it, they will be asked to select an option such as starting a new game, loading a saved game, save their current game when given the chance, and the option to quit. The interface will be used when the program is first ran, but also throughout the game whenever the player wants to “pause” their current game and access these options again.
*	+ Menu() – This is the main function of the interface class as it will host the other options available to the player.
*	+ Load() – The load function will allow the player to load a previously saved game and will notify the player if they try to do that when there is no saved file to be loaded.
*	+ Save() – This function will let the player save their current playthrough so that they can pick up here they left off at any time. We plan to do this by having set checkpoints throughout the game, such as at the beginning and end of each floor, and then writing the players current character data into a text file that is to be read whenever they try to load a game.
*	+ Quit() – Simple function to let the player quit the game for any reason.

2.	Level Design

The Level Design class is the foundation for our game. Our floors, or dungeons, will be derived from this class and will be uniquely implemented as the functions inside Level Design will be virtual, allowing us to alter the events and breaks for each floor as we see fit. We plan to have 4 events and breaks per floor, with events serving as potential fight encounters or anything that pushes the game forward, and breaks being the intermission between encounters where information relevant to the story will be given as well as time for the player to decide on what loot to take after they’ve felled their foes.

*	+ Prologue() – This function serves to give the player a little information about the floor they are about to enter while also providing exposition for the story.
*	+ Event() – These functions will serve as the interactive portions of our game by plunging the player into combat or asking them to make important decisions.
*	+ Break() – These functions will act as the aftermath of encounters, giving the player a chance to reflect on what has just happened. Time for looting and leveling are some of the things the player will be able to do when in a break.
*	+ Epilogue() – The epilogue for each floor will be a summary of the events that unfolded in the current floor. The total number of items gained/lost will be  displayed as well as the total amount of XP gained. The player can also save their progress once the epilogue is reached.
3.	Floors

The Floor classes will be the dungeons of our game. They will be derived from the Level Design class and will have their own events and breaks to make each floor unique. The planned number of events/breaks per floor is 4 but this number could change depending on how we need each floor to play out in order for out story to progress.

4.	Player

The Player class will hold the users character data and will be the main source of character customization for our game. We are going to have stats that the user can adjust at the start of every playthrough and these will allow for variety in gameplay and character builds. Because our game will be played entirely through the terminal, we were limited on the traditional forms of character customization such as appearance and character voice, but we allow the user to enter a name and pick a race, each with their own benefits.

*	+ getStats() – Returns the players current stats and any stat altering effects.
*	+ getName() – Returns the player character’s name.
*	+ getRace() – Returns the players chosen race.
*	+ getLevel() – Returns the users current level.
*	+ getExp() – Return the users current XP and the amount needed to level up.
*	+ setLevel() – Function to be used when the user has accumulated enough XP to level up.
*	+ setName() – Sets the user character’s name.
*	+ setRace() – Sets the user character’s race.
*	+ setStats() – Allows the user to adjust stats when creating their character as well as when leveling up.
*	+ setExp() – Increases users XP count after fights.
 

5.	Enemy 

The Enemy class will be used whenever we need to create an enemy for the user to fight during encounters. They will have their own HP, XP and item dropped when defeated, and stats like armor, damage, and speed. 

*	+ setHP() – Function to adjust enemies HP when user has attacked.
*	+ getDrop() – Returns potential item to be dropped when enemy is defeated.
*	+ getExp() – Return XP to be given to user once defeated.
*	+ getHP() – Returns the enemies current HP after each user attack.

 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
