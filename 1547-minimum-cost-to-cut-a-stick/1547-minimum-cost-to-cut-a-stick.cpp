class Solution {
public:
    int dp[101][101];
    int recur(vector<int>&cuts,int st,int end,int cuts_st,int cuts_end){
        if(cuts_st>cuts_end)return 0;
        if(dp[cuts_st][cuts_end]!=-1)return dp[cuts_st][cuts_end];
        int mn=INT_MAX;
        
        for(int i=cuts_st;i<=cuts_end;i++){
            mn=min(mn,(end-st)+recur(cuts,st,cuts[i],cuts_st,i-1)+recur(cuts,cuts[i],end,i+1,cuts_end));
        }
        return dp[cuts_st][cuts_end]= mn;
    }
    
    int minCost(int n, vector<int>& cuts) {
        memset(dp,-1,sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return recur(cuts,0,n,0,cuts.size()-1);
        
    }
};