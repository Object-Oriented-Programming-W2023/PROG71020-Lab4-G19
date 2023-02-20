#include <iostream>
#include "BMW.h"
#include "Circle.h"
#include "Drawable.h"
#include "Mazda.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Vehicle.h"
#include "Global.h"

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

#define ARRLENGTH 10

// "main" function.
int main(void)
{
	Rectangle rect(4, 5);
	std::cout << "The area of the rectangle: " << rect.getArea() << std::endl;

	Circle circ(2);
	std::cout << "The area of the circle: " << circ.getArea() << std::endl;

	// Drawing both shapes.
	BMW myBMW;
	Mazda myMazda;

	Draw(circ);
	Draw(rect);
	Draw(myMazda);
	Draw(myBMW);
	
	// Driving both vehicles.
	Drive(myBMW);
	Drive(myMazda);

	// Creating objects for global function and passing array items.
	Circle circle(20);
	Rectangle rectangle(6, 7);
	Shape* arr[ARRLENGTH] = {&rectangle, &circle, &rect, &circ, nullptr};


	double totalArea = getTotalArea(arr);
	std::cout << "The total area of all shapes in the array: " << totalArea << std::endl;

	std::system("pause");
	return 0;
}