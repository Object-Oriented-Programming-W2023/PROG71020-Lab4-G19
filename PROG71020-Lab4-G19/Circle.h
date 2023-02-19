#pragma once
#include "Shape.h"

#define PI_VALUE 3.141519

class Circle:public Shape
{
private:
	int radius;
public:
	Circle(int radius)
	{
		this->radius = radius;
	}
	void draw()
	{
		std::cout << "   ***************" << std::endl;
		std::cout << "  *               *" << std::endl;
		std::cout << " *                  *" << std::endl;
		std::cout << " *                  *" << std::endl;
		std::cout << "  *                *" << std::endl;
		std::cout << "   ***************" << std::endl;
	}
	double getArea()
	{
		double area = pow(radius, 2) * PI_VALUE;
		return area;
	}
};

