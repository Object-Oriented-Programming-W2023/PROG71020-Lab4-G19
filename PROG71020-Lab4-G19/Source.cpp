#include <iostream>
#include "BMW.h"
#include "Circle.h"
#include "Drawable.h"
#include "Mazda.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Vehicle.h"


// "main" function.
int main(void)
{
	Rectangle rect(4, 5);
	std::cout << "The area of the rectangle: " << rect.getArea() << std::endl;

	Circle circ(2);
	std::cout << "The area of the circle: " << circ.getArea() << std::endl;

	std::system("pause");
	return 0;
}