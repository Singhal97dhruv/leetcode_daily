class Solution {
public:
    vector<vector<pair<int,int>>>dp;
    pair<int,int> recur(vector<int>&arr,int l,int r){
        if(l==r){
            return {arr[l],0};
        }
        if(l>r)return {0,1000000};
        if(dp[l][r].second!=-1)return dp[l][r];
        pair<int,int>ans={0,1000000};
        for(int i=l;i<r;i++){
            pair<int,int>p_left=recur(arr,l,i);
            pair<int,int>p_right=recur(arr,i+1,r);
            int total=p_left.second+p_right.second+(p_left.first*p_right.first);
            if(total<ans.second){
                ans.second=total;
                ans.first=max(p_left.first,p_right.first);
            }
        }
        return dp[l][r]= ans;
    }
    
    int mctFromLeafValues(vector<int>& arr) {
        dp.resize(arr.size(),vector<pair<int,int>>(arr.size(),{-1,-1}));
        return recur(arr,0,arr.size()-1).second;
    }
};