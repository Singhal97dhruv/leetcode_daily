class Solution {
public:
    int mod=1e9+7;
    int dp[50001][4][4][4];
    int memo(int idx,int prevCol1,int prevCol2,int prevCol3){
        if(idx<0)return 1;
        
        if(dp[idx][prevCol1][prevCol2][prevCol3]!=-1)return dp[idx][prevCol1][prevCol2][prevCol3];
        
        int ans=0;
        
        vector<int>colors={1,2,3};
        
        for(int A:colors){
            if(prevCol1==A)continue;
            
            for(int B:colors){
                if(prevCol2==B || A==B)continue;
                
                for(int C:colors){
                    if(prevCol3==C || B==C)continue;
                    
                    ans=(ans+memo(idx-1,A,B,C))%mod;
                    // ans%=mod;
                }
                
            }
        }
        
       return dp[idx][prevCol1][prevCol2][prevCol3]=ans;
        
    }
    
    int numOfWays(int n) {
        memset(dp,-1,sizeof(dp));
        return memo(n-1,0,0,0);
    }
};