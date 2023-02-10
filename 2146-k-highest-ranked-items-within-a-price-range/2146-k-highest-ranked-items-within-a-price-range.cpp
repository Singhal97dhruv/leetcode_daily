class Solution {
public:
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
        int dist=0;
        vector<vector<int>>temp,res;
        vector<int>dirn={0,1,0,-1,0};
        queue<pair<int,int>>q;
        q.push({start[0],start[1]});
        vector<vector<bool>>seen(grid.size(),vector<bool>(grid[0].size(),false));
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto top=q.front();q.pop();
                if(seen[top.first][top.second])continue;
                if(grid[top.first][top.second]==0)continue;
                seen[top.first][top.second]=true;
                if(grid[top.first][top.second]>1){
                    if(grid[top.first][top.second]>=pricing[0] && grid[top.first][top.second]<=pricing[1]){
                        temp.push_back({dist,grid[top.first][top.second],top.first,top.second});
                    }
                }
                for(int i=0;i<4;i++){
                    int nr=top.first+dirn[i];int nc=top.second+dirn[i+1];
                    if(nr<0 || nc<0 || nr>=grid.size() || nc>=grid[0].size()|| seen[nr][nc]==true)continue;
                    q.push({nr,nc});
                }
            }
            dist++;
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<min(int(temp.size()),int(k));i++){
            res.push_back({temp[i][2],temp[i][3]});
        }
        return res;
        
    }
};