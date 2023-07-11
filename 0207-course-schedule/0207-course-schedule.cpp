class Solution {
public:
    
//     bool isCycle(int u,vector<int>adj[],vector<int>&vis){
//         if(vis[u]==1)return true;
//         if(vis[u]==0){
//             vis[u]=1;
//             for(auto &v:adj[u]){
//                 if(isCycle(v,adj,vis))return true;
//             }
//             vis[u]=2;
//         }
//         return false;
//     }
    
    
    bool isCycleExist(vector<int>adj[], vector<int>&visited,int st){
        if(visited[st]==1)return true;////// Visited and cycle caght
        
        if(visited[st]==0){///// NOt yet viisited
            
            visited[st]=1;
            for(auto &v:adj[st]){
                if(isCycleExist(adj,visited,v))return true;
            }
            visited[st]=2;
        }
        return false;
        
        
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // vector<int>adj[numCourses];
        // for(int i=0;i<prerequisites.size();i++){
        //     adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        // }
        // vector<int>vis(numCourses,0);
        // for(int i=0;i<numCourses;i++){
        //     if(isCycle(i,adj,vis))return false;
        // }
        // return true;
        
        int n=prerequisites.size();
        
        vector<int>adjList[numCourses];
        for(int i=0;i<n;i++){
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        vector<int>visited(numCourses,0);
        
        for(int i=0;i<numCourses;i++){
            if(isCycleExist(adjList,visited,i))return false;
        }
        
        return true;
        
        
        
    }
};