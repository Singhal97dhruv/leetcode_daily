class Solution {
public:
    bool check(long long x1,long long y1,long long x2,long long y2,long long r){
        long long x = (x1-x2) * (x1-x2);
        long long y = (y1-y2) * (y1-y2);
        return x+y <= r*r; 
    }

    int dfs(vector<int>adj[],vector<bool>&vis,int idx,int count){
        vis[idx]=true;
        count=1;
        for(auto edges: adj[idx]){
            if(!vis[edges]){
                count+=dfs(adj,vis,edges,count);
            }
        }
        return count;
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        
        int maxbombs=0;
            vector<int>adj[bombs.size()];
        for(int i=0;i<bombs.size();i++){
            for(int j=0;j<bombs.size();j++){
                if(i!=j && check(bombs[i][0],bombs[i][1],bombs[j][0],bombs[j][1],bombs[i][2])){
                    adj[i].push_back(j);
                }
            }
        }


        for(int i=0;i<bombs.size();i++){
        vector<bool>visited(bombs.size(),false);

        maxbombs=max(maxbombs,dfs(adj,visited,i,0));
            
        }
        return maxbombs;

    }
};