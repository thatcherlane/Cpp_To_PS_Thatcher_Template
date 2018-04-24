//
//  Circle.hpp
//
//
//  Created by Thatcher Lane on 4/1/18.
//

#ifndef Circle_h
#define Circle_h

#include <stdio.h>
#include "Shape.h"

class Circle: public Shape {
public:
    Circle(): Shape(), _radius(0) {};
    Circle(int x, int y, double radius) : Shape(x, y, 2*radius, 2*radius), _radius(radius) {};
    Circle(double radius) : Circle(0,0,radius) {};

    std::string draw();
    std::string draw(int x, int y) const;
    std::string drawCurrentAboveToString();
    std::string drawCurrentBelowToString();

    double getRadius();
private:
    double _radius;
};


#endif /* Circle_h */
