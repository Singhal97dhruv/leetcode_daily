class Solution {
public:
    
//     vector<int>vis;
//     int heightCalculator(int u,vector<int> adj[]){
//         // if(idx==prev)return ;
        
//         // bool flag=false;
//         int ans=0;
//         vis[u]=1;
//         for(auto v: adj[u]){
//             if(!vis[v]){
//                 // vis[v]=1;
//                ans=max(ans,1+heightCalculator(v,adj);
//             }
//         }
//         vis[u]=0;
//         return ans;
        
        
        
//     }
    
    
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1)return {0};
        vector<int>adjList[n];
        // vis.resize(n,0);
        vector<int>deg(n,0);
        for(int i=0;i<edges.size();i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
            deg[edges[i][0]]++;deg[edges[i][1]]++;
        }
        
        // for(int )
        // cout<<heightCalculator(1,adjList);
        vector<int>res;
        // int mnH=INT_MAX;
        // for(int i=0;i<n;i++){
            // int h=heightCalculator(i,adjList);
            // if(h==mnH){
            //     res.push_back(i);
            // }
            // else if(h<mnH){
            //     mnH=h;
            //     res.clear();
            //     res.push_back(i);
            // }
            
//             vector<bool>vis(n,false);
//             queue<int>q;
//             q.push(i);
//             vis[i]=true;
//             int lev=0;
//             while(!q.empty()){
//                 lev++;
//                 int n=q.size();
//                 for(int i=0;i<n;i++){
//                     int u=q.front();q.pop();
//                     for(int v:adjList[u]){
//                         if(!vis[v]){
//                             q.push(v);
//                             vis[v]=true;
//                         }
//                     }
//                 }
                
//             }
//             if(lev==mnH){
//                 res.push_back(i);
//             }
//             else if(lev<mnH){
//                 res.clear();
//                 mnH=lev;
//                 res.push_back(i);
//             }
        // } 
        
        queue<int>q;
        for(int i=0;i<n;i++)if(deg[i]==1)q.push(i);
        
        while(!q.empty()){
            res.clear();
            int n=q.size();
            for(int i=0;i<n;i++){
                int u=q.front();
                res.push_back(u);q.pop();
                for(int v:adjList[u]){
                    if(--deg[v]==1)q.push(v);
                }
            }
        }
        
        return res;
    }
};