class Solution {
public:
    int dfs1(vector<int>&size,int idx,int pre,vector<int>par[]){
        int ans=1;
        for(int e: par[idx]){
            if(pre==e)continue;
            ans+=dfs1(size,e,idx,par);
        }
        return size[idx]=ans;
    }
    void dfs2(vector<int>&size,vector<int>par[],int idx,int pre,unordered_map<long long,int>& map,int n){
        long long ans=1;
        for(int e: par[idx]){
            if(pre==e){
                ans*=n-size[idx];
                continue;
            }
            ans*=size[e];
            dfs2(size,par,e,idx,map,n);
        }
        map[ans]++;
    }
   
    int countHighestScoreNodes(vector<int>& parents) {
        int occ=0;
        int n=parents.size();
        vector<int>par[n];
        for(int i=1;i<n;i++){
            par[parents[i]].push_back(i);
            par[i].push_back(parents[i]);
        }
        
        vector<int>size(n,0);
        dfs1(size,0,-1,par);
        unordered_map<long long,int>map;
        dfs2(size,par,0,-1,map,n);
        long long mx=0;
        
        for(auto i:map){
            if(i.first>mx)occ=i.second,mx=i.first;
        }
        
     
        return occ;
        
    }
};