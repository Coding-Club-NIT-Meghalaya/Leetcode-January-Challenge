/*
Name: Jaswant Arya
Roll no.: B17CS036
Leetcode username: jaswantcoder
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
       set<int> st;
        
        for(auto it:arr)
            st.insert(it);
        
        int j=0;
       for(int i=0;i<k;i++)
       {
           j++;
           while(st.find(j)!=st.end())
           {
               j++;
           }
           
       }
        return j;
    }
};
