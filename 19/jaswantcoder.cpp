/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcode username: jaswantcoder
*/
class Solution {
public:
    string longestPalindrome(string s) {
        int i,j;
        bool dp[1001][10001];
        memset(dp, false, sizeof(dp));
        int u=0,v=1;
      int   n=s.size();
        if(n<=1)
            return s;
      
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=s.size()-i;j++)
            {
                if(i==1)
                    dp[j][j]=true;
                else if(i==2)
                {
                    if(s[j]==s[j+1])
                       { dp[j][j+1]=true;
                        u=j;
                         v=i;
                       }
                }
                else
                   { if(s[j]==s[j+i-1] && dp[j+1][j+i-2])
                        {dp[j][j+i-1]=true;
                           u=j;
                         v=i;
                        }}
            }
            
        }
        
        return s.substr(u,v);
        
        
    }
};
