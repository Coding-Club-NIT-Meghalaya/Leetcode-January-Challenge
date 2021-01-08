?*bhawana maurya 
b19cs022
bhawana_byb
*/

class Solution {
public:
    int findKthPositive(vector<int>&arr, int k) {
        int n=arr.size();
        int l=0,h=n;
        while(l<h){
            int m=(l+h)/2;
            if(arr[m]-(m+1)>=k)
                h=m;
            else
                l=m+1;
            
        }
        
        return l+k;
    }
};
