/* Name: Utkarsh Kumar
Roll No:B18EC033
Leetcode Username: utkarshkanswal
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        map<char,int> mp;
        int i=0,j=0;
        int mx=0;
        while(i<n)
        {
             if(mp[s[i]]>0)
             {
                while(j<i)
                {
                    if(s[j]==s[i])
                    {
                        j++;
                        break;
                    }
                    else
                        mp[s[j]]--;
                    j++;
                }
             }
            else
            mp[s[i]]++;
            mx=max(mx,i-j+1);
            i++;
        }
        return mx;
    }
};