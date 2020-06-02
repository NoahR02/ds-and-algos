#include <iostream>
#include <vector>
#include "../../include/InsertionSort.h"

/* My implementation of insertion sort has a time complexity of O(n^2).
   The insertion sort algorithm sorts the numbers from least to greatest by looping through and checking everything behind
   the iteration variable i via a nested for loop with the iteration variable k which decrements to check everything behind i.

   The larger the data set the slower it'll be as it's not only linear time but quadratic time.
*/

InsertionSort::InsertionSort(std::vector<int>& nums) : nums(nums){
  // The sorting functionality was put into a function so a person can reassign new values to nums and sort them properly.
  sort();
}

void InsertionSort::sort() {

  /* Steps :
    1. Create a for loop that starts at the first index.
    2. Create another for loop that starts behind i and decrease k on each loop.
    3. Check if the number behind is greater than the number it's on.
    4. Create two tmp variables so you can swap the values if the condition is true.
  */

  for(int i = 1; i < nums.size(); ++i ) {
    for(int k = i - 1; k < nums.size(); --k) {
      if(nums[k] > nums[k + 1]) {
        int tmp1 = nums[k];
        int tmp2 = nums[k + 1];
        nums[k + 1] = tmp1;
        nums[k] = tmp2;
      }
    }
  }
}

void InsertionSort::printSortedNums() {
  // Print all numbers in nums to show they are properly sorted.
  for(int num : nums) {
    std::cout << num << std::endl;
  }
}
