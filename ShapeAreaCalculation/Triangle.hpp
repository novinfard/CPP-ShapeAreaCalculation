//
//  Triangle.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 14/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "TwoDShape.hpp"

class Triangle: public TwoDShape {
public:
	Triangle();
	
	virtual void getInput() override;
	virtual void calculate() override;
	
	void setBase(double);
	void setHeight(double);
	
private:
	double height;
	double base;
};


#endif /* Triangle_hpp */
