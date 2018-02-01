#include "stdafx.h"
#include <iostream>

int main()
{
	int configuration_type{};

	std::cout << "The following numbers are associated with the configurations: (1)AAA, (2)AAS, (3)ASA, (4)SAS, (5)SSA, (6)SSS." << std::endl;
	std::cout << "Enter configuration number: ";
	std::cin >> configuration_type; 
	std::cout << std::endl;

	//AAA
	if (configuration_type == 1)
	{
		std::cout << "You have chosen AAA: Angle Angle Angle" << std::endl;
	}

	//AAS
	if (configuration_type == 2)
	{
		std::cout << "You have chosen AAS: Angle Angle Side" << std::endl;
	}

	//ASA
	if (configuration_type == 3)
	{
		std::cout << "You have chosen ASA: Angle Side Angle" << std::endl;
	}

	//SAS
	if (configuration_type == 4)
	{
		std::cout << "You have chosen SAS: Side Angle Side" << std::endl;
	}

	//SSA
	if (configuration_type == 5)
	{
		std::cout << "You have chosen SSA: Side Side Angle" << std::endl;
	}

	//SSS
	if (configuration_type == 6)
	{
		std::cout << "You have chosen SSS: Side Side Side" << std::endl;
	}

	//Wrong input
	if (configuration_type <= 0 || configuration_type > 6)
		std::cout << "You have chosen a wrong value. Restart program." << std::endl;

	return 0;
}

