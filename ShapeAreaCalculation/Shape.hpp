//
//  Shape.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 13/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>

class Shape {
public:
	Shape();
	
	virtual void getInput() = 0; // pure virtual
	virtual void calculate() = 0; // pure virtual
	void print();
	
protected:
	double area;
};

#endif /* Shape_hpp */
