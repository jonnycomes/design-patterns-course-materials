#include "String.h"
#include <iostream>
#include <vector>

using std::string;

String::String(std::string str) {
  _str = str;
}

std::string String::getStdString() {
  return _str;
}

int String::getLength() {
  return 0; // TODO: Replace this Stub with proper implementation
}

// TODO: Implement the rest of the methods declared in String.h
