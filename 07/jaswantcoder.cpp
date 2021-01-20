/*
Name: Jaswant Arya
Roll no.: B17CS036
Leetcode username: jaswantcoder
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0,ans=0;
           
       int a[256];
        memset(a,-1,sizeof(a));
     
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]]>=j)
            {
                j=a[s[i]]+1;
              
            }
          a[s[i]] = i;
            ans=max(ans,i-j+1);
        }
        return ans;
        
    }
};
