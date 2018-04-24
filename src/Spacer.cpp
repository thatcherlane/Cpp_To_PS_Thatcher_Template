// Spacer.cpp
// Inherited Spacer class

#include "Spacer.h"

Spacer::Spacer (double width, double height) : Shape(0, 0, width, height) {}

std::string Spacer::drawCurrentAboveToString() {
  std::string spacerBox;
  spacerBox += "newpath\n";
  spacerBox += convertUnits(getX(), 1) + " " + convertUnits(getY(), 1) + " moveto\n";
  spacerBox += convertUnits(getWidth(), 1) + " " + convertUnits(0, 1) + " rlineto\n";
  spacerBox += convertUnits(0, 1) + " " + convertUnits(getHeight(), 1) + " rlineto\n";
  spacerBox += "-" + convertUnits(getWidth(), 1) + " " + convertUnits(0, 1) + " rlineto\n";
  spacerBox += "closepath\n";
  spacerBox += "1 setgray\n";
  spacerBox += "fill\n";
  return spacerBox;
}

std::string Spacer::drawCurrentBelowToString() {
  return {};
}
