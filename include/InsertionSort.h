#ifndef DS_AND_ALGOS_INSERTIONSORT_H
#define DS_AND_ALGOS_INSERTIONSORT_H

#include <vector>

class InsertionSort {
public:
  InsertionSort(std::vector<int>& nums);
  std::vector<int> nums;
  void sort();
  void printSortedNums();
};

#endif //DS_AND_ALGOS_INSERTIONSORT_H
