class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>adjList[numCourses],indegree(numCourses,0);
        vector<int>ans;
        
        for(int i=0;i<prerequisites.size();i++){
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        for(int i=0;i<numCourses;i++){
            int j=0;
            for(;j<numCourses;j++){
                if(!indegree[j]){
                    ans.push_back(j);
                    break;
                }
            }
            
            if(j==numCourses)return {};
            
            indegree[j]--;
            for(auto v:adjList[j]){
                indegree[v]--;
            }
            
        }
        return ans;
        
        
        
    }
};