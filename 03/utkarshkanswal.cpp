/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username:utkarshkanswal
*/

class Solution {
    void permute(vector<int> v,int idx,int &count)
    {
        if(idx==v.size())
        {
            count++;
            return;
        }
        for(int i=idx;i<v.size();i++)
        {
            swap(v[i],v[idx]);
            if(v[idx]%(idx+1)==0||(idx+1)%v[idx]==0)
            {
                permute(v,idx+1,count);
            }
            swap(v[i],v[idx]);
        }
    }
public:
    int countArrangement(int n) {
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        int count=0;
        permute(v,0,count);
        return count;
    }
};