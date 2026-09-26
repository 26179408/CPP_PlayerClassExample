// CPP_PlayerClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// these are our includes to bring in libraries to our project just like in Unity C#
#include <iostream>
// bring in the player header
#include "Player.h"
#include <string>

// the Main is the entry to our code in C++
int main()
{
    // this is a print statement std is the standard library, :: means use a function from the library and cout is console out
    // we will look into the << later as this is bitshifting
    std::cout << "Welcome to the Hot and Cold Treasure Hunt\n"; 
    Player p; 

    std::string input; // we need the #include above for this
    // gameplay loop
    while (true)
    {
        std::cin >> input;
        std::cout << "Input was " << input << "\n";
    }

}