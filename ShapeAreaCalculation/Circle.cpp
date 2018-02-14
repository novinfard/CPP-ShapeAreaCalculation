//
//  Circle.cpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 13/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
#include <math.h>

using namespace std;

Circle::Circle() {
	
}

void Circle::getInput() {
	cout << "Enter the radius :" << endl;
	string line;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	firstRadious = ::atof(line.c_str());
	secondRadious = firstRadious;
}

