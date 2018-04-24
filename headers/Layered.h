//
//  Layered.h
//  cpp_to_ps

#ifndef Layered_h
#define Layered_h

#include <stdio.h>
#include "Composite.h"

#include <initializer_list>
using std::initializer_list;

class Layered : public Composite
{
public:
  Layered(std::vector <std::shared_ptr<Shape>> & shapes);
  Layered(std::initializer_list<std::shared_ptr<Shape>> & shapes);
};


#endif
