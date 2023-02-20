#pragma once
#include "Drawable.h"
#include <iostream>
#include <math.h>
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
class Shape:public Drawable
{
public:
	Shape()
	{

	}
	virtual void Draw() override
	{

	}
	

	// Because only shapes have areas, this should be pure virtual function.
	virtual double getArea() = 0;
};

