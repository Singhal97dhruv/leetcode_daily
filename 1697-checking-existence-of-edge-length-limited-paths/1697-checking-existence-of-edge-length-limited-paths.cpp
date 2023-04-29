class DSU{
    vector<int>par,rank;
    public:
  DSU(int n):par(n),rank(n){
      iota(par.begin(),par.end(),0);
  }  
    int find(int x){
        if(par[x]==x)return x;
        return par[x]=find(par[x]);
    }
    bool Union(int x,int y){
        int xp=find(x);
        int yp=find(y);
        if(xp!=yp){
            if(rank[xp]<rank[yp]){
                par[xp]=yp;
            }
            else par[yp]=xp;
            
            rank[xp]+=rank[xp]==rank[yp];   
            return true;
            
        }
        return false;
    }
    
};
    


class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        
        DSU ds(n);
        for(int i=0;i<queries.size();i++){
            queries[i].push_back(i);
        }
        
        sort(queries.begin(),queries.end(),[](auto &l,auto &r){ return l[2]<r[2];});
        sort(edgeList.begin(),edgeList.end(),[](auto &l,auto &r){return l.back()<r.back();});
        
        int i=0;
        vector<bool>res(queries.size());
        for(vector<int> q: queries){
            
            while(i<edgeList.size() && edgeList[i][2]<q[2])
                ds.Union(edgeList[i][0],edgeList[i++][1]);
            
            res[q.back()]=ds.find(q[0])==ds.find(q[1]);
        }
        return res;
        
        
    }
};