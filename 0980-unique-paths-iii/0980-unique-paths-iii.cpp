class Solution {
public:
    int ways=0;
    vector<int>offset={0,1,0,-1,0};
    void paths(vector<vector<int>>grid,int cnt,int blocks,int ii,int jj){
        if(ii<0 || jj<0 || ii>=grid.size()|| jj>=grid[0].size()|| grid[ii][jj]==-1)return ;
        if(grid[ii][jj]==2)
        {
            if(cnt==blocks)
                ways++;
            return;
        }
        grid[ii][jj]=-1;
        
        // s.insert({ii,jj});
        for(int k=0;k<4;k++){
            paths(grid,cnt+1,blocks,ii+offset[k],jj+offset[k+1]);
        }
        
        
    }
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size()*grid[0].size(),st_i,st_j,blocks=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    st_i=i,st_j=j;
                }
                else if(grid[i][j]==-1)continue;
                blocks++;
            }
        }
        paths(grid,1,blocks,st_i,st_j);
        return ways;
    }
};