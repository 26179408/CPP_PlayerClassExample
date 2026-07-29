// CPP_PlayerClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// these are our include to bring in libraries to our project just like in Unity C#
#include <iostream>
// bring in the player header
#include "Player.h"

// the Main is the entry to our code in C++
int main()
{
    // this is a print statement std is the standard library, :: mean use a function from the library and cout is console out
    // we will look into the << later as this is bitshifting
    std::cout << "Welcome to the Hot and Cold Treasure Hunt\n"; 
    Player p; 

    // gameplay loop
    while (true)
    {
        
    }

    /*
    Challenges 
    Easy
    - Expand the code to move up and down
    - Expand the code to restrict the players position within a grid of 10 * 10
    - ensure you provide feedback on what the player has done and what you want them to do e.g. ask for input
    Medium 
    - Right click the solution make a new class called Item
    - Give a constructor to pass a position and a default that choses a randon (10*10) position
    - Expand so if the player gets closer to the item the system will print warmer, or if further away colder
    Hard 
    - Make is so if the player hits the item, it prints you found the item! +100 and moves the item to a new location, and stores the score
    - Restrict the player to a number of moves they can make before the game ends, they will get some bonus moves for collecting an item
    - Add another class called Wall, at the start a number of walls will be added, then each time an item is called more will spawn. If the player tries to move where a wall is they will lose the move and the message "A wall blocks your path, Should have gone to specsavers"
    Refinements - Part of the assignment and purpose if this module is to show you can refine the gameplay to a high standard
    - Instead of just warmer and colder, also add context, such as "warmer, still cool", to show the player is closer but still far away. 
    - See if you can make use of the Carriage return "\r", to actually keep the console window short and keep information like moves left and total score available.
    - Add a new refinement to the game of your own choosing
    - See about making ether a standard movement class or IMoveable interface for the classes you have created for a more component based system.
    */
}


