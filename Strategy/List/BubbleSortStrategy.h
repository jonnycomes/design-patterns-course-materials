#ifndef BUBBLESORTSTRATEGY_H
#define BUBBLESORTSTRATEGY_H 

#include "SortStrategy.h"
#include <vector>

class BubbleSortStrategy : public SortStrategy {
public:
  void sort(std::vector<int>&);
};

#endif