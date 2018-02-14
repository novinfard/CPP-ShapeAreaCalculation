//
//  Square.cpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 14/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Square.hpp"

#include <iostream>
#include <math.h>

using namespace std;

Square::Square() {
	
}

void Square::getInput() {
	cout << "Enter the width :" << endl;
	string line;
	std::getline(std::cin, line);
	while (line.empty())
		std::getline(std::cin, line);
	double temp = ::atof(line.c_str());
	setWidth(temp);
	setHeight(temp);
}
