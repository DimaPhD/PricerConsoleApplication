// PricerConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "..\NumericsLibrary\NumericalIntegration.h"
#include "..\PricingLibrary\NumericalIntegration.h"
#include <string>

int main()
{
    std::cout << "Hello World!\n";
	int x = 23;
	NumericalIntegration NumInt(1000, -1.0, 3.0);
	//double result = NumericalIntegration::f1(2.0);
	auto result = NumInt(payoff);
	std::cout << "Result of Integration: " << result << "\n";
	std::cout << static_cast<char>(x) << "\n";
	std::cout << std::to_string(x) << std::endl;

	auto ch = std::to_string(x);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
