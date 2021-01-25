/* Name: Debayan Ghosh
   Roll No: B19ME002
   LeetCode Username: _dghosh
   */
   class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
         vector<int>::iterator it=find(nums.begin(),nums.end(),1);
        if(it==nums.end()) return true;
        int i=0;
        if(nums.size()==0) return true;
        for(it+=1;it!=nums.end();++it){
            if(*it!=1) ++i;
            else{
                if(i<k) return false;
                i=0;
            }
        }
        return true;
    }
};
