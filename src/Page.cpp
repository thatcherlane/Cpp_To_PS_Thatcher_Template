// Page.cpp
// Simple new page class

#include "Page.h"

Page::Page(size_t pageNumber) : _pageNumber(pageNumber) {

}

std::string Page::drawCurrentAboveToString() {
  return "showpage\n\n%%PAGE " + std::to_string(_pageNumber) + "\n";
}
std::string Page::drawCurrentBelowToString() {
  return {};
}
