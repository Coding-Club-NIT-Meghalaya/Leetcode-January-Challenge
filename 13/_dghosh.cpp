/*Name: Debayan Ghosh
  Roll No: B19ME002
  LeetCode Username: _dghosh*/
  class Solution {
public:
    int numRescueBoats(vector<int>& peeps, int limit) {
        int ans=0;
        int i=0;
        int j=peeps.size()-1;
        sort(peeps.begin(),peeps.end());
        while(i<=j){
            if(peeps[i]+peeps[j]<=limit) ++i;
            --j;
            ++ans;
        }
        return ans;
    }
};
