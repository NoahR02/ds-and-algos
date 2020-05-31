#include <iostream>
#include <array>

int main() {
  std::array<int, 5> nums{100, 5, 12, 1,30};

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

  for(int num : nums) {
    std::cout << num << std::endl;
  }

  return 0;
}