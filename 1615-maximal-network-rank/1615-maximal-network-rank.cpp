class Solution {
public:
    
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        int ans=0;
        
        vector<unordered_set<int>>adj(n);
        for(vector<int>v:roads){
            adj[v[0]].insert(v[1]);
            adj[v[1]].insert(v[0]);
        }
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                int networkSz=adj[i].size()+adj[j].size();
                
                if(adj[j].find(i)!=adj[j].end())networkSz--;
                
                ans=max(ans,networkSz);
                
                
            }
        }
        
        return ans;
        
    }
};