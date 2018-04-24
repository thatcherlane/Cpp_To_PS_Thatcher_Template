// Rectangle.h
// Draws a rectangle.

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <sys/types.h>
#include <string>
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle() = default;
	Rectangle(double width, double height);
	std::string drawCurrentAboveToString() override;
  	std::string drawCurrentBelowToString() override;
};

#endif
