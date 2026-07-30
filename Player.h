#pragma once
class Player
{
	// this is our header file you'll notice like in c# the class has a scope definition
	// a header file is to define functionality, kind of like a floor plan on an elevator at a shopping centre

	// a nice feature is we group visibility so anything under this becomes naturally public
public:
	// we define variables just the same as in c#, but it's best to provide a default example
	int x = 0;
	int y = 0; 

	// for the header, as it's definition only, you should treat it like an abstract class
	void Move(int xDir, int yDir); 
	void PrintPos();
};

