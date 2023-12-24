class Solution {
public:
    // int dp[100001]={[0 ... 10000]=-1};
    int binary(int left,int right,int idx,vector<vector<int>>& offers){
        
        int reqIdx=offers.size();
        while(left<=right){
            
            int mid=(right+left)/2;
            if(offers[mid][0]<=offers[idx][1]){
                left=mid+1;
            }
            else{
                reqIdx=mid;
                right=mid-1;
            }
            
        }
        return reqIdx;
    }
    
    int recur(int idx,vector<vector<int>>& offers,vector<int>&dp){
        
        if(idx==offers.size())return 0;
        if(dp[idx]!=-1)return dp[idx];
        
        int notTake=recur(idx+1,offers,dp);
        
        int nextIdx=binary(idx+1,offers.size()-1,idx,offers);
        
        int take=offers[idx][2]+ recur(nextIdx,offers,dp);
        return dp[idx]= max(take,notTake);
        
    }
    
    
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        
        vector<int>dp(offers.size(),-1);
        
        sort(offers.begin(),offers.end());
        
        return recur(0,offers,dp);
        
    }
};