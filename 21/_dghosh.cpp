/*Name: Debayan Ghosh
  Roll No: B19ME002
  LeetCode USername: _dghosh
 */
 class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int> st;
        int to_remove=nums.size()-k;
        for(auto x:nums){
            while(!st.empty()&&to_remove>0&&st.top()>x){
                st.pop();
                to_remove--;
            }
            st.push(x);
        }
        while(to_remove>0){ 
            st.pop();
            --to_remove;
        }
        nums.clear();
        nums.resize(k);
        k-=1;
        while(!st.empty()){
            nums[k--]=st.top();
            st.pop();
        }
        return nums;
    }
};
