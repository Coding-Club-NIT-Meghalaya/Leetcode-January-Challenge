/*
Name-bhawana maurya
roll-b19cs022
leetcode_username-bhawana_byb
*/


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l=people.size()-1;
        int boats=0;
        int i=0;
        sort(people.begin(),people.end());
        while(i<=l)
        {
            if(people[i]+people[l]>limit)
            {
                boats++;
                l--;
            }
            else
            {
                boats++;
                i++;
                l--;
            }
        }
      
        return boats;}
};
