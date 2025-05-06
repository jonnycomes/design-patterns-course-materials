#include "List.h"
#include "SortStrategy.h"
#include <vector>
#include <iostream>

// Constructors:
List::List() {}
List::List(std::vector<int> numbers) {
  _numbers = numbers;
}

// Setter:
void List::setSortStrategy(SortStrategy* sortStrategy) {
  _sortStrategy = sortStrategy;
}

// Prints the list to the terminal separated by spaces
void List::print() {
  for(int number : _numbers) {
    std::cout << number << " ";
  }
  std::cout << '\n';
}

// Uses the sorting strategy to sort the 
// list into increasing order.
void List::sort() {
  /**********************************
  TODO: implement this method using 
        the strategy pattern
  ***********************************/
}
