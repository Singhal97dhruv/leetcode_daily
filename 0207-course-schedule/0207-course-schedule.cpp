class Solution {
public:

    
    
//     bool isCycleExist(vector<int>adj[], vector<int>&visited,int st){
//         if(visited[st]==1)return true;////// Visited and cycle caght
        
//         if(visited[st]==0){///// NOt yet viisited
            
//             visited[st]=1;
//             for(auto &v:adj[st]){
//                 if(isCycleExist(adj,visited,v))return true;
//             }
//             visited[st]=2;
//         }
//         return false;
        
        
//     }
    
    bool isCycleExist(vector<int>adj[],vector<int>&vis,int st){
        if(vis[st]==1)return true;
        
        if(vis[st]==0){
            vis[st]=1;
        for(auto &v: adj[st]){
            if(isCycleExist(adj,vis,v))return true;
        }
        
        vis[st]=2;
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
        
//         int n=prerequisites.size();
        
//         vector<int>adjList[numCourses];
//         for(int i=0;i<n;i++){
//             adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
//         }
        
//         vector<int>visited(numCourses,0);
        
//         for(int i=0;i<numCourses;i++){
//             if(isCycleExist(adjList,visited,i))return false;
//         }
        
//         return true;
        
        ///// NExT Approach
        
        
//         vector<int>adjList[numCourses];
//         vector<int>degree(numCourses,0);
//         for(int i=0;i<prerequisites.size();i++){
//             adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
//             degree[prerequisites[i][0]]++;
//         }
        
//         queue<int>q;
        
//         for(int i=0;i<numCourses;i++){
//             if(degree[i]==0)
//                 q.push(i);
//         }
        
//         while(!q.empty()){
//             int u=q.front();q.pop();
            
//             for(auto &v:adjList[u]){
//                 if(--degree[v]==0)q.push(v);
//             }
//             numCourses--;
//         }
        
//         return numCourses==0?true:false;
        
        
        vector<int>adj[numCourses];
        vector<int>vis(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<numCourses;i++){
            if(isCycleExist(adj,vis,i))return false;
        }
        return true;
        
        
        
    }
};