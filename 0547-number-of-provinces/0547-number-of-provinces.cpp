// DSU APPROACH 

class DSU{
    vector<int>par;
    public: 
    DSU(int n): par(n,0){
        iota(par.begin(),par.end(),0);
    }
    int find(int x){
        if(x==par[x])return x;
        return par[x]=find(par[x]);
        
    }
    bool UnionFind(int x,int y){
        int xp=find(x);
        int yp=find(y);
        if(xp==yp)return false;
        par[yp]=xp;
        return true;
    }
};

class Solution {
public:
// DFS APPROACH
    
    void dfs(int idx,vector<vector<int>> m, vector<bool>& visited){
        visited[idx]=true;
        for(int i=0;i<m.size();i++){
            if(i!=idx && !visited[i] && m[idx][i]){
                dfs(i,m,visited);
            }
        }
    }

    
    int findCircleNum(vector<vector<int>>& isConnected) {
        // int n=isConnected.size(),count=0;
        // DSU ds(n);
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(isConnected[i][j] && ds.UnionFind(i,j))count++;
        //     }
        // }
        // return n-count;
        
        int count=0, n=isConnected.size();
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i])
            {
                dfs(i,isConnected,visited);
                count++;
            }
        }
        return count;
        
    }
};