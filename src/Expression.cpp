// Expression.cpp
// Implements member functions of the abstract Expression class that are not
// virtual

#include "Expression.h"
#include <fstream>
#include <utility>

Expression::Expression() : _enclosingExpression(false), _fileOutputted(false), _units(72) {}

std::shared_ptr<Expression> & Expression::operator[](size_t index) {
  return _subExpressions[index];
}

size_t Expression::getNumberOfSubExpressions() const {
  return _subExpressions.size();
}

bool Expression::checkFileOutputStatus() const {
  return _fileOutputted;
}

std::string Expression::drawToString() {
  std::string topEnclosingExpression;
  std::string enclosedExpression;
  std::string bottomEnclosingExpression;

  enclosedExpression += drawCurrentAboveToString() + "\n";
  for (auto & expression : _subExpressions) {
    if (!expression->_enclosingExpression)
      enclosedExpression += expression->drawToString();
    else if (expression->_enclosingExpression) {
      topEnclosingExpression += expression->drawCurrentAboveToString() + "\n";
      bottomEnclosingExpression += expression->drawCurrentBelowToString() + "\n";
    }
  }
  enclosedExpression += drawCurrentBelowToString() + "\n";
  return topEnclosingExpression + enclosedExpression + bottomEnclosingExpression;
}

void Expression::drawToFile(const std::string & file) {
  std::ofstream psWriter(file);
  psWriter << drawToString();
  _fileOutputted = true;
}

void Expression::setUnits(size_t units) {
  _units = units;
}

size_t Expression::getUnits() const {
  return _units;
}

void Expression::setEnclosing() {
  _enclosingExpression = true;
}

std::string Expression::convertUnits(double expr, size_t oppUnits) {
  auto convertedNum = std::to_string(expr * (getUnits() / oppUnits));
  if (convertedNum.find(".0") == std::string::npos)
    return convertedNum;
  for (int i = convertedNum.size() -1; i >= 0; --i) {
    if (convertedNum[i] == '0')
      convertedNum = convertedNum.substr(0, convertedNum.size()-1);
    else if (convertedNum[i] == '.') {
      convertedNum = convertedNum.substr(0, convertedNum.size()-1);
      break;
    }
    else
      break;
  }
  return convertedNum;
}

void Expression::addSharedExpression(std::shared_ptr<Expression> subExpression) {
  _subExpressions.push_back(subExpression);
}
