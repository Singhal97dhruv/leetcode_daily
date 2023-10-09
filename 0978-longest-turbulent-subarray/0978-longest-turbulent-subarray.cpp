class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        int n=arr.size();
        int mx=0;
        vector<vector<int>>dp(n,vector<int>(2));
        
        for(int i=1;i<n;i++){
            
            if(arr[i]>arr[i-1]){
                dp[i][1]=dp[i-1][0]+1;
                mx=max(dp[i][1],mx);
            }
            else if(arr[i]<arr[i-1]){
                dp[i][0]=dp[i-1][1]+1;
                mx=max(dp[i][0],mx);
            }            
        }        
        return mx+1;
        
    }
};