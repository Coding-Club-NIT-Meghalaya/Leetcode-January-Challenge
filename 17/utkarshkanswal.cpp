/*Name: Utkarsh Kumar
RollNo: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>0)
            {
                mp[nums[i]]--;
                if(mp[k-nums[i]]>0)
                {
                    mp[k-nums[i]]--;
                    count++;
                }
                else
                    mp[nums[i]]++;
            }
        }
        return count;
        
    }
};