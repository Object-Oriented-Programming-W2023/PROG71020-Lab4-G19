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
	virtual void Draw(Shape& shape)
	{
		shape.draw();
	}

	virtual double getArea() = 0;
};

