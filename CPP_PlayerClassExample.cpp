// CPP_PlayerClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// these are our includes to bring in libraries to our project just like in Unity C#
#include <iostream>
// bring in the player header
#include "Player.h"
using namespace std;
#include <string>

// the Main is the entry to our code in C++
int main()
{
    // this is a print statement std is the standard library, :: means use a function from the library and cout is console out
    // we will look into the << later as this is bitshifting
    cout << "Welcome to the Hot and Cold Treasure Hunt\n"; 
    Player p; 

    string input; // we need the #include above for this
    // gameplay loop
    while (true)
    {
        cout << "Press a to move left, d to move right, w to move up or s to move down\n";
        cin >> input;
        cout << "Input was " << input << "\n";
        if (input[0] == 'a') 
        {
            p.Move(-1, 0);
            cout << "Player moved left, getting colder\n";
        }
        else if (input[0] == 'd')
        {
            p.Move(1, 0);
            cout << "Player moved right, getting warmer\n";
        }
    }

}