/*
Name:  Shivam Pandit
Roll no.:  B19CS013
Leetcode username:  ship51
*/

class Solution {
public:
    int countArrangement(int n) {
        
        int res = 0;
        int pos = 1;
        vector<int> visited(n+1, 0);
        count(n, visited, pos, res);
        return res;        
    }
    
    void count(int n, vector<int> visited, int pos, int& res){
        if(pos > n){
            res++;
            return;
        }
        
        for(int i = 1; i <= n; i++){
            
            if (visited[i]==0 && (pos%i == 0 || i%pos == 0)){
                visited[i]=1;
                count(n, visited, pos+1, res);
                visited[i]=0;                
            }
        }
    }
};
