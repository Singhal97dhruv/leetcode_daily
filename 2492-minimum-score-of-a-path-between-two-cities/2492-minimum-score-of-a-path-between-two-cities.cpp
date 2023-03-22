class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<vector<pair<int,int>>>vect(n+1);
        int res=INT_MAX;
        for(auto e:roads){
            vect[e[0]].push_back({e[1],e[2]});
            vect[e[1]].push_back({e[0],e[2]});

        }
        queue<int>q;
        vector<int>visited(n+1,0);
        q.push(1);
        visited[1]=1;
        while(q.size()){
            auto node=q.front();
            q.pop();
            for(auto edge: vect[node]){
                res=min(res,edge.second);
                if(!visited[edge.first]){
                    visited[edge.first]=1;
                    q.push(edge.first);
                }
            }
        }
        
        
        return res;
        
    }
};