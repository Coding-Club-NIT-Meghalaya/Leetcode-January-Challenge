/*
Satvik Singh
b19ee028
leetcode user id: dreamboysatvik*/


class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
    
        vector<bool> sel(pieces.size(),false);
        int i,j,k;
        for(i=0;i<arr.size();i++)
        {
            for(j=0;j<pieces.size();j++)
            {
                if(sel[j]==false)
                {
                    if(i+pieces[j].size()<=arr.size())
                    for(k=0;k<pieces[j].size();k++)
                    {
                        if(arr[i+k]!=pieces[j][k])
                        {
                            break;
                        }
                    }
                    if(k==pieces[j].size())
                    {
                        i+=k-1;
                        break;
                    }
                }
            }
            if(j==pieces.size())
                return false;
        }
        
        return true;
        
        
    }
};
