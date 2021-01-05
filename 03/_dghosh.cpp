/*Name:Debayan Ghosh
  Roll No:B19ME002
  LeetCode Username:_dghosh*/
  class Solution {
public:
    int solve(int N) {
        int res = 0;
        vector<int> isIn(N + 1, 0);
        getAns(N, 1, result, isIn);
        return result;
    }
    void getAns(int N, int pos, int& result, vector<int>& used)
    {
        if(pos > N)
        {
            result ++;
            return;
        }
        else
        {
            for(int i = 1; i <= N; i ++)
            {
                if(isIn[i] == 0 && (i % pos == 0 || pos % i == 0))
                {
                    isIn[i] = 1;
                    getAns(N, pos + 1, result, isIn);
                    isIn[i] = 0;
                }
            }
        }
    }
};
 
