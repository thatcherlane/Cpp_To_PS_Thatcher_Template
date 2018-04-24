// Polygon.h
// The inherited Polygon concrete class

#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

class Polygon : public Shape {
public:
  Polygon(Polygon &) = default;
  Polygon(double numberOfSides, double dimension);
  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
  size_t getSides() const;
  double getStartingAngle() const;
  void setStartingAngle(double angle);
private:
  size_t _sides;
  double _startingAngle;
};

#endif
