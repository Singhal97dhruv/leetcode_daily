class DSU{
    vector<int>par;
    public:
    DSU (int n):par(n){
        iota(par.begin(),par.end(),0);
    }
    int find(int x){
        if(par[x]==x)return x;
        return par[x]=find(par[x]);
    }
    void unionfind(int x,int y,int &count){
        int xp=find(x);
        int yp=find(y);
        if(xp==yp)return;
        par[yp]=xp;
        count++;
        
    }
};


class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
        DSU ds(n);
        int count=1;
        for(auto e: connections){
            ds.unionfind(e[0],e[1],count);
        }
        return n-count;
    }
};