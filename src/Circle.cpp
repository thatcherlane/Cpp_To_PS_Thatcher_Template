//
//  Circle.cpp
//
//
//  Created by Thatcher Lane on 4/1/18.
//

#include <sys/types.h>
#include "Canvas.h"
#include "Circle.h"

double Circle::getRadius(){
    return _radius;
}

std::string Circle::drawCurrentAboveToString(){
  std::stringstream ss;

  ss << "gsave\n";
  ss << "newpath\n " << convertUnits(getX(), 1) << " " << convertUnits(getY(), 1) << " translate\n";

  ss << Canvas::psArc(0,0,_radius * getUnits(),0,360);

  ss << Canvas::psFooter();

  return ss.str();
}

std::string Circle::drawCurrentBelowToString(){
  return {};
}
