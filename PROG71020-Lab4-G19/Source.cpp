#include <iostream>
#include "BMW.h"
#include "Circle.h"
#include "Drawable.h"
#include "Mazda.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Vehicle.h"
#include "Global.h"

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