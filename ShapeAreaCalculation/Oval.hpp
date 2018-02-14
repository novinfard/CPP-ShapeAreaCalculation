//
//  Oval.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 14/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Oval_hpp
#define Oval_hpp

#include <stdio.h>
#include "TwoDShape.hpp"

class Oval: public TwoDShape {
public:
	Oval();
	
	virtual void getInput() override;
	virtual void calculate() override;
	
	void setFirstRadious(double);
	void setSecondRadious(double);
	
private:
	double firstRadious;
	double secondRadious;
};

#endif /* Oval_hpp */
