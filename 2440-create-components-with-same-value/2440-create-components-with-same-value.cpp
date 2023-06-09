class Solution {
public:
    int cnt=0;
    int dfs(int idx,vector<int>&nums,vector<vector<int>>&adj,vector<bool>&seen,int need){
        
        int sum=nums[idx];
        seen[idx]=true;
        for(int i:adj[idx]){
            if(seen[i]==true)continue;
        sum+=dfs(i,nums,adj,seen,need);
        }
        
        if(sum==need){
            cnt++;
            return 0;
        }
        return sum;
        
        
    }
    
    int componentValue(vector<int>& nums, vector<vector<int>>& edges) {
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        vector<vector<int>>adj(n);
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        if(count(nums.begin(),nums.end(),nums[0])==n)return n-1;
        
        // int cnt=0;
        int ans=0;
        for(int i=2;i*i<=sum;i++){
            if(sum%i==0){
                vector<bool>seen(nums.size(),false);
                int first=dfs(0,nums,adj,seen,sum/i);
                if(first==0){
                    ans=max(ans,cnt-1);
                }
                cnt=0;
                seen.resize(nums.size(),false);
                int second=dfs(0,nums,adj,seen,i);
                if(second==0){
                    ans=max(ans,cnt-1);
                }
                cnt=0;
            }
        }
        
        
        return ans;
    }
};