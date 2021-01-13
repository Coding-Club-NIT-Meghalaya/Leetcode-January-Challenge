/*
B19CS039
Dorababu Arigi
DorababuArigi
*/
class Solution {
public:
   vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m,j=0;i<nums1.size()&&j<n;++i,++j){
            nums1[i]=nums2[j];
        }
        sort(nums1.begin(),nums1.end());
        return nums1;
    }
};
