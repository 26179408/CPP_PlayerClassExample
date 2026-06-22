#pragma once
class Player
{
	// this is our header file you'll notice like in c# the class has a scope definition
	// a header file is to to define functionality, kind of like a floor plan on a elevator at a shopping centre

	// a nice feature is we group visibility so anything under this becomes naturally public
public:
	// we define variables just the same as in c#, but it best to provide a default example
	int x = 0;
	int y = 0; 

	// for the header as its defintion only you should treat it like an abstract class
	void Move(int xDir, int yDir); 
	void PrintPos();
};

