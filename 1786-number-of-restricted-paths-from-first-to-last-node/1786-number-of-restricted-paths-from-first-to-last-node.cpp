class Solution {
public:
    int mod=1e9+7;
    void dijkstra(int n,vector<int>&dist,unordered_map<int,vector<pair<int,int>>>&adj){
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,n});
        while(!pq.empty()){
            auto t=pq.top();
            pq.pop();
            int u=t.second;
            int dis=t.first;
            for(auto &p:adj[u]){
                int v=p.first;
                int w=p.second;
                if(dist[v]>dist[u]+w){
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
        }
        
    }
    
    int dfs(int s,vector<int>&dist,unordered_map<int,vector<pair<int,int>>>&adj,vector<int>&dp)
    {
        if(s==1)return 1;
        if(dp[s]!=-1)return dp[s];
        int sum=0;
        for(auto &n:adj[s]){
            int Owt=dist[s];
            int toCheck=dist[n.first];
            if(toCheck>Owt){
                sum=(sum%mod + dfs(n.first,dist,adj,dp)%mod)%mod;
            }
        }
        
        return dp[s]=sum%mod;
    }
    
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        
        unordered_map<int,vector<pair<int,int>>>adj(n);
        for(vector<int>&e:edges){
            adj[e[0]].push_back({e[1],e[2]});
            adj[e[1]].push_back({e[0],e[2]});
        }
        
        vector<int>dist(n+1,INT_MAX);
        dist[n]=0;
        dijkstra(n,dist,adj);
        
        vector<int>dp(n+1,-1);
        return dfs(n,dist,adj,dp);
    }
};