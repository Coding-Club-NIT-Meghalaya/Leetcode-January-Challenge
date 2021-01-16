/*Name: Debayan Ghosh
  Roll No: B19ME002
  LeetCode Username: _dghosh*/
  class Solution {
public:
    int getMaximumGenerated(int n) {
        if(!n) return 0;
        int arr[n+1];
        arr[0]=0,arr[1]=1;
        for(int i=2;i<n+1;++i){
            if(i%2)
                arr[i]=arr[i/2]+arr[i/2+1];
            
            else arr[i]=arr[i/2];
        }
        for(int i=0;i<n;++i) cout<<arr[i]<<" ";
        int size=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+size);
        return arr[n];
    }
};
