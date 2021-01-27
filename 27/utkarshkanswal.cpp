/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/


class Solution {
    int mod=1000000007;
public:
    int concatenatedBinary(int n) {
        int res=0;
        int count=1;
        for(int i=n;i>=1;i--)
        {
             int N=i;
             while(N>0)
             {
                if(N%2==1)
                res=(res%mod+count%mod)%mod;
                count=(count*2)%mod;
                N/=2;
             }
        }
        return res;
    }
};