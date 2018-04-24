// sandbox.cpp
// Contains example code to test framework on the spot, rather than with structured
// tests

#include "Polygon.h"
#include "Rotate.h"
#include "Spacer.h"
#include "Vertical.h"
#include "Layered.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Horizontal.h"
#include "Scale.h"
#include "Star.h"
#include "Triangle.h"
#include "Canvas.h"
#include "Square.h"

#include <iostream>
using std::cout;
using std::endl;

#include <memory>

int main () {
  Canvas testCanvas ("testCanvas.ps");
  Rectangle rectangle(2,2);
  rectangle.setPosition(1,1);
  testCanvas.addExpression(rectangle);

  Star starShape (3);
  starShape.setPosition(4,4);
  testCanvas.addExpression(starShape);

  Triangle triangle (2);
  Rotate triangleRotate(triangle, Rotate::LEFT);
  triangle.addExpression(triangleRotate);
  triangle.setPosition(6,6);
  testCanvas.addExpression(triangle);

  testCanvas.addNewPage();

  Polygon pentagon(5, 2);
  pentagon.setPosition(5,10);
  testCanvas.addExpression(pentagon);

  Circle circle(2, 2, 1);
  circle.setPosition(3,3);
  testCanvas.addExpression(circle);

  testCanvas.addNewPage();

  Square square(2);
  square.setPosition(4,10);
  testCanvas.addExpression(square);

  Rectangle rectangleLayer(2,2);
  rectangleLayer.setPosition(10,5);
  Rectangle rect2Layer (2,2);
  rect2Layer.setPosition(10,5);
  std::vector <std::shared_ptr<Shape>> shapes;
  shapes.push_back(std::make_shared<Rectangle>(rect2Layer));
  shapes.push_back(std::make_shared<Rectangle>(rectangleLayer));
  Vertical stacker(shapes);
  stacker.setPosition(3,3);
  testCanvas.addExpression(stacker);
}
