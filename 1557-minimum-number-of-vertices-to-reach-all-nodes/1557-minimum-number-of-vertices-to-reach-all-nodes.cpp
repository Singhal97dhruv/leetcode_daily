class Solution {
public:
    
    // void dfs(vector<int>adj[],int idx,vector<int>&visited,set<int>&set){
    //     visited[idx]=1;
    //     for(auto edges: adj[idx]){
    //         if(!visited[edges]){
    //             dfs(adj,edges,visited,set);
    //         }
    //         else set.erase(edges);
    //     }
    // }
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        // vector<int>adj[n];
        // for(auto edge: edges){
        //     adj[edge[0]].push_back(edge[1]);
        // }
        // vector<int>visited(n,0);
        // set<int>set;
        // vector<int>res;
        // for(int i=0;i<n;i++){
        //     if(!visited[i]){
        //         dfs(adj,i,visited,set);
        //         set.insert(i);
        //     }
        // }
        // for(auto i:set)res.push_back(i);
        // return res;
        
        vector<int>v(n,0),res;
        for(auto edge: edges){
            v[edge[1]]++;
        }
       for(int i=0;i<n;i++){
           if(v[i]==0)res.push_back(i);
       }
        return res;
        
    }
};