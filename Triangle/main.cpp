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

	double ASA_angle1{};
	double ASA_angle2{};
	double ASA_angle3{};

	double ASA_side1{};
	double ASA_side2{};
	double ASA_side3{};

	double SAS_angle1{};
	double SAS_angle2{};
	double SAS_angle3{};

	double SAS_side1{};
	double SAS_side2{};
	double SAS_side3{};

	double SSA_side1{};
	double SSA_side2{};
	double SSA_side3{};
	double SSA_side4{};

	double SSA_angle1{};
	double SSA_angle2{};
	double SSA_angle3{};
	double SSA_angle4{};
	double SSA_angle5{};

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
				std::cout << "\nAngle 3 is " << AAA_angle3 << " degrees." << std::endl;
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
				std::cout << "\nAngle 3 is " << AAS_angle3 << " degrees.";
				std::cout << "\nThe second side equals " << AAS_side2;
				std::cout << "\nThe third side equals " << AAS_side3;
			}

			break;

		case ASA:
			std::cout << "You have chosen ASA: Angle, Side, Angle.\n" << std::endl;

			std::cout << "Enter angle 1 (degrees): ";
			std::cin >> ASA_angle1;
			std::cout << "Enter side length: ";
			std::cin >> ASA_side1;
			std::cout << "Enter angle 2 (degrees): ";
			std::cin >> ASA_angle2;

			ASA_angle3 = 180 - (ASA_angle1 + ASA_angle2);
			ASA_side2 = (sin(ASA_angle1 * PI / 180)) * (ASA_side1) / (sin(ASA_angle3 * PI / 180));
			ASA_side3 = (sin(ASA_angle2 * PI / 180)) * (ASA_side1) / (sin(ASA_angle3 * PI / 180));

			if (ASA_angle3 <= 0 || ASA_side1 <= 0)
			{
				std::cout << "Unsolvable.";
			}
			else
			{
				std::cout << "\nAngle 3 is " << ASA_angle3 << " degrees.";
				std::cout << "\nThe second side equals " << ASA_side2;
				std::cout << "\nThe third side equals " << ASA_side3;
			}

			break;

		case SAS:
			std::cout << "You have chosen SAS: Side, Angle, Side.\n" << std::endl;
			
			std::cout << "Enter first side length: ";
			std::cin >> SAS_side1;
			std::cout << "Enter angle 1 (degrees): ";
			std::cin >> SAS_angle1;
			std::cout << "Enter second side length: ";
			std::cin >> SAS_side2;

			SAS_side3 = sqrt((SAS_side1 * SAS_side1 + SAS_side2 * SAS_side2) - (2 * SAS_side1 * SAS_side2 * cos(SAS_angle1 * PI / 180)));
			SAS_angle2 = (asin((sin(SAS_angle1 * PI / 180))*(SAS_side1) / (SAS_side3))) * 180 / PI;
			SAS_angle3 = 180 - (SAS_angle1 + SAS_angle2);

			if (SAS_side1 <= 0 || SAS_side2 <= 0 || SAS_angle1 <= 0)
			{
				std::cout << "Unsolvable.";
			}
			else
			{
				std::cout << "\nThird side equals " << SAS_side3;
				std::cout << "\nSecond angle equals " << SAS_angle2 << " degrees.";
				std::cout << "\nThird angle equals " << SAS_angle3 << " degrees.";
 			}

			break;

		case SSA:
			std::cout << "You have chosen SSA: Side, Side, Angle.\n" << std::endl;

			std::cout << "Enter first side length: ";
			std::cin >> SSA_side1;
			std::cout << "Enter second side length: ";
			std::cin >> SSA_side2;
			std::cout << "Enter angle 1 (degrees): ";
			std::cin >> SSA_angle1;

			SSA_angle2 = (asin((sin(SSA_angle1 * PI / 180)) * (SSA_side2) / (SSA_side1))) * 180 / PI;
			SSA_angle3 = 180 - (SSA_angle1 + SSA_angle2);
			SSA_side3 = (sin(SSA_angle3 * PI / 180)) * (SSA_side1) / (sin(SSA_angle1 * PI / 180));
			// Second solution based on sin calculation
			SSA_angle4 = 180 - SSA_angle2;
			SSA_angle5 = 180 - (SSA_angle1 + SSA_angle4);
			SSA_side4 = (sin(SSA_angle5 * PI / 180)) * (SSA_side1) / (sin(SSA_angle1 * PI / 180));

			//First Solution
			if (SSA_side1 <= 0 || SSA_side2 <= 0 || SSA_angle1 <= 0)
			{
				std::cout << "Unsolvable";
			}
			else
			{
				std::cout << "\nFirst Solution:";
				std::cout << "\nThird side equals " << SSA_side3;
				std::cout << "\nSecond angle equals " << SSA_angle2 << " degrees.";
				std::cout << "\nThird angle equals " << SSA_angle3 << " degrees.";
			}

			//Second Solution
			if (SSA_angle1 + SSA_angle4 + SSA_angle5 > 180)
			{
				std::cout << "\n\nSecond solution does not exist.";
			}
			else
			{
				std::cout << "\n\nSecond Solution:";
				std::cout << "\nThird side equals " << SSA_side4;
				std::cout << "\nSecond angle equals " << SSA_angle4 << " degrees.";
				std::cout << "\nThird angle equals " << SSA_angle5 << " degrees.";
			}

			break;

		case SSS:
			std::cout << "You have chosen SSS: Side Side Side." << std::endl;
			break;

		case Exit_Program:

			break;
	}

	return 0;
	
}

