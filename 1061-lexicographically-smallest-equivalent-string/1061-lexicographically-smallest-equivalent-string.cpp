int par[26];
class DSU{
    public:
    int find(int x){
        if(par[x]==-1)return x;
        return par[x]=find(par[x]);
    }
    
    void Union(int x,int y){
        int xp=find(x);
        int yp=find(y);
        if(xp!=yp){
            par[max(xp,yp)]=min(xp,yp);
        }
    }
    
};

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        memset(par,-1,sizeof(par));
                
        DSU ds;
        for(int i=0;i<s1.size();i++){
            ds.Union(s1[i]-'a',s2[i]-'a');
        }
        for(int i=0;i<baseStr.size();i++){
            baseStr[i]=ds.find(baseStr[i]-'a')+'a';
        }
        return baseStr;
        
    }
};