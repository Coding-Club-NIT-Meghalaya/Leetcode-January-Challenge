#define all(v) v.begin(),v.end()
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(all(nums));
        return nums[nums.size()-k];
        
        
        
    }
};
