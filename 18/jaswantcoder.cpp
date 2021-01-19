/*
Name: Jaswant Arya
Roll no.: B17CS036
Leetcode username: jaswantcoder
*/

#define fi first
#define se second

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        map<int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        for(auto &it:m)
        {
            
            if(m[k-it.fi] )
            {
                if(k-it.fi == it.fi)
                {
                    ans+= (it.se)/2;
                    it.se=0;
                }
                else
               { ans+=min(m[k-it.fi], it.se);
                m[k-it.fi]=0;
                it.se=0;
                
                }
            }
        }
        
        return ans;
    }
};
