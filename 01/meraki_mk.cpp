/*
Name: Meenakshi
Roll No.: B19CS006
LeetCode ID:  meraki_mk
*/

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int ans[101];
        int i;
        int l1 = pieces.size(), l2 = arr.size();
        for (i=1; i<101; i++)
            ans[i] = -1;
        for (i=0; i<l1; i++) 
           ans[pieces[i][0]] = i;
        for (i=0; i<l2;) 
        {
            if (ans[arr[i]] == -1) 
                return 0;
            for (int n: pieces[ans[arr[i]]]) 
            {
                if (n != arr[i]) 
                    return 0;
                i++;
            }
        }
        return 1;
    }
};
