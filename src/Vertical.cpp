// Vertical.cpp
// A vertically drawn stack of shapes

#include "Vertical.h"
#include "Shape.h"

Vertical::Vertical(std::initializer_list<std::shared_ptr<Shape>> & shapes) : Composite(shapes) {
	setSpacingMult(0,1);
}

Vertical::Vertical(std::vector <std::shared_ptr<Shape>> & shapes) : Composite(shapes) {
	setSpacingMult(0,1);
}
