#pragma once
#include "Shape.h"
class Rectangle:public Shape
{
private:
	int length;
	int width;
public:
	Rectangle(int length, int width)
	{
		this->length = length;
		this->width = width;
	}

	void draw()
	{
		std::cout << "****************" << std::endl;
		std::cout << "*              *" << std::endl;
		std::cout << "****************" << std::endl;
	}
	double getArea()
	{
		double area;
		area = width * length;
		return area;
	}
};
	
