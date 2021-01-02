/*
Name: Ritik Mani Yadav
Roll No.: B19CS027
LeetCode ID: ritikmanimayank007
*/

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<int> v(101,-1);
        for(int i=0;i<pieces.size();i++)
            v[pieces[i][0]] = i;
        for(int i=0;i<arr.size();){
            int p = v[arr[i]], j=0;
            if(p==-1)
               return false;
            while(j<pieces[p].size()){
                if(arr[i++]!=pieces[p][j++])
                    return false;
            }
        }
        return true;
    }
};
