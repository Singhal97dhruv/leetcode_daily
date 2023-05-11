class Solution {
public:
    int dp[501][501];
    int recur(int st,int end,vector<int>& stones){
        if(st>end)return 0;
        if(dp[st][end]!=-1)return dp[st][end];
        int rsum=accumulate(stones.begin()+st,stones.begin()+end+1,0);
        int lsum=0,ans=0;
        for(int i=st;i<end;i++){
            lsum+=stones[i];
            rsum-=stones[i];
            if(lsum<rsum)ans=max(ans,lsum+recur(st,i,stones));
        if(lsum==rsum)ans=max({ans,lsum+recur(st,i,stones),rsum+recur(i+1,end,stones)});
            if(rsum<lsum)ans=max(ans,rsum+recur(i+1,end,stones));
        }
        
        return dp[st][end]= ans;
        
    }
    
    int stoneGameV(vector<int>& stoneValue) {
        memset(dp,-1,sizeof(dp));
        return recur(0,stoneValue.size()-1,stoneValue);
    }
};