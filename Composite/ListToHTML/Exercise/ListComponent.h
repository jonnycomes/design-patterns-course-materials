#ifndef LISTCOMPONENT_H
#define LISTCOMPONENT_H

#include <fstream>

class ListComponent {
public:
  virtual void print(std::ofstream&) = 0;
};

#endif
