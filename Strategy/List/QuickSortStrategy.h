#ifndef QUICKSORTSTRATEGY_H
#define QUICKSORTSTRATEGY_H 

#include "SortStrategy.h"
#include <vector>

class QuickSortStrategy : public SortStrategy {
public:
  void sort(std::vector<int>&);
};

#endif