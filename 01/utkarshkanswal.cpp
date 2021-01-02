/*
Nmae: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/


class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<int> temp;
        for(int i=0;i<arr.size();i++)
        {
            temp.push_back(arr[i]);
            for(int j=0;j<pieces.size();j++)
            {
                if(pieces[j].size()==temp.size()&&pieces[j]==temp)
                {
                    temp.clear();
                    break;
                }
            }
        }
        if(temp.empty()==true)
            return true;
        return false;
    }
};
