/*
Name: Tanisha Kant
Roll no:B19EC002
/*
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int result =0 ,num=1, i =0;
        while(k != 0)
        {
            if(i< arr.size() && arr[i] == num)
                i++;
            else
                k--;
            if(k==0)
                result= num;
            num++;
        }
        return result;
    }
};
