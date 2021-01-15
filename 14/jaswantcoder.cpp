/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcode username: jaswantcoder
*/

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(nums.size()==0)
            return -1;
        
      unordered_map<int,int> m;
        
         int target = accumulate(nums.begin(),nums.end(),0) - x;
        int s=0;
        int r=-1;
        m[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
               s+=nums[i];
            if(!m[s])
            m[s]=i;
            if(m.find(s-target)!=m.end())
            {
                r = max(r,i- m[s-target]);
            }
            
           
        }
        return r==-1?-1:nums.size()-r;
        
    }
};
