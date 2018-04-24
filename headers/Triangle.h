// Triangle.h
// Draws a square.

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <sys/types.h>
#include <string>
#include "Polygon.h"

class Triangle : public Polygon {
public:
	Triangle() = default;
	Triangle(double sideLength) : Polygon(3, sideLength) {};
};

#endif
