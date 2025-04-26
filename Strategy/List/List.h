#ifndef LIST_H
#define LIST_H 

#include "SortStrategy.h"
#include <vector>

class List {
private:
  std::vector<int> _numbers;           // The list of numbers
  SortStrategy* _sortStrategy;         // The sorting strategy       
public:
  List();                              // Default constructor
  List(std::vector<int> numbers);      // Another constructor
  void setSortStrategy(SortStrategy*); // Setter
  void sort();                         // Sorts the list into increasing order
  void print();                        // Prints the list to the terminal separated by spaces
};

#endif