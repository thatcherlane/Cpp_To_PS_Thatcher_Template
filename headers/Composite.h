// Composite.h
// Base class for all shapes that use multiple other shapes

#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "Expression.h"
#include "Shape.h"
#include <memory>
#include <vector>
#include <initializer_list>

class Composite : public Expression {
public:
  Composite (std::vector <std::shared_ptr<Shape>> & shapes);
  Composite (std::initializer_list<std::shared_ptr<Shape>> & shapes);

  void setSpacing(double x, double y);

  void setSpacingMult(double xMult, double yMult);

  void setPosition(double x, double y);

  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  double _xMult;
  double _yMult;
  double _xOrigin;
  double _yOrigin;
};

#endif
