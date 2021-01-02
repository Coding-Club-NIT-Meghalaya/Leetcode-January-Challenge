/* Name: DEBAYAN GHOSH
   ROLL NO:B19ME002
   LeetCode Username: _dghosh*/
   class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        string s(arr.begin(),arr.end());
        for(int i=0;i<pieces.size();++i){
            if(pieces[i].size()>1){
                string str(pieces[i].begin(),pieces[i].end());
                if(s.find(str)==string::npos) return false;
                continue;
            }
            for(auto it:pieces[i])
            if(find(arr.begin(),arr.end(),it)==arr.end()) return false;
            
        }
        //if(equal(arr.begin(),arr.end(),v.begin()))
           return true;
        //return false;
    }
};
