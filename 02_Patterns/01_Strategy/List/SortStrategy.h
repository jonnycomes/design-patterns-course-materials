#ifndef SORTSTRATEGY_H
#define SORTSTRATEGY_H 

#include <vector>

class SortStrategy {
public:
  virtual void sort(std::vector<int>&) = 0;
};

#endif