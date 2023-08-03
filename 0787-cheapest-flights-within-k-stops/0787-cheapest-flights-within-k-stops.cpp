class Solution {
public:
  
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
//         vector<int>g(n,1e8);
//         g[src]=0;
        
//         for(int i=0;i<=k;i++){
//             vector<int>g1(g);
//             for(auto e:flights){
//                 g1[e[1]]=min(g1[e[1]],g[e[0]]+e[2]);
//             }
//             g=g1;
//         }
//         return g[dst]==1e8?-1:g[dst];
        
        
       vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        queue<pair<int,int>>q;
        q.push({src,0});
        int stops=0;
        vector<int>minCost(n,INT_MAX);
        while(!q.empty() && stops<=k){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto [currNode,cost]=q.front();q.pop();
                for(auto &[neighbor,price]: adj[currNode]){
                    if(price+cost<minCost[neighbor]){
                        minCost[neighbor]=price+cost;
                        q.push({neighbor,minCost[neighbor]});
                    }
                }
                
            }
            stops++;
        }
        if(minCost[dst]==INT_MAX){
            return -1;
        }
        return minCost[dst];
    }
};