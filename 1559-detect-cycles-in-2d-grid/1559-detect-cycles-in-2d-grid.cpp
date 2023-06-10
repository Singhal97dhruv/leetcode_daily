class Solution {
public:
    vector<int>offset={0,1,0,-1,0};
    bool dfs(int i,int j,vector<vector<char>>&grid,char c,int lastX=-1,int lastY=-1){
        if(grid[i][j]==c-26)return true;
        if(grid[i][j]!=c)return false;
        grid[i][j]=c-26;
        bool ans=false;
        for(int k=0;k<4;k++){
            int dx=i+offset[k],dy=j+offset[k+1];
            if(dx<0 || dy<0 || dx>=grid.size() || dy>=grid[0].size() ||(dx==lastX && dy==lastY))continue;
                ans=ans||dfs(dx,dy,grid,c,i,j);
        }
        return ans;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j]>='a'){
                    cout<<i<<j<<" ";
                    if(dfs(i,j,grid,grid[i][j]))return true;                    
                }   
            }
        }
      
        return false;
    }
};