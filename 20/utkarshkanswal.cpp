/*Name: Utkarsh KUMAR
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()==true)
                    return false;
                if(s[i]==')'&&st.top()=='(')
                    st.pop();
                else if(s[i]=='}'&&st.top()=='{')
                    st.pop();
                else if(s[i]==']'&&st.top()=='[')
                    st.pop();
                else
                    return false;    
            }
        }
        if(st.empty()==true)
        return true;
        else
            return false;
    }
};