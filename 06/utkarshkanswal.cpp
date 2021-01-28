/* Name: Utkarsh Kumar
Rol No:B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int b[1002];
        int j=0;
        for(int i=0;i<1000;++i){
            if(!(find(arr.begin(),arr.end(),(i+1))!=arr.end()))
            {
              b[j]=(i+1);
                ++j;
            }
        }
        int i=1000;
        while(j<1001)
        {
            b[j]=i+1;
            i++;
            j++;
        }
      return b[k-1];
        
    }
};