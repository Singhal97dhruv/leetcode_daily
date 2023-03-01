class Solution {
public:
    void dfs(int u,unordered_map<int,vector<int>>&map,vector<int>&dis,vector<int>&par,int prev,int prev_dis=0){
        par[u]=prev;
        dis[u]=prev_dis;
        for(int i:map[u]){
            if(i==prev)continue;
            dfs(i,map,dis,par,u,prev_dis+1);
        }
        
    }
    int dfs2(int u,unordered_map<int,vector<int>>&map,vector<int>&amount,int p=0){
        int mx=INT_MIN,curr=amount[u];
        for(int i:map[u]){
            if(i==p)continue;
            mx=max(mx,dfs2(i,map,amount,u));
        }
        if(mx==INT_MIN)return curr;
        return curr+mx;
    }
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        unordered_map<int,vector<int>>map;
        int n=amount.size();
        vector<int>par(n,0),dis(n,0);
        for(int i=0;i<edges.size();i++){
            map[edges[i][0]].push_back(edges[i][1]);
            map[edges[i][1]].push_back(edges[i][0]);

        }
        dfs(0,map,dis,par,0);
        int bob_dis=0;
        while(bob!=0){
            if(bob_dis<dis[bob]){
                amount[bob]=0;
            }
            else if(bob_dis==dis[bob]){
                amount[bob]/=2;
            }
            bob_dis++;
            bob=par[bob];
        }
        return dfs2(0,map,amount);
        
    }
};