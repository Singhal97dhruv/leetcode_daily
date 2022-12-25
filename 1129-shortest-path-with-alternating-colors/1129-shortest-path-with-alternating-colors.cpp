class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<redEdges.size();i++){
            adj[redEdges[i][0]].push_back({redEdges[i][1],1});
        }
        for(int i=0;i<blueEdges.size();i++){
            adj[blueEdges[i][0]].push_back({blueEdges[i][1],0});
        }
        queue<vector<int>>q;
        vector<int>dist(n,-1);
        q.push(vector<int>{0,0,-1});
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            dist[top[0]]=dist[top[0]]!=-1?dist[top[0]]:top[1];
            
            for(auto &edge:adj[top[0]]){
                if(top[2]!=edge.second && edge.first!=-1){
                    q.push(vector<int>{edge.first,top[1]+1,edge.second});
                    edge.first=-1;
                }
            }
        }
        return dist;
    }
};