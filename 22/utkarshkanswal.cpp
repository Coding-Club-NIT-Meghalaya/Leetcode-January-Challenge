/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int> mp1,mp2;
        for(auto ch:word1)
            mp1[ch]++;
        for(auto ch:word2)
            mp2[ch]++;
        vector<int> v1,v2;
        for(auto it:mp1)
        {
            if(mp2[it.first]==0)
                return false;
            v1.push_back(it.second);
        }
        for(auto it:mp2)
        {
            if(mp1[it.first]==0)
                return false;
            v2.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2)
            return true;
        return false;
        
    }
};s