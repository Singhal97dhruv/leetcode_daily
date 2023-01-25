class Solution {
public:
    
    void dfs(int st,vector<int>&dist,vector<int>&edges,vector<bool>&vis)
    {
        vis[st]=1;
        int neigh=edges[st];
        if(neigh!=-1 && vis[neigh]!=true){
            dist[neigh]=dist[st]+1;
            dfs(neigh,dist,edges,vis);
            
        }
    }    
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        int ans=-1;
        int mn=INT_MAX;
        
        vector<int>dist1(n,0),dist2(n,0);
        vector<bool>vis1(n,false),vis2(n,false);
        
        dfs(node1,dist1,edges,vis1);
        dfs(node2,dist2,edges,vis2);
        
        for(int i=0;i<n;i++)
        {
            if(vis1[i]==true && vis2[i]==true && mn>max(dist1[i],dist2[i])){
                mn=max(dist1[i],dist2[i]);
                ans=i;
            }
        }
        return ans;
        
        
    }
};