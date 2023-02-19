#pragma once
#include "Vehicle.h"
#include <iostream>
class BMW :public Vehicle
{
public:
	void Draw()
	{
		std::cout << "\n\n\n* * * * * * * * * *" << std::endl;
		std::cout << "*                 *" << std::endl;
		std::cout << "*    B  M  W      *" << std::endl;
		std::cout << "*                 *" << std::endl;
		std::cout << "* * * * * * * * * *" << std::endl;
		std::cout << " ( O )       ( O ) \n" << std::endl;
	}
	void Drive()
	{
		std::cout << " DRIVING A BMW \n\n\n" << std::endl;
	}
};

