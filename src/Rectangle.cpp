// Rectangle.cpp
// Implementation of rectangle class

#include <sys/types.h>
#include "Canvas.h"
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) {
	_width = width;
	_height = height;
	_x = 0;
	_y = 0;
}

std::string Rectangle::drawCurrentAboveToString() {
	std::stringstream result;

	result << Canvas::psHeader(getX() * getUnits(), getY() * getUnits());
	result << Canvas::psMove(0, 0);
	result << Canvas::psLine(getWidth() * getUnits(), 0);
	result << Canvas::psLine(getWidth() * getUnits(), getHeight() * getUnits());
	result << Canvas::psLine(0, getHeight() * getUnits());
	result << Canvas::psFooter();

	return result.str();
}

std::string Rectangle::drawCurrentBelowToString() {
	return {};
}
