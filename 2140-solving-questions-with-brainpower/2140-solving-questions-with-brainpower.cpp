class Solution {
public:
    long long dp[100001]={[0 ... 100000]=-1};
    long long recur(int idx,vector<vector<int>>&q){
        if(idx>=q.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        
        return dp[idx]= max(q[idx][0]+recur(idx+q[idx][1]+1,q),recur(idx+1,q));
        
    }
    
    long long mostPoints(vector<vector<int>>& questions) {
        return recur(0,questions);
    }
};