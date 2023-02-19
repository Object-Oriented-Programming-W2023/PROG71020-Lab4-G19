#include <iostream>
#include "Global.h"
#include "Shape.h"
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