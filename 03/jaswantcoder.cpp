/*
Name: Jaswant Arya
Roll no. : B17CS036
Leetcoder username: jaswantcoder
*/

class Solution {
public:
    int cnt=0;
    int countArrangement(int n) {
        
        bool vis[16];
        memset(vis,false, sizeof(vis));
        int pos=1;
         count(n,pos, vis);
        return cnt;
        
    }
   void  count(int n, int pos, bool vis[])
    {
        if(pos>n)
        {
            cnt++;
            return;
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis[i] && (i% pos==0  || pos%i==0))
            {
                vis[i]=true;
                count(n,pos+1,vis);
                vis[i]=false;
            }
        }
        return ;
    }
};
