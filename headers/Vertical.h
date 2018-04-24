// Vertical.h
// Container that stacks Shapes on top of each other

#ifndef VERTICAL_H
#define VERTICAL_H

#include "Composite.h"
#include "Shape.h"
#include <memory>
#include <vector>
#include <initializer_list>

class Vertical : public Composite {
public:
  Vertical(std::vector <std::shared_ptr<Shape>> & shapes);
	Vertical(std::initializer_list<std::shared_ptr<Shape>> & shapes);
};

#endif
