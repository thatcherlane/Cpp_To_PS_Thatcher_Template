//Shape.cpp
// Implementation of shape class, see Shape.h for more details

#include <sys/types.h>
#include "Shape.h"

void Shape::setX(double x) {
	_x = x;
}

void Shape::setY(double y) {
	_y = y;
}

// Convenience method to set X and Y at the same time
void Shape::setPosition(double x, double y) {
	setX(x);
	setY(y);
}

double Shape::getX() {
	return _x;
}

double Shape::getY() {
	return _y;
}

void Shape::setWidth(double width) {
	_width = width;
}

void Shape::setHeight(double height) {
	_height = height;
}

// Convenience method to set width and height at the same time
void Shape::setBounds(double width, double height) {
	setWidth(width);
	setHeight(height);
}

double Shape::getWidth() {
	return _width;
}

double Shape::getHeight() {
	return _height;
}