/*
Name: Jaswant Arya
Roll no.: B17CS036
Leetcode username: jaswantcoder
*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& v1, vector<string>& v2) {
        string s1="",s2="";
        for(auto it:v1)
        {
            s1+=it;
        }
        for(auto it:v2)
            s2+=it;
        if(s1==s2)
            return true;
        return false;
    }
};
