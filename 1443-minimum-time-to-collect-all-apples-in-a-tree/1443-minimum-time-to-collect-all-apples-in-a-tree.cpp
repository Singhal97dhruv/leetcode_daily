class Solution {
public:
    
    int dfs(vector<int>g[],int ref,unordered_map<int,bool>&vis,vector<bool>hasApple,int addCost){
        int dis=0;
        if(vis[ref])return 0;
        vis[ref]=1;
        for(auto e:g[ref]){
            // if(vis[e])continue;
            dis+=dfs(g,e,vis,hasApple,2);
            // vis[e]=true;
            // if(hasApple[e])
            // {                dis+=2;
                        // dis+=2+dfs(g,e,vis,hasApple);
            // }
            // else dis+=2+dfs(g,e,vis,hasApple);
        }
        if(dis==0 && !hasApple[ref]){
            return 0;
        }
        return dis+addCost;
        
        
    }
    
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int>vect[n];
        unordered_map<int,bool>vis;
        for(int i=0;i<edges.size();i++){
            vect[edges[i][0]].push_back(edges[i][1]);
            vect[edges[i][1]].push_back(edges[i][0]);

        }
        return dfs(vect,0,vis,hasApple,0);
    }
};