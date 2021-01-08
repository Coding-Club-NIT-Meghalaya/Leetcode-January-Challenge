/*
Name:  Shivam Pandit
Roll no.:  B19CS013
Leetcode username:  ship51
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    
        
        int index=0, num=0;
        for (int i=1; i<=k; ){
            
            num++;
            if (index<arr.size() && num==arr[index]){
                index++;
            }
            else  i++;
        }
        return num;
    }
};
