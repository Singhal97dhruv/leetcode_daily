class Solution {
public:
    int dp[100001]= {[0 ... 100000]=INT_MIN};
    // int recur(int i,vector<int>&stones){
    //     if(i==stones.size()-1)return stones[i];
    //     if(dp[i]!=INT_MIN)return dp[i];
    //     return dp[i]= max(recur(i+1,stones),stones[i]-recur(i+1,stones));
    // }
    
    int stoneGameVIII(vector<int>& stones) {
        int n=stones.size();
        partial_sum(stones.begin(),stones.end(),stones.begin());
        dp[n-1]=stones[n-1];
        for(int i=n-2;i>0;i--){
            dp[i]=max(stones[i]-dp[i+1],dp[i+1]);
        }
        return dp[1];
        // return recur(1,stones);
        
    }
};