/* Name: Utkarsh kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
  
public:
    string getSmallestString(int n, int k) {
        string res="";
        for(int i=1;i<=n;i++)
        {
            int temp=(n-i)*26;
            if(temp>=(k-1))
            {
                res+="a";
                k--;
            }
            else
            {
                char ch=((k%26)+'a'-1);
                if(ch=='`')
                    res+="z";
                else
                    res+=ch;
                break;
            }
        }
        while(res.size()<n)
        {
            res+="z";
        }
        return res;
    }
};