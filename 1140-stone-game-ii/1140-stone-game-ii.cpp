class Solution {
public:
    int dp[101][201];
    int recur(int idx,int M,vector<int>&piles){
        if(idx>=piles.size())return 0;
        if(dp[idx][M]!=-1)return dp[idx][M];
        int ans=INT_MIN;
        int temp=0;
        for(int i=0;i<2*M && i+idx<piles.size();i++){
            temp+=piles[idx+i];
            ans=max(ans,temp-recur(idx+i+1,max(M,i+1),piles));
        }
        return dp[idx][M]= ans;
    }
    
    int stoneGameII(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int sum=accumulate(piles.begin(),piles.end(),0);
        int diff= recur(0,1,piles);
        return (sum+diff)/2;
    }
};