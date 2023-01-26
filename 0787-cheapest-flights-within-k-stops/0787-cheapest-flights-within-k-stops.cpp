class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<int>g(n,1e8);
        g[src]=0;
        
        for(int i=0;i<=k;i++){
            vector<int>g1(g);
            for(auto e:flights){
                g1[e[1]]=min(g1[e[1]],g[e[0]]+e[2]);
            }
            g=g1;
        }
        return g[dst]==1e8?-1:g[dst];
    }
};