class Solution {
public:
    #define RED 1
    #define WHITE 2
    #define BLACK 3
    bool isBipartite(vector<vector<int>>& graph) {
        // int n=graph.size();
        // vector<int>color(n);
        // queue<int>q;
        // for(int i=0;i<n;i++){
        //     if(color[i])continue;
        //     for(q.push(i);!q.empty();q.pop()){
        //         int cur=q.front();
        //         color[i]=1;
        //         for(auto neighbours:graph[cur]){
        //             if(!color[neighbours]){
        //                 color[neighbours]=-color[cur];
        //                 q.push(neighbours);
        //             }
        //         else if(color[neighbours]==color[cur])return false;
        //     }
        //     }
        // }
        // return true;

        int n=graph.size();
        vector<vector<int>>adj(n);
        vector<int>color(n,WHITE);
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]);
            }
        }
        vector<bool>vis(n,false);

        queue<int>q;
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            color[i]=RED;
            q.push(i);
            while(q.size()){
               int u=q.front();
                q.pop();
                if(vis[u])continue;
                vis[u]=true;
                for(auto v: adj[u]){
                    if(color[u]==color[v])return false;
                    if(color[u]==RED){
                        color[v]=BLACK;
                    }
                    else color[v]=RED;
                    q.push(v);
                }
            }
            
        }

return true;
    }
};