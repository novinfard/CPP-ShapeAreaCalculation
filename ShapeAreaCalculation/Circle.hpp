//
//  Circle.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 13/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Oval.hpp"

class Circle: public Oval {
public:
	Circle();
	
	virtual void getInput();
};

#endif /* Circle_hpp */
