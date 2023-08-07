class Solution {
    
    class DSU{
        vector<int>par,rank;
        public:
            DSU(int n):par(n,0),rank(n,0){
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
                    else{
                        par[yp]=xp;
                    }
                    rank[xp]+=rank[xp]==rank[yp];
                    return true;
                }
                return false;
            }
    };
    
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        DSU ds(accounts.size());
        
        unordered_map<string,int>map;
        for(int i=0;i<accounts.size();i++){
            for(int j=1;j<accounts[i].size();j++){
                if(map.find(accounts[i][j])!=map.end()){
                    int par=map[accounts[i][j]];
                    ds.Union(par,i);
                }
                else{
                    map[accounts[i][j]]=i;
                }
            }
        }
        
        unordered_map<int,set<string>>emailsSet;
        for(int i=0;i<accounts.size();i++){
            int par= ds.find(i);
            for(int j=1;j<accounts[i].size();j++){
                emailsSet[par].insert(accounts[i][j]);
            }
        }
        vector<vector<string>>res;
        for(auto acc: emailsSet){
            vector<string>temp;
            temp.push_back(accounts[acc.first][0]);
            
            for(string email: acc.second){
                temp.push_back(email);
            }
            res.push_back(temp);
        }
        return res;
    }
};