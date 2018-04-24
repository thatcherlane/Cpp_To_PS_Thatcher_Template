// Square.h
// Draws a square.

#ifndef SQUARE_H
#define SQUARE_H

#include <sys/types.h>
#include <string>
#include "Polygon.h"

class Square : public Polygon {
public:
	Square() = default;
	Square(double sideLength) : Polygon(4, sideLength) {setStartingAngle(45);};
};

#endif
