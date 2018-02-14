//
//  TwoDShape.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 13/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef TwoDShape_hpp
#define TwoDShape_hpp

#include <stdio.h>
#include "Shape.hpp"

class TwoDShape: public Shape  {
public:
	TwoDShape();
	
	virtual void getInput() = 0; // pure virtual
	virtual void calculate() = 0; // pure virtual
};

#endif /* TwoDShape_hpp */
