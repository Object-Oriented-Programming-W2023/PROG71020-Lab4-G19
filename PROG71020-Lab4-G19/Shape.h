#pragma once
#include  "Drawable.h"
#include <math.h>
class Shape:public Drawable
{
public:
	virtual void Draw()
	{

	}

	virtual double getArea() = 0;
};

