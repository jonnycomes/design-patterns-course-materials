#include "List.h"
#include "BubbleSortStrategy.h"
#include "QuickSortStrategy.h"
#include <vector>

int main() {
  // Start with the list 8, 7, 2:
  std::vector<int> numbers = {8, 7, 2};
  List list(numbers);
  // Print the initial list:
  list.print();
  // Set the sorting strategy to bubble sort:
  BubbleSortStrategy bs;
  list.setSortStrategy(&bs);
  // Sort the list and print to see what happens:
  list.sort();
  list.print();
  // Set the sorting strategy to quick sort:
  QuickSortStrategy qs;
  list.setSortStrategy(&qs);
  // Sort the list again and print:
  list.sort();
  list.print();
}
