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
    std::cout << "Hello World!\n"; 


    /*
    * next c++ focus session i will give you a visualisation of this.
    Challenges 
    Easy
    - Expand the code to move left 
    - Expand the code to move up and down
    - Expand the code to restrict the players position within a grid of 50 * 50
    Medium 
    - right click the solution make a new class called monster
    - give it the ability to move and print it's position
    - expand the monster so it can store an object of player, extend the player so the monster can get and move in the direction of the player
    Hard 
    - expand the game so if the monster moves onto the players slot the game ends
    - In C++, we typically use a vector to store a list (https://en.cppreference.com/cpp/container/vector), make a list of 2D points inwhich the player cannot move to, and will lose a turn but the monster will break them if it touches them
    - Add a unique spot inwhich if the player walks over they will get points, and one that will say "trap set" which if the monster stands on will be killed winning the game
    */
}


