class Solution {
public:
    long long res=0,sts;
    long long dfs(int st,int prev,vector<vector<int>>&g,int people=1){
        for(int &i:g[st]){
            if(i==prev)continue;
            people+=dfs(i,st,g);
        }
        if(st!=0)res+=(people+sts-1)/sts;
        return people;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        sts=seats;
        vector<vector<int>>g(roads.size()+1);
        for(vector<int>&i:roads){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        dfs(0,0,g);
        return res;
    }
};