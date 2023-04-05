class Solution {
public:
    vector<vector<vector<int>>>dp;
    int MOD=1e9+7;
    int recur(int last,vector<int>&rollMax,int n,int len){
        if(n==0){
            return 1;
        }
        if(last>=0 && dp[n][last][len]!=0)return dp[n][last][len];
        int ans=0;
        for(int i=0;i<6;i++){
            if(i==last && len==rollMax[i])continue;
            ans=(ans+recur(i,rollMax,n-1,i==last?len+1:1))%MOD;
        }
        if(last>=0)dp[n][last][len]=ans;
        return ans;
        // return ans;
    }
    
    int dieSimulator(int n, vector<int>& rollMax) {
        dp.resize(5000,vector<vector<int>>(6,vector<int>(16)));
       return recur(-1,rollMax,n,0);
    }
};