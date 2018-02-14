//
//  main.cpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 12/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Oval.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
	while(true) {
		cout << "Enter the shape name: circle / oval / rectangle / square / triangle " << endl;
		string line;
		std::getline(std::cin, line);
		while (line.empty())
			std::getline(std::cin, line);
		
		Shape *shapePtr = nullptr; // base-class pointer
		if(line == "circle") {
			Circle *circle = new Circle;
			shapePtr = circle;
		} else if (line == "oval") {
			Oval *oval = new Oval;
			shapePtr = oval;
		} else if (line == "rectangle") {
			Rectangle *rec = new Rectangle;
			shapePtr = rec;
		} else if (line == "square") {
			Square *sq = new Square;
			shapePtr = sq;
		} else if (line == "triangle") {
			Triangle *sq = new Triangle;
			shapePtr = sq;
		} else {
			continue;
		}
		
		shapePtr->getInput();
		shapePtr->calculate();
		shapePtr->print();
		
	}
}
