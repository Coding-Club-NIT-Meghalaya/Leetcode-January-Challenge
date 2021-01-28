/* Name: Utkarsh Kumar
Roll No:B18EC033
Leetcode Username: utkarshkanswal
*/



class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        for(auto it:word1)
        {
            str1+=it;
        }
         for(auto it:word2)
        {
            str2+=it;
        }
        return (str1==str2)?true:false;
    }
};