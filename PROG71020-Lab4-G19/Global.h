#pragma once
#include <iostream>
#include "Shape.h"
#include "Drawable.h"
#include "Vehicle.h"

double getTotalArea(Shape* arr[]);

void Draw(Drawable& object);
void Drive(Vehicle& vehicle);

