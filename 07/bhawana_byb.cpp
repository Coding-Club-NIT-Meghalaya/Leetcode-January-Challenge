/*
bhawana maurya 
b19cs022
bhawana_byb
*/class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<char> st;
        int i=0,j=0,m=0;
        while(i<n)
        {
            if(st.count(s[i])==0)
            {
                st.insert(s[i]);
                int l=st.size();
;                m=max(m,l);
                i++;
            }
            else
            {
                st.erase(s[j]);
                j++;
            }
        }
        return m;
    
    }
};
