/*Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
    int dx[5]={-1,0,1,0};
    int dy[5]={0,1,0,-1};
    int vis[101][101];
    bool is_valid(int x,int y,int n,int m)
    {
        if(x<0||y<0||x>=n||y>=m)
            return false;
        if(vis[x][y]==1)
            return false;
        return true;
    }
    void solve(vector<vector<int>> &heights,int x,int y,int mid)
    {
        vis[x][y]=1;
        for(int i=0;i<4;i++)
        {
            if(is_valid(x+dx[i],y+dy[i],heights.size(),heights[0].size())&&abs(heights[x+dx[i]][y+dy[i]]-heights[x][y])<=mid)
            {
                solve(heights,x+dx[i],y+dy[i],mid);
            }
        }
        
    }
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int l=0,r=1000000;
        int n=heights.size(),m=heights[0].size();
        while(l<r)
        {
             memset(vis,0,sizeof(vis));
            int mid=(l+r)/2;
             solve(heights,0,0,mid);
            if(vis[n-1][m-1]==1)
            {
                r=mid;
                
            }
            else
                l=mid+1;
        }
        return l;
    }
};