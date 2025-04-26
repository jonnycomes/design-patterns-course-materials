#ifndef LIST_H
#define LIST_H

#include "ListComponent.h"
#include <string>
#include <vector>
#include <fstream>

class List : public ListComponent {
private:
  std::string _listName;
  std::vector<ListComponent*> _children;
public:
  List();
  List(std::string = "");
  void add(ListComponent*);
  void print(std::ofstream&);
};

#endif
