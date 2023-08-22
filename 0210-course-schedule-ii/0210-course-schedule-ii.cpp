class Solution {
public:
    
//     bool isCycle(int u,vector<int>adjList[],vector<int>&vis,vector<int>&ans){
//         if(vis[u]==2)return false;
//         if(vis[u]==1)return true;
        
//         vis[u]=1;
//         for(int v:adjList[u]){
//             if(isCycle(v,adjList,vis,ans))return true;
//         }
//         vis[u]=2;
//         ans.push_back(u);
//         return false;
        
//     }
    
    bool isCycle(int u,vector<int>&vis,vector<int>adj[],vector<int>&ans){
        if(vis[u]==1)return true;
        if(vis[u]==2)return false;
        vis[u]=1;
        for(int v:adj[u]){
            if(isCycle(v,vis,adj,ans))return true;
        }
        vis[u]=2;
        ans.push_back(u);
        return false;
    }
    
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
//         vector<int>adjList[numCourses];
//         vector<int>ans;
        
//         for(int i=0;i<prerequisites.size();i++){
//             adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
//             // indegree[prerequisites[i][0]]++;
//         }
        
//         vector<int>vis(numCourses,0);
//         for(int i=0;i<numCourses;i++){
//             if(isCycle(i,adjList,vis,ans))return {};
//         }
//         reverse(ans.begin(),ans.end());
        
        
//         for(int i=0;i<numCourses;i++){
//             int j=0;
//             for(;j<numCourses;j++){
//                 if(!indegree[j]){
//                     ans.push_back(j);
//                     break;
//                 }
//             }
            
//             if(j==numCourses)return {};
            
//             indegree[j]--;
//             for(auto v:adjList[j]){
//                 indegree[v]--;
//             }
            
//         }
        // return ans;
        
        
        vector<int>adj[numCourses];
        vector<int>vis(numCourses);
        vector<int>ans;
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        for(int i=0;i<numCourses;i++){
            if(isCycle(i,vis,adj,ans))return {};
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};