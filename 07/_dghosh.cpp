/* Name: Debayan Ghosh
   Roll No: B19ME002
   LeetCode: _dghosh*/
   class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        vector<char> v;
        
        v.push_back(s[0]);
        int ans=1;
        for(int i=1;i<s.length();++i){
            if(find(v.begin(),v.end(),s[i])==v.end()) v.push_back(s[i]);
            else{
                v.erase(v.begin(),find(v.begin(),v.end(),s[i])+1);
                v.push_back(s[i]);
                
            }
           
            ans=(v.size()>ans)?v.size():ans;
            
        }
       
        return ans;
    }
};
