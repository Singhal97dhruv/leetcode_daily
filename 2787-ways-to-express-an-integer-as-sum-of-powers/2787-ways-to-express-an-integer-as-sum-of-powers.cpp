class Solution {
public:
    int mod=1e9+7;
    long long dp[301][301];
    long long backtrack(int num,int x,int tar,int currSum,int n){
        if(currSum==tar){
            return 1;
        }
        if(num>n || currSum>tar)return 0;
        
        if(dp[num][currSum]!=-1)return dp[num][currSum];
        
        long long sum=0;
        
        if(currSum+pow(num,x)<=tar){
            sum=(sum+backtrack(num+1,x,tar,currSum+pow(num,x),n))%mod;
        }
        
        sum=(sum+ backtrack(num+1,x,tar,currSum,n))%mod;
        
        
//         for(int i=num;i<=n;i++){
//             if(currSum+pow(i,x)<=tar)
//                 sum=(sum+backtrack(i+1,x,tar,currSum+pow(i,x),n))%mod;
//         }
        
        return dp[num][currSum]= sum%mod;
        
    }
    
    int numberOfWays(int n, int x) {
        memset(dp,-1,sizeof(dp));
        double m=pow(n,1.0/x);
        return backtrack(1,x,n,0,ceil(m));
        
       
        
    }
};