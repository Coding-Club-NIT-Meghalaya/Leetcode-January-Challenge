
/* Name: Utkarsh Kumar
   Roll No. B18EC033
   Leetcode Username: utkarshkanswal
*/


class Solution {
    int res=0;
    string ans="";
    void solve(string s,int l,int r,int len)
    {
            string temp="";
            while(l>=0&&r<s.size())
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                    len+=2;
                }
                else
                    break;
            }
            if(len>res)
            {
                
                for(int idx=l+1;idx<r;idx++)
                {
                    temp+=s[idx];
                }
                ans=temp; 
                res=len;
            }
    }
public:
    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++)
        {
            int l=i-1;
            int r=i+1;
            int len=1;
            solve(s,l,r,len);
            if(i<s.size()-1&&s[i]==s[i+1])
            {
                r=i+2;
                len++;
                solve(s,l,r,len);
            }
        }
        return ans;
    }
};