class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<int>offset={0,1,0,-1,0};
        queue<pair<int,int>>q;
        int dist=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)q.push({i,j});
            }
        }
            if(q.size()==grid.size()*grid[0].size())return -1;
        
        while(!q.empty()){
            dist++;
            int n=q.size();
            for(int i=0;i<n;i++){
                auto[r,c]=q.front();q.pop();
                for(int j=0;j<4;j++){
                    int nr=r+offset[j],nc=c+offset[j+1];
                    if(nr<0 || nc<0 || nr>=grid.size() || nc>= grid[0].size() || grid[nr][nc]==1)continue;
                    grid[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        return dist-1;
        
        
    }
};