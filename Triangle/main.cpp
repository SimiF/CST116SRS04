#include "stdafx.h"
#include <iostream>
#include <cassert>
#include <cmath>

int main()
{
	int configuration_type{};
	
	const int AAA{ 1 };
	const int AAS{ 2 };
	const int ASA{ 3 };
	const int SAS{ 4 };
	const int SSA{ 5 };
	const int SSS{ 6 };
	const int Exit_Program{ 7 };
	const double PI{3.1415926535};

	double AAA_angle1{};
	double AAA_angle2{};
	double AAA_angle3{};

	double AAA_side1{};
	double AAA_side2{};

	double AAS_angle1{};
	double AAS_angle2{};
	double AAS_angle3{};

	double AAS_side1{};
	double AAS_side2{};
	double AAS_side3{};


	std::cout << "The following numbers are associated with different triangle configurations: \n \n (1)AAA \n (2)AAS \n (3)ASA \n (4)SAS \n (5)SSA \n (6)SSS \n (7)Exit Program \n" << std::endl;
	std::cout << "Please enter the number associated with the desired triangle configuration: \n" << std::endl;
	std::cout << "Angle Configuration Number: ";
	std::cin >> configuration_type;
	std::cout << std::endl;

	switch (configuration_type)
	{
		case AAA:

			std::cout << "You have chosen AAA: Angle, Angle, Angle.\n" << std::endl;
			std::cout << "Enter angle 1 (degrees): ";
			std::cin >> AAA_angle1;
			std::cout << "Enter angle 2 (degrees): ";
			std::cin >> AAA_angle2;

			AAA_angle3 = 180 - (AAA_angle1 + AAA_angle2);
			AAA_side1 = (sin(AAA_angle1 * PI / 180)) / (sin(AAA_angle3 * PI / 180));
			AAA_side2 = (sin(AAA_angle2 * PI / 180)) / (sin(AAA_angle3 * PI / 180));

			if (AAA_angle3 <= 0)
			{
				std::cout << "Unsolvable";
			}
			else
			{
				std::cout << "Angle 3 is " << AAA_angle3 << " degrees." << std::endl;
				std::cout << "\nThe sides of the triangle are proportional.";
				std::cout << "\nFor example, if one side is 1\nSecond side equals " << AAA_side1 << "\nThird side equals " << AAA_side2 << std::endl;
			}

			break;

		case AAS:
			std::cout << "You have chosen AAS: Angle Angle Side.\n" << std::endl;

			std::cout << "Enter angle 1 (degrees): ";
			std::cin >> AAS_angle1;
			std::cout << "Enter angle 2 (degrees): ";
			std::cin >> AAS_angle2;
			std::cout << "Enter side length: ";
			std::cin >> AAS_side1;

			AAS_angle3 = 180 - (AAS_angle1 + AAS_angle2);
			AAS_side2 = (sin(AAS_angle1 * PI / 180)) * (AAS_side1) / (sin(AAS_angle2 * PI / 180));
			AAS_side3 = (sin(AAS_angle3 * PI / 180)) * (AAS_side1) / (sin(AAS_angle2 * PI / 180));

			if (AAS_angle3 <= 0 || AAS_side1 <= 0)
			{
				std::cout << "Unsolvable." << std::endl;
			}
			else
			{
				std::cout << "Angle 3 is " << AAS_angle3;
				std::cout << "\nThe second side equals " << AAS_side2;
				std::cout << "\nThe third side equals " << AAS_side3;
			}

			break;

		case ASA:
			std::cout << "You have chosen ASA: Angle Side Angle." << std::endl;
			break;

		case SAS:
			std::cout << "You have chosen SAS: Side Angle Side." << std::endl;
			break;

		case SSA:
			std::cout << "You have chosen SSA: Side Side Angle." << std::endl;
			break;

		case SSS:
			std::cout << "You have chosen SSS: Side Side Side." << std::endl;
			break;

		case Exit_Program:

			break;
	}

	return 0;
	
}

