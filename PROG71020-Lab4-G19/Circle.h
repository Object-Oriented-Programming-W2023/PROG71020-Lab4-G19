#pragma once
#include "Shape.h"

#define PI_VALUE 3.141519
/*
* Program description:
*	This program prints shapes and drives vehicles using inheritance, and function overriting.
*
* Authors and responsibilities:
*	This source file has been created, and structured by Salah Salame, and additional
*	contributions (including function calls, comments, and other functionality) has
*	been added by the rest of my team.
*
* General information:
*	Names:		Salah Salame, Amr Belbeisi, Drasti Patel.
*	Course:		PROG71020 - Object Oriented Programming.
*	Instructor: Akrem El-Ghazal.
*	Date:		Initially developed on Thursday, February 16, 2022.
*	Delivery:	To be handed in by Sunday, February 19, 2023.
*	Group:		Name = "DAS"; Number = 19;
*/

class Circle:public Shape
{
private:
	int radius;
public:
	Circle(int radius)
	{
		this->radius = radius;
	}
	void Draw()
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

