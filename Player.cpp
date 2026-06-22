#include "Player.h"

// this is the cpp file, this is for the implementation of the classes functionality 
// notice we don't have a class scope any more, and that we need to inxlude or bring in the Players header file

// notice we say we are implementing Player::Move in this class,
// meaning go to the player and we will implement the functionality here
void Player::Move(int xDir, int yDir)
{
	x += xDir;
	y += yDir;
}
