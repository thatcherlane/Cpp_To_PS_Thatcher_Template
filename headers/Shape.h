// Shape.h
// Abstract shape class inherited from Expression.
// All other shapes should inherit from this.

#ifndef SHAPE_H
#define SHAPE_H

#include <sys/types.h>
#include "Expression.h"

class Shape : public Expression {
public:
	Shape() = default;
	Shape(Shape &) = default;
    Shape(int x, int y, double width, double height): _x(x), _y(y), _width(width), _height(height) {}
    Shape(int x, int y) : _x(x), _y(y) {}
	void setX(double x);
	void setY(double y);
	void setPosition(double x, double y);
	double getX();
	double getY();
	void setWidth(double width);
	void setHeight(double height);
	void setBounds(double width, double height);
	double getWidth();
	double getHeight();
	virtual std::string drawCurrentAboveToString() = 0;
	virtual std::string drawCurrentBelowToString() = 0;
protected:
	double _x;
	double _y;
	double _width;
	double _height;
};

#endif
