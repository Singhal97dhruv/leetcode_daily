class Solution {
public:
    int dp[100001]= {[0 ... 100000]=INT_MIN};
    int recur(int i,vector<int>&stones){
        if(i==stones.size()-1)return stones[i];
        if(dp[i]!=INT_MIN)return dp[i];
        return dp[i]= max(recur(i+1,stones),stones[i]-recur(i+1,stones));
    }
    
    int stoneGameVIII(vector<int>& stones) {
        partial_sum(stones.begin(),stones.end(),stones.begin());
        return recur(1,stones);
        
    }
};