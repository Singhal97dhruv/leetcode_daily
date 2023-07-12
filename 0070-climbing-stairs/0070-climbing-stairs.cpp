class Solution {
public:
    
    int recur(int n,vector<int>&mem){
        if(n<0)return 0;
        else if(n==0)return mem[n]= 1;
        else if(mem[n]!=0)return mem[n];
        else
            return mem[n]=recur(n-1,mem)+recur(n-2,mem);
    }
    void dypr(int n,vector<int>&dp){
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
    }
    
    int climbStairs(int n) {
        
        // vector<int>mem(n+1,0);
      // return   recur(n,mem);
    // now top down approach
    //     vector<int>dp(n+1);
    //     dp[0]=dp[1]=1;
    //     dypr(n,dp);
    // return dp[n];
        
//         vector<int>dp(n+1,0);
//             dp[0]=1;dp[1]=1;
//             for(int i=2;i<=n;i++){
//                 dp[i]=dp[i-1]+dp[i-2];
//             }
        
//         return dp[n];
        
        if(n==1)return 1;
        if(n==2)return 2;
         
        int A=1,B=1,C;
        for(int i=2;i<=n;i++){
            C=A+B;
            A=B;
            B=C;
        }
        return C;
        
    }
};