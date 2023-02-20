#include <iostream>
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

double getTotalArea(Shape* arr[])
{
	int length = 2;
	double totalArea = 0;
	int i = 0;
	double currentArea = 0;


	while (arr[i] != nullptr)
	{

		totalArea += arr[i]->getArea();
		i++;
	}

	return totalArea;
}

void Draw(Drawable& object)
{
	object.Draw();
}
void Drive(Vehicle& vehicle)
{
	vehicle.Drive();
}