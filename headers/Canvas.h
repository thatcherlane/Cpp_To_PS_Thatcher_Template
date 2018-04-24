// Canvas.h
// Canvas container class

#ifndef CANVAS_H
#define CANVAS_H

#include <string>
#include <sstream>
#include "Expression.h"


class Canvas : public Expression {
public:
  Canvas(const std::string & fileOut);
  ~Canvas();
  void addNewPage();
  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;

  static std::string psBegin();
  static std::string psPageBreak();
  static std::string psLine(int,int);
  static std::string psMove(int,int);
  static std::string psArc(int,int,double,int,int);
  static std::string psHeader(int x, int y);
  static std::string psFooter();

private:
  size_t _currentPage;
  std::string _fileOut;
};

#endif
