#pragma once
#include <iostream>
#include "Drawable.h"
class Vehicle:public Drawable 
{
public:
	virtual void Draw() override
	{

	}

	// Because only vehicles can be driven, and this is the first instance of this function used, we have this as pure virtual function.
	virtual void Drive() = 0;
	
};

