// Horizontal.h
// Container that puts shapes next to each other

#ifndef HORIZONTAL_H
#define HORIZONTAL_H

#include "Composite.h"
#include "Shape.h"
#include <vector>

class Horizontal : public Composite {
public:
	Horizontal(std::vector <std::shared_ptr<Shape>> & shapes);
	Horizontal(std::initializer_list<std::shared_ptr<Shape>> & shapes);
};

#endif
