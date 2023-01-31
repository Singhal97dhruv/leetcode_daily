class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>players;
        int n=scores.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            players.push_back({ages[i],scores[i]});
        }
        sort(players.begin(),players.end(),greater<>());
        vector<int>dp(n);
        for(int i=0;i<n;i++){
            dp[i]=players[i].second;
            int temp=dp[i];
            for(int j=0;j<i;j++){
                if(players[j].second>=players[i].second)
                    dp[i]=max(dp[i],temp+dp[j]);
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
}; 