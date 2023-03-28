class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        vector<int>dp(367);
        unordered_set day(days.begin(),days.end());
        for(int i=1;i<=365;i++){
            dp[i]=dp[i-1];
            if(day.find(i)!=day.end()){
                dp[i]=min({dp[i-1]+costs[0],dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]});
            }
        }
        return dp[365];
        
    }
};