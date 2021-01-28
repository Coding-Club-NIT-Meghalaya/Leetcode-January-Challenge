/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
    int fen[100002];
    int mod=1000000007;
    void update(int i,int n)
    {
        while(i<n)
        {
            fen[i]+=1;
            i+=(i&(-i));
        }
    }
    int query(int i)
    {
        int s=0;
        while(i>0)
        {
            s+=(fen[i]);
            i=i-(i&(-i));
        }
        return s;
    }
public:
    int createSortedArray(vector<int>& instructions) {
        int n=instructions.size();
        memset(fen,0,sizeof(fen));
        int mx=*max_element(instructions.begin(),instructions.end());
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int temp1=query(instructions[i]-1);
            int temp2=query(mx)-mp[instructions[i]];
            res=(res%mod+min(temp1,(temp2-temp1))%mod)%mod;
            update(instructions[i],mx+1);
            mp[instructions[i]]++;
        }
        return res;
    }
};