#include "List.h"
#include <string>
#include <fstream>

List::List(std::string listName) {
  _listName = listName;
}

void List::add(ListComponent* child) {
  _children.push_back(child);
}

void List::print(std::ofstream& outFile) {
  /******************************************************** 
     TODO: Implement this method. 
   Recall: the stream outFile behaves like cout. In 
           particular, you can write things like
           outFile << "Hello World!\n";
           to print to the html file associated to outFile
  *********************************************************/
}
