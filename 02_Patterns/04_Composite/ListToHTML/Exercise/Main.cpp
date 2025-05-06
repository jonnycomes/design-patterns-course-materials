#include "List.h"
#include "ListItem.h"
#include <fstream>

int main() {
  // Create a list:
  List outerList("Here's a list");  
  ListItem item1("here's an item");
  outerList.add(&item1);
  ListItem item2("here's another item");
  outerList.add(&item2);
  ListItem item3("here's yet another item");
  outerList.add(&item3);
  List innerList("Here's a sublist");
  outerList.add(&innerList);
  ListItem item4("here's an item for my sublist");
  innerList.add(&item4);
  ListItem item5("here's another item for my sublist");
  innerList.add(&item5);
  List innerInnerList("Here's a sublist for my sublist");
  innerList.add(&innerInnerList);
  ListItem item6("here's an item for my inner inner list");
  innerInnerList.add(&item6);
  ListItem item7("here's one more item for my inner list");
  innerList.add(&item7);
  ListItem item8("here's one more item for my outer list");
  outerList.add(&item8);
  //Setup a file stream:
  std::ofstream outFile;
  outFile.open("output.html");
  // Print the list to output.html:
  outerList.print(outFile);
}
