class Solution {
public:
    #define WHITE 1
    #define RED 2
    #define BLUE 3

    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>>adj(n);
        vector<bool>visited(n,false);
        vector<int>color(n,WHITE);
        
        for(auto e:dislikes){
            adj[e[0]-1].push_back(e[1]-1);
            adj[e[1]-1].push_back(e[0]-1);
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                color[i]=RED;
                q.push(i);
                while(q.size()){
                    
                    int u=q.front();
                    q.pop();
                    
                    if(visited[u])continue;
                    visited[u]=true;
                    for(auto v:adj[u]){
                        if(color[v]==color[u])return false;
                        if(color[u]==RED)color[v]=BLUE;
                        else color[v]=RED;
                        q.push(v);
                    }
                    
                }
            }
        }
        return true;
        
    }
};