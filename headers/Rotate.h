// Rotate.h
// An inherited expression that sets gsave/grestore flags on an object and
// rotates it by a given amount.

#ifndef ROTATE_H
#define ROTATE_H

#include "Expression.h"
#include "Shape.h"
#include <utility>
#include <memory>

class Rotate : public Expression {
public:
  enum RotationAngle {LEFT = 90, FLIP = 180, RIGHT = 270};

  Rotate(Shape & shape, RotationAngle rotationAmount) : _rotationAmount(rotationAmount) {
    _target = &shape;
    setEnclosing();
  }

  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  RotationAngle _rotationAmount;
  Shape * _target;
};

#endif
