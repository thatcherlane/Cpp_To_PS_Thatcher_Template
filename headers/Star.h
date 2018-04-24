// Star.h
// The custom Star shape class

#ifndef STAR_H
#define STAR_H

#include "Shape.h"

class Star : public Shape {
public:
  Star(Star &) = default;
  Star(double dimension);
  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
};

#endif
