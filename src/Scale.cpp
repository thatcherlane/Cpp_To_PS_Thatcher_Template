// Scale.cpp
// Implementation of Scale class

#include "Scale.h"
#include <string>
#include <sstream>

std::string Scale::drawCurrentAboveToString() {
	std::stringstream ss;
	ss << _scaleFactorX << " ";
	ss << _scaleFactorY << " ";
	ss << "scale\n";
	ss << _target->drawCurrentAboveToString();
	ss << _target->drawCurrentBelowToString();
	return ss.str();
}

std::string Scale::drawCurrentBelowToString() {
	return "";
}