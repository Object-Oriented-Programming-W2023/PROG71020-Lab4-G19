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
	// Method 1 (using "Draw" virtual class from parent);
	rect.Draw(rect);
	circ.Draw(circ);


	BMW myBMW;
	Mazda myMazda;

	myBMW.Draw();
	myBMW.Drive();

	myMazda.Draw();
	myMazda.Drive();


	// Method 2 (using "draw" class from child classes);
	//rect.draw();
	//circ.draw();

	// Creating objects for global function and passing array items.
	Circle circle(20);
	Rectangle rectangle(6, 7);
	Shape* arr[ARRLENGTH] = { nullptr };

	arr[0] = &rectangle;
	arr[1] = &circle;
	arr[2] = &rect;
	arr[3] = &circ;

	double totalArea = getTotalArea(arr);
	std::cout << "The total area of all shapes in the array: " << totalArea << std::endl;

	std::system("pause");
	return 0;
}