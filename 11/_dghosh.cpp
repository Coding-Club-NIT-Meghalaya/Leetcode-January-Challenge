/*Name: Debayan Ghosh
  Roll No:B19ME002
  LeetCode Username:_dghosh*/
  class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.empty())
            return;
        vector<int> v;
        int i,j=0;
        for(i=0;i<m&&j<n;){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i++]);
            }
            else{
                v.push_back(nums2[j++]);
            }
        }
        while(j<n){
            v.push_back(nums2[j++]);
        }
        while(i<m){
            v.push_back(nums1[i++]);
        }
        nums1=v;
           v.clear();
    return;
    }
};
