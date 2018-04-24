// Page.h
// Simple new page class

#ifndef PAGE_H
#define PAGE_H

#include "Expression.h"

class Page : public Expression {
public:
  Page(size_t pageNumber);
  std::string drawCurrentAboveToString() override;
  std::string drawCurrentBelowToString() override;
private:
  size_t _pageNumber;
};

#endif
