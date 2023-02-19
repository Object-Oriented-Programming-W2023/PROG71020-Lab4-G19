#pragma once
#include "Vehicle.h"
#include <iostream>
class Mazda :public Vehicle
{
public:
	void Draw()
	{
		std::cout << "    * * * * * * * * *    " << std::endl;
		std::cout << "  *                   *  " << std::endl;
		std::cout << " *                     * " << std::endl;
		std::cout << " *      M A Z D A      * " << std::endl;
		std::cout << " *                     * " << std::endl;
		std::cout << "  *                   *  " << std::endl;
		std::cout << "    * * * * * * * * *    " << std::endl;
		std::cout << "   (O)             (O)   \n" << std::endl;
	}
	void Drive()
	{
		std::cout << " DRIVING A Mazda \n\n" << std::endl;
	}
};

