class Solution {
public:
    int dp[50001]={[0 ... 50000]=INT_MIN};
    int recur(int idx,vector<int>& stones){
        if(idx>=stones.size())return 0;
        if(dp[idx]!=INT_MIN)return dp[idx];
        int sum=0,total=INT_MIN;
        for(int i=0;i<3 && idx+i<stones.size();i++){
            sum+=stones[idx+i];
            total=max(total,sum-recur(idx+i+1,stones));
        }
        return dp[idx]= total;
    }
    
    string stoneGameIII(vector<int>& stoneValue) {
        int ans=recur(0,stoneValue);
        if(ans>0)return "Alice";
        else if(ans==0)return "Tie";
        return "Bob";
    }
};