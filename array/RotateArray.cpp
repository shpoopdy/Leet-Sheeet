#include <vector>
#include <cmath>

/*189. Rotate Array:
  Given an array, rotate the array to the right by k steps, where k is non-negative.

  Example:
    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
      rotate 1 steps to the right: [7,1,2,3,4,5,6]
      rotate 2 steps to the right: [6,7,1,2,3,4,5]
      rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

void rotate(vector<int>& nums, int k) {
  int newK = k % nums.size();
  int left = 0;
	int right = nums.size() - newK;
  vector<int> result(nums.size());
  for(int i = 0; i < nums.size(); i++){
    if(right <= nums.size() - 1){
      result[i]=nums[right];
      right++;
    }else{
      result[i] = nums[left];
      left++;
    }
  }
  nums = result;
}
