/* Name: Utkarsh Kumar
 Rool No: B18EC033
 Leetcode Username: utkarshkanswal
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        return nums[k-1];
    }
};