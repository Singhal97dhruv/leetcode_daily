class Solution {
public:
    vector<vector<int>>res;
    void dfs(vector<int>vect,vector<vector<int>>graph,int idx,int dest){
        if(idx==dest){
            res.push_back(vect);
            return;
        }
        for(auto edges: graph[idx]){
            vect.push_back(edges);
            dfs(vect,graph,edges,dest);
            vect.pop_back();
        }
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>vect={0};
        int n=graph.size()-1;
        dfs(vect,graph,0,n);
        return res;
        
    }
};