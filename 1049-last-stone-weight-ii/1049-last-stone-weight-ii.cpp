class Solution {
public:
    
    int dp[31][3001];
    
    int recur(int i,vector<int>&stones,int sum1,int sum2){
        
        if(i>=stones.size()){
            return abs(sum1-sum2);
        }

        if(dp[i][sum1]!=-1)return dp[i][sum1];

        return dp[i][sum1]= min(recur(i+1,stones,sum1+stones[i],sum2),recur(i+1,stones,sum1,sum2+stones[i]));
        
        
    }
    
    int lastStoneWeightII(vector<int>& stones) {
        memset(dp,-1,sizeof(dp));
        return recur(0,stones,0,0);
    }
};