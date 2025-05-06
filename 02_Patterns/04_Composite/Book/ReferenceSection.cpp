#include "ReferenceSection.h"
#include <string>
#include <iostream>

using std::cout;

void ReferenceSection::addReference(std::string reference) {
  _references.push_back(reference);
}

void ReferenceSection::print() {
  // cout << "\nReferences:";
  // cout << "\n-----------\n";
  // for(auto reference : _references) {
  //   cout << reference << "\n";
  // }
  // cout << "\n";
}
