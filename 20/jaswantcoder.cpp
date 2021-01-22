/*
Name: Jaswant Arya
Roll no.: B17CS036
Leetcode username: jaswantcoder
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> op;
        op[')']='(';
        op[']']='[';
        op['}']='{';
        for(auto it:s)
        {
            if(it=='(' || it=='{' || it=='[')
                st.push(it);
            else if(!st.empty() && st.top()==op[it])
            {
                st.pop();
            }
            else return false;
        }
        if(st.empty()) return true;
        
        return false;
    }
};
