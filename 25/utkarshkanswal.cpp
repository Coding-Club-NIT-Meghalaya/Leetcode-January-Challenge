/* Name: Utkarsh Kumar
Roll No:B18EC033
Leetcode Username: utkarshkanswal
*/


class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int prev=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(prev!=-1&&nums[i]==1&&(i-prev-1)<k)
                return false;
            if(nums[i]==1)
                prev=i;
        }
        return true;
        
        
    }
};