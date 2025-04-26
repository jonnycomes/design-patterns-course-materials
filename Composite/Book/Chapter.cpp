#include "Chapter.h"
#include <string>
#include <iostream>

using std::cout;

Chapter::Chapter() {}

Chapter::Chapter(std::string title, std::string contents) {
  _title = title;
  _contents = contents;
}

void Chapter::add(BookComponent* section) {
  _children.push_back(section);
}

void Chapter::print() {
  cout << "\n" << _title << "\n";
  for(int i = 0; i < _title.length(); ++i) { cout << "-"; }
  cout << "\n" << _contents << "\n";
  for(auto child : _children) { child->print(); }
}