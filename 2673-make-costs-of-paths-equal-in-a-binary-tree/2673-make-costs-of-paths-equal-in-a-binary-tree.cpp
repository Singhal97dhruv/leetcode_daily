class Solution {
public:
    
    int ans=0;
    int dfs(int n,int lev,vector<int>& cost){
        if(lev>n)return 0;
        int left=dfs(n,2*lev,cost);
        int right=dfs(n,2*lev+1,cost);
        ans+=abs(left-right);
        return cost[lev-1]+max(left,right);
    }
    
    
    int minIncrements(int n, vector<int>& cost) {
        
        dfs(n,1,cost);
        return ans;
    }
};