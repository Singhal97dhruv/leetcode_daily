class Solution {
public:
    
    bool isCycle(int u,vector<int>adj[],vector<int>&vis){
        if(vis[u]==1)return true;
        if(vis[u]==0){
            vis[u]=1;
            for(auto &v:adj[u]){
                if(isCycle(v,adj,vis))return true;
            }
            vis[u]=2;
        }
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>vis(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(isCycle(i,adj,vis))return false;
        }
        return true;
    }
};