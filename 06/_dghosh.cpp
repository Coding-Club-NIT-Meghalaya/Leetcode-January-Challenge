/* Name: Debayan Ghosh
   Roll No: B19ME002
   LeetCode Username:_dghosh*/
   class Solution {
public:
    inline int findKthPositive(vector<int>& arr, int k) {
        int pos,i=1;
        vector<int> nos;
        for(int j=0;j<arr.size();++j){
            while(i!=arr[j]){
                nos.push_back(i);
                ++i;
            }
            ++i;
        }
       for(auto it:nos) cout<<it<<" ";
       if(k>nos.size()) return arr[arr.size()-1]+(k-nos.size());
       else return nos[k-1];
    }
};
