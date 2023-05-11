class Solution {
public:
    bool dp[100001];
    bool winnerSquareGame(int n) {
        
        // if(n==0)return 0;
        // if(dp[n]==true)return dp[n];
        // for(int i=1;i*i<=n;i++){
        //     if(winnerSquareGame(n-i*i)==0)return dp[n]=true;
        // }
        // return false;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(!dp[i-j*j]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};