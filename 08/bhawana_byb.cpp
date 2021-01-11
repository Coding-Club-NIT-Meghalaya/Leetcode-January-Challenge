/*bhawana maurya
b19cs022
bhawana_byb
*/



class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int l1=word1.size();
        int l2=word2.size();
        string s1="";string s2="";
        for(int i=0;i<l1;i++){
            s1=s1+word1[i];
        }
        for(int i=0;i<l2;i++){
            s2=s2+word2[i];
        }
        if(s1==s2)
            return true;
        else
            return false;
    }
};
