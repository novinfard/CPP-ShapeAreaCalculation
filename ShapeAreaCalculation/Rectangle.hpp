//
//  Rectangle.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 13/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "TwoDShape.hpp"

class Rectangle: public TwoDShape {
public:
	Rectangle();
	
	virtual void getInput() override;
	virtual void calculate() override;
	
protected:
	double width;
	double height;
};


#endif /* Rectangle_hpp */
