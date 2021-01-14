/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcode username: jaswantcoder
*/

#define all(v) v.begin(),v.end()


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(all(people));
        int i=0;
        int j= people.size()-1;
        int ans=0;
        while(i<=j)
        {
            if(i==j)
            {
                ans++;
                i++;
            }
            else
            {
                if(people[i]+people[j]<=limit)
                {
                    ans++;
                    i++; j--;
                }
                else
                {
                    j--;
                    ans++;
                }
            }
        }
        
        return ans;
        
    }
};
