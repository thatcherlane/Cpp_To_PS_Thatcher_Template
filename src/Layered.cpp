//  Layered.cpp
//  cpp_to_ps

#include "Layered.h"
#include "Shape.h"

#include <iostream>
#include <algorithm>


Layered::Layered(std::vector <std::shared_ptr<Shape>> & shapes) : Composite(shapes) {
	setSpacingMult(0,0);
}

Layered::Layered(std::initializer_list<std::shared_ptr<Shape>> & shapes) : Composite(shapes) {
	setSpacingMult(0,0);
}
