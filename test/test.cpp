#define CATCH_CONFIG_MAIN

#include "catch2.h"

#include "Circle.h"
#include "Layered.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Rotate.h"
#include "Shape.h"
#include "Spacer.h"
#include "Vertical.h"

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include <fstream>
using std::ios;
using std::ifstream;

#include <exception>
using std::exception;

#include <cstring>
#include <cstdlib>
using std::exit;
using std::memcmp;

bool equalFiles(ifstream& in1, ifstream& in2)
{
    ifstream::pos_type size1, size2;

    size1 = in1.seekg(0, ifstream::end).tellg();
    in1.seekg(0, ifstream::beg);

    size2 = in2.seekg(0, ifstream::end).tellg();
    in2.seekg(0, ifstream::beg);

    if(size1 != size2)
        return false;

    static const size_t BLOCKSIZE = 4096;
    size_t remaining = size1;

    while(remaining)
    {
        char buffer1[BLOCKSIZE], buffer2[BLOCKSIZE];
        size_t size = std::min(BLOCKSIZE, remaining);

        in1.read(buffer1, size);
        in2.read(buffer2, size);

        if(0 != memcmp(buffer1, buffer2, size))
            return false;

        remaining -= size;
    }

    return true;
}



TEST_CASE("Testing Circle"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/CircleCorrect.ps");
  f2.open("test/toTest/CircleTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Triangle"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/TriangleCorrect.ps");
  f2.open("test/toTest/TriangleTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Layered"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/LayeredCorrect.ps");
  f2.open("test/toTest/LayeredTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Polygon"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/PolygonCorrect.ps");
  f2.open("test/toTest/PolygonTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Rectangle"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/RectangleCorrect.ps");
  f2.open("test/toTest/RectangleTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Rotate"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/RotateCorrect.ps");
  f2.open("test/toTest/RotateTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Vertical"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/VerticalCorrect.ps");
  f2.open("test/toTest/VerticalTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Horizontal"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/HorizontalCorrect.ps");
  f2.open("test/toTest/HorizontalTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Scale"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/ScaleCorrect.ps");
  f2.open("test/toTest/ScaleTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}

TEST_CASE("Testing Spacer"){
  std::ifstream f1;
  std::ifstream f2;

  f1.open("test/correct/SpacerCorrect.ps");
  f2.open("test/toTest/SpacerTest.ps");

  bool returnVal = equalFiles(f1,f2);
  std::cout << std::boolalpha << returnVal << std::endl;

  REQUIRE(equalFiles(f1, f2));
}
