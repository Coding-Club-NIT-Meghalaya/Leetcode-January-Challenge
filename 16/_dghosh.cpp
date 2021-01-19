/*Name: Debayan Ghosh
  Roll No: B19ME002
  LeetCode Username: _dghosh*/
  class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        return nums[k-1];
    }
};
