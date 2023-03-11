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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        DSU ds(accounts.size());
        
        unordered_map<string,int>uf;
        
        for(int i=0;i<accounts.size();i++){
            for(int j=1;j<accounts[i].size();j++){
                
            
            if(uf.find(accounts[i][j])!=uf.end()){
                int par=uf[accounts[i][j]];
                ds.Union(par,i);
            }
            else{
                uf[accounts[i][j]]=i;
            }
            } 
        }
        
        unordered_map<int,set<string>>emails;
        
        for(int i=0;i<accounts.size();i++){
            int par=ds.find(i);
            for(int j=1;j<accounts[i].size();j++){
                emails[par].insert(accounts[i][j]);
            }
        }
        
        vector<vector<string>>res;
        
        for(auto i:emails){
            vector<string>temp;
            temp.push_back(accounts[i.first][0]);
            // cout<<accounts[i.first][0];
            for(auto j:i.second)temp.push_back(j);
            res.push_back(temp);
        }
        return res;;
        
    }
};