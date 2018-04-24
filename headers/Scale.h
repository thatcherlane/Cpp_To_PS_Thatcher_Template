// Scale.h
// An inherited expression that sets gsave/grestore flags on an object and
// scales it by a given amount.

#ifndef SCALE_H
#define SCALE_H

#include "Expression.h"
#include "Shape.h"

class Scale : public Expression {
public:
  	Scale(Shape &shape, double scaleFactorX, double scaleFactorY) {
		_target = &shape;
		_scaleFactorX = scaleFactorX;
		_scaleFactorY = scaleFactorY;
    	setEnclosing();
	}

	std::string drawCurrentAboveToString() override;
	std::string drawCurrentBelowToString() override;

private:
	Shape *_target;
	double _scaleFactorX;
	double _scaleFactorY;
};

#endif
