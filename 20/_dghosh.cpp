/*Name: Debayan Ghosh
  Roll No: B19ME002
  LeetCode Username: _dghosh*/
  class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        for(char c:s){
            if(c=='('||c=='{'||c=='[') v.push_back(c);
            else if(c==')')
            {   if(v.size()==0) return false; 
                else if(v.back()=='(') v.pop_back();
                else return false;
            }
            else if(c=='}'){
                if(v.size()==0) return false;
                else if(v.back()=='{') v.pop_back();
                else return false;
            }
            else if(c==']'){
                if(v.size()==0) return false;
                else if(v.back()=='[') v.pop_back();
                else return false;
            }
            
        }
        if(v.size()==0) return true;
        return false;
    }
};
