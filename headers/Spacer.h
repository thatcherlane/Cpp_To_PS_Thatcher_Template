// Spacer.h
// Inherited spacer class

#ifndef SPACER_H
#define SPACER_H

#include "Shape.h"

class Spacer : public Shape {
public:
  Spacer(double width, double height);
  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
};

#endif
