# CPP_PlayerClassExample
An example C++ program for taking existing OO knowledge and transfering in the C++ style. 

## Overview
In this we will work on a basic Hot and Cold style game mechanic, each "turn" the player will use WASD to move in a direction and the player will be told if they are hotter or colder. The goal is to understand the basics of a C++ project compared to a C# project.

# Task
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

## Challenges
