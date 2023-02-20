#pragma once
#include "Shape.h"
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

	void Draw()
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
	
