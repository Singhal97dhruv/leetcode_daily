class Solution {
public:
    int dp[501][501];
    // int memo(int i,int j,vector<int>&n1,vector<int>&n2){
    //     if(i>=n1.size() || j>=n2.size())return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     if(n1[i]==n2[j])return dp[i][j]= 1+memo(i+1,j+1,n1,n2);
    //     return dp[i][j]= max(memo(i+1,j,n1,n2),memo(i,j+1,n1,n2));
    // }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        // memset(dp,-1,sizeof(dp));
        // return memo(0,0,nums1,nums2);
        
        for(int i=nums1.size()-1;i>=0;i--){
            for(int j=nums2.size()-1;j>=0;j--){
                if(nums1[i]==nums2[j])dp[i][j]=1+dp[i+1][j+1];
                else dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};