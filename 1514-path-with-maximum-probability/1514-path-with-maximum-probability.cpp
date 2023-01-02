class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<vector<pair<int,double>>>g(n);
       for(int i=0;i<edges.size();i++){
           g[edges[i][0]].push_back({edges[i][1],succProb[i]});
           g[edges[i][1]].push_back({edges[i][0],succProb[i]});
       }
        vector<double>vect(n,(double)0.0);
        vect[start]=1.0;
        vector<bool>vis(n,false);
        priority_queue<pair<double,int>>pq;
        pq.push({(double)1.0,start});
        
        while(!pq.empty()){
            auto [prob,u]=pq.top();pq.pop();
            if(!vis[u]){
                vis[u]=true;
                for(auto &v:g[u]){
                    if(vect[v.first]<v.second*prob){
                        vect[v.first]=v.second*prob;
                        pq.push({vect[v.first],v.first});
                    }
                }
            }
        }
        return vect[end];
        
    }
};