// Star.cpp
// Star class that will be the base class for all Stars

#include "Star.h"

Star::Star(double dimension) {
  setBounds(dimension, dimension);
}


std::string Star::drawCurrentAboveToString () {
  std::string StarPath;
  StarPath += "/sideLength " + convertUnits(getWidth(), 1) + " def\n";
  StarPath += "/xPos " + convertUnits(getX(), 1) + " sideLength 2.5 div sub def\n";
  StarPath += "/yPos " + convertUnits(getY(), 1) + " sideLength 3.5 div add def\n";
  StarPath += "xPos yPos moveto\n";
  StarPath += "currentpoint translate\n";
  StarPath += "0 1 4 {\n";
  StarPath += " sideLength 0 lineto\n";
  StarPath += " currentpoint translate\n";
  StarPath += " -144 rotate\n";
  StarPath += "} for\n";
  StarPath += "closepath\n";
  StarPath += "stroke\n";
  return StarPath;
}

std::string Star::drawCurrentBelowToString () {
  return {};
}
