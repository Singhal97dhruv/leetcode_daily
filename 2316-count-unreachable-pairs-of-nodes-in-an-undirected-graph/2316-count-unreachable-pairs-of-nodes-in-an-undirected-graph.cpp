class DSU{
    
    vector<int>parent,size;
    public:
    DSU (int n): parent(n,0),size(n,1){
        iota(parent.begin(),parent.end(),0);
    }
    
    int find(int x){
        if(parent[x]==x)return x;
        return parent[x]=find(parent[x]);
    }
    
    int unionfind(int x, int y){
        int xp=find(x);
        int yp=find(y);
        if(xp==yp)return 0;
        if(size[xp]<size[yp])swap(xp,yp);
        int ans=size[xp]*size[yp];
        size[xp]+=size[yp];
        parent[yp]=xp;
        return ans;
    }
    
};

class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        long count = long(n) * (n - 1) / 2;
        DSU ds(n);
        for(auto edge: edges){
            count-= ds.unionfind(edge[0],edge[1]);
        }
        return count;
        
    }
};