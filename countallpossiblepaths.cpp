//username DishaKhanapurkar


class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        // code here
         vector<long long>ans(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                ans[j]+=ans[j-1];
                ans[j]%=1000000007;
            }
        }
        return ans[n-1];
    }
    
};
