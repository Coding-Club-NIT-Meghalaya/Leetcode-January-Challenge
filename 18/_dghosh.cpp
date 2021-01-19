/*Name: Debayan Ghosh
  Roll No: B19ME002
  LeetCode Username: _dghosh*/
  class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       if(nums.size()<2) return 0;
       sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0;
        int j=nums.size()-1;
       vector<int>::iterator it1,it2;
        while(i<j){
            if((nums[i]+nums[j])==k){
                ++cnt;
                ++i;
                --j;
                continue;
            }
            else if((nums[i]+nums[j])<k){
                ++i;
                continue;
            }
            else{
                --j;
            }  
        }
        return cnt;
    }
};
