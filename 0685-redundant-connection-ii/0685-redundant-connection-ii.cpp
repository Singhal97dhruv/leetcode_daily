class Solution {
public:
    int root(int i,vector<int>&par){
        while(i!=par[i]){
            par[i]=par[par[i]];
            i=par[i];
        }
        return i;
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int n=edges.size();
       vector<int>can1={-1,-1};
        vector<int>can2={-1,-1};
        vector<int>parent(n+1);
        for(int i=0;i<edges.size();i++){
            if(parent[edges[i][1]]==0){
                parent[edges[i][1]]=edges[i][0];
            }
            else{
                can1={parent[edges[i][1]],edges[i][1]};
                can2=edges[i];
                edges[i][1]=0;
            }
        }
        for(int i=0;i<=n;i++)parent[i]=i;
        
        
        for(int i=0;i<edges.size();i++){
            if(edges[i][1]==0)continue;
            int child=edges[i][1],father=edges[i][0];
            if(root(father,parent)==child){
                if(can1[0]==-1)return edges[i];
                 return can1;
            }
            parent[child]=father;
        }
        return can2;
    }
};