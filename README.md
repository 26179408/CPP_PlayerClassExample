# CPP_PlayerClassExample
An example C++ program for taking existing OO knowledge and transfering in the C++ style. 

## Overview
In this we will work on a basic Hot and Cold style game mechanic, each "turn" the player will use WASD to move in a direction and the player will be told if they are hotter or colder. The goal is to understand the basics of a C++ project compared to a C# project.

## Task

### Namespaces
In the **CPP_PlayerClassExample.cpp** file:
First lets recap namespaces, we covered this in C#, They act as a container to group multiple related classes together. This is useful as it also allows large project to have the same class name, but under different namespaces, e.g. if used used Random in C# Unity you will get a warning about multiple [Random Classes](https://unity.huh.how/compiler-errors/cs0104.html). 
For this in the start to show you :: i didnt use, but as we are going to be printing let's use the std namespace, **under #include Player.h** add the line:
"""
using namespace std;
"""
This means in the code, if possible, commands will auto use the std library, which means we can change:
"""
std::cout << "Welcome to the Hot and Cold Treasure Hunt\n"; 
"""
to
"""
cout << "Welcome to the Hot and Cold Treasure Hunt\n"; 
"""
Now we are using that namespace we can save a bit of typing. 

### Console input 
You can see I have already created a basic gameplay loop via a **while(true)**. We will be taking in input from the user in this loop. But first good practice is to prompt the user, using [cout](https://www.geeksforgeeks.org/cpp/cout-in-c/), int he loop add this line:
"""
cout<< "Press a to move left or d to move right\n";
"""
Now since we know that **cout** is **console out**, naturally [**cin**](https://www.geeksforgeeks.org/cpp/cin-in-c/) is **console in**. But this does pose a issue, we can get direct characters with [cin.get](https://www.geeksforgeeks.org/cpp/cin-get-in-c-with-examples/), but that is more prone to errors. For use we will use the basic cin string, but in **C++ we don't  have a String by default**, but it is given through the **std namespace**. To do this we need variable to store the input and then in the loop to update it:
Before the loop:
"""
    string input;
"""
After the loop prompt:
"""
        cin >> input;
        cout << "Input was " << input << "\n";
"""
Save and compile and try out the input out system. 
### Moving left or right
Now that we have input, we can begin to effect the players position, use this code to move the player:
"""
        if (input[0] == 'a')
        {
            p.Move(-1, 0);
            cout << "Player moved left getting colder\n";
        }
        else if (input[0] == 'd')
        {
            p.Move(1, 0);
            cout << "Player moved right getting warmer\n";
        }
"""
Now currently this should tell use the player is moving however, it be nicer to see if the player is updating there movement, in the **Player.h** file, you see i have **defined a PrintPos**, but in **Player.cpp** i haven't implemented it. Let's do that now add this block of code to **Player.cpp**:

"""
void Player::PrintPos()
{
	std::cout << "Player is a X: " << x << " Y: " << y << "\n";
}
"""

Because you are outputting you will also need to add this to the top of 
"""
#include <iostream>
"""
To test it is working i added a call to the function in the **Move** function, the output should look like:
[Hints/End.png]

Try to work through the Challenges and ask for help if you get stuck.
## Challenges
Test your might
### Easy
- Expand the code to move up and down 
Hints use the code in **CPP_PlayerClassExample.cpp**, where you do the **input[0] == 'd'**.
- Expand the code to restrict the players position within a grid of 10 * 10
Hints, I would define a **bool CanMove(int xDir, int yDir);** in **Player.h** and Implement in **Player.cpp**, that way in the input checking you can do **&& CanMove()**. You could also ether pass in the bound or hard code.
- Ensure you provide feedback on what the player has done and what you want them to do e.g. ask for input, and add error checking to inputs
Make sure the messages are clear on where the player has moved to, if they have hit the boundary, types the wrong input or no input
For the case management you can use [toLower](https://www.geeksforgeeks.org/cpp/tolower-function-in-cpp/) and you can check the length of a string [size](https://www.geeksforgeeks.org/cpp/5-different-methods-to-find-length-of-a-string-in-cpp/).
###Medium 
- Right click the solution make a new class called Item
[Images/CreateAClass.png][Images/Item.png]
To use it in the **CPP_PlayerClassExample.cpp** you need to include the Header file, and **try not to use the new** keyword until we have gone through pointers.
- Give Item a constructor to pass a position and a default that choses a randon (10*10) position.
The constructor jsut like in C# is a function with no return value like so:
"""
	Item();
	Item(int StartX, int StartY);
"""
After implementing in **Item.cpp**, you can create with the second constructor just using:
"""
Item i(1, 2);
"""
For the random element of the task you can use the [Random](https://www.geeksforgeeks.org/cpp/how-to-generate-random-value-by-dice-roll-in-cpp/), note this seems complex but it's because it's using the time to set our random seed.
- Expand so if the player gets closer to the item the system will print warmer, or if further away colder, rather then just by moving closer to the item.
For this I would recommend the C++ Math library [**#include <math.h>**](https://www.geeksforgeeks.org/cpp/c-mathematical-functions/), which will help you calculate the [Euclidean](https://en.wikipedia.org/wiki/Euclidean_distance) or as we are grid movement [Manhattan](https://www.geeksforgeeks.org/data-science/manhattan-distance/) distances. You can store the last distance to know if you are Hotter or Colder.
###Hard 
- Make is so if the player hits the item, it prints you found the item! +100 and moves the item to a new location, and stores the score
- Restrict the player to a number of moves they can make before the game ends, they will get some bonus moves for collecting an item
- Add another class called Wall, at the start a number of walls will be added, then each time an item is called more will spawn. If the player tries to move where a wall is they will lose the move and the message "A wall blocks your path, Should have gone to specsavers"
###Refinements - Part of the assignment and purpose if this module is to show you can refine the gameplay to a high standard
- Instead of just warmer and colder, also add context, such as "warmer, still cool", to show the player is closer but still far away. If you really want to go all out, individual words are tricky but with the [**System(Color 0E);**](https://www.geeksforgeeks.org/cpp/how-to-print-colored-text-in-c/) command you can change the console text (E for text, 0 for background)
- See if you can make use of the Carriage return "\r", to actually keep the console window short and keep information like moves left and total score available.
- Add a new refinement to the game of your own choosing
###Coding Practices
- See about making ether a standard movement class or IMoveable interface for the classes you have created for a more component based system.
- See if you can make a Gameplay Manger that handles score, number of moves left and gamestate