//
//  Square.hpp
//  ShapeAreaCalculation
//
//  Created by Soheil on 14/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
#include "Rectangle.hpp"

class Square: public Rectangle {
public:
	Square();
	
	virtual void getInput();
};

#endif /* Square_hpp */
