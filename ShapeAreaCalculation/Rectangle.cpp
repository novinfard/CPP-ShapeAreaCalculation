//
//  Rectangle.cpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 13/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Rectangle.hpp"
#include <iostream>
#include <math.h>

using namespace std;

Rectangle::Rectangle() {
	
}

void Rectangle::getInput() {
	cout << "Enter the width :" << endl;
	string line;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	width = ::atof(line.c_str());
	
	cout << "Enter the height :" << endl;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	height = ::atof(line.c_str());
}

void Rectangle::calculate() {
	area = width * height;
}

void Rectangle::setWidth(double rValue) {
	if(rValue >= 0)
		width = rValue;
}

void Rectangle::setHeight(double rValue) {
	if(rValue >= 0)
		height = rValue;
}
