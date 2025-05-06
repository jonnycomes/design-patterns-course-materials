#ifndef LISTITEM_H
#define LISTITEM_H

#include "ListComponent.h"
#include <string>
#include <fstream>

class ListItem : public ListComponent {
private:
  std::string _content;
public:
  ListItem(std::string = "");
  void print(std::ofstream&);
};

#endif
