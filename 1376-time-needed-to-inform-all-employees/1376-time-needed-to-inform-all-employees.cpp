class Solution {
public:
    
//     int dfs(vector<int>adj[],int headID,vector<int>infTime){
//         int tm=infTime[headID];
//         int mx=0;
//         for(auto edge: adj[headID]){
//            mx=max(mx,dfs(adj,edge,infTime));
//         }
//         return tm+mx;
//     }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        vector<int>adj[n];
        
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1)adj[manager[i]].push_back(i);
        }
       // return  dfs(adj,headID,informTime);
        int mx=0;
        queue<pair<int,int>>q;
        q.push({headID,0});
        while(q.size()){
            
            int n=q.size();
            for(int i=0;i<n;i++){
                auto node=q.front();q.pop();
                int dur=informTime[node.first]+node.second;
                mx=max(mx,dur);
                for(auto m: adj[node.first]){
                    q.push({m,dur});
                }
            }
            
        }
             return mx;   
        
        
    }
};