class Solution {
public:
    
    // #define MOD 1e9+7
    
    int countPaths(int n, vector<vector<int>>& roads) {
        int MOD=1e9+7;
        vector<vector<pair<int,int>>>g(n);
        for(auto i:roads){
            g[i[0]].push_back({i[1],i[2]});
            g[i[1]].push_back({i[0],i[2]});
        }
        
        vector<long long>dist(n,LONG_MAX),ways(n);
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<>>pq;
        ways[0]=1,dist[0]=0;
        pq.push({0,0});
        while(!pq.empty()){
            auto [d,u]=pq.top();pq.pop();
            if(d>dist[u])continue;
            for(auto [v,time]:g[u]){
                if(dist[v]>time+d){
                    dist[v]=time+d;
                    ways[v]=ways[u];
                    pq.push({dist[v],v});
                } 
                else if(dist[v]==time+d){
                    ways[v]=(ways[v]+ways[u])%MOD;
                }
            }
        }
        return ways[n-1];
    }
};