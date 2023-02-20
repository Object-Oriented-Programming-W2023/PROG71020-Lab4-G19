#pragma once
#include "Drawable.h"
#include <iostream>
#include <math.h>
class Shape:public Drawable
{
public:
	Shape()
	{

	}
	virtual void Draw()
	{
		std::cout << "ShapeDraw Override" << std::endl;
	}
	

	// Because only shapes have areas, this should be pure virtual function.
	virtual double getArea() = 0;
};

