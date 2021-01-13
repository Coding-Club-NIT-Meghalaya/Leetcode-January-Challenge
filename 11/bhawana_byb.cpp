/*bhawana maurya
b19cs022
bhawana_byb*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
        for(int i=0;i<n;i++){
        nums1[i+m]=nums2[i];
            }
        sort(nums1.begin(),nums1.end());
    }
};
