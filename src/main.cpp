#include <iostream>
#include "../include/InsertionSort.h"

int main() {

  // Create a set of numbers so we can pass by reference into the insertion sort constructor.
  std::vector<int> nums = {20, 500, 3, 1};
  InsertionSort sortedNums(nums);
  sortedNums.printSortedNums();

  nums = {1, 4, 900, 100, 3};
  sortedNums.nums = nums;
  sortedNums.sort();
  sortedNums.printSortedNums();

  return 0;

}
