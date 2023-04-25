class Solution {
public:
    vector<vector<int>>dp;
    int recur(vector<int>&values,int i,int j){
        if(i+1==j)return 0;        
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            ans=min(ans,recur(values,i,k) + recur(values,k,j)+values[i]*values[j]*values[k]);
        }
        return dp[i][j]=ans;
    }
    
    int minScoreTriangulation(vector<int>& values) {
        dp.resize(values.size(),vector<int>(values.size(),-1));
        return recur(values,0,values.size()-1);
    }
};