//
//  Oval.cpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 14/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Oval.hpp"

#include <iostream>
#include <math.h>

using namespace std;

Oval::Oval() {
	
}

void Oval::getInput() {
	cout << "Enter the first radius :" << endl;
	string line;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	setFirstRadious(::atof(line.c_str()));
	
	cout << "Enter the second radius :" << endl;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	setSecondRadious(::atof(line.c_str()));
}

void Oval::calculate() {
	area = M_PI * firstRadious * secondRadious;
}

void Oval::setFirstRadious(double rValue) {
	if(rValue >= 0)
		firstRadious = rValue;
}

void Oval::setSecondRadious(double rValue) {
	if(rValue >= 0)
		secondRadious = rValue;
}

