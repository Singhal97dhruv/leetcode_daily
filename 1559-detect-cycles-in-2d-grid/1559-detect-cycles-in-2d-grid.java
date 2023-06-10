class Solution {
    
       int []offset={0,1,0,-1,0};
    public boolean dfs(int i,int j,char[][] grid,char c,int lastX,int lastY){
        if(grid[i][j]==c-26)return true;
        if(grid[i][j]!=c)return false;
        grid[i][j]=(char)(c-26);
        boolean ans=false;
        for(int k=0;k<4;k++){
            int dx=i+offset[k],dy=j+offset[k+1];
            if(dx<0 || dy<0 || dx>=grid.length || dy>=grid[0].length ||(dx==lastX && dy==lastY))continue;
                ans=ans||dfs(dx,dy,grid,c,i,j);
        }
        return ans;
    }
    
    public boolean containsCycle(char[][] grid) {
            for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                
                if(grid[i][j]>='a'){
                    if(dfs(i,j,grid,grid[i][j],-1,-1))return true;                    
                }   
            }
        }
        return false;
    }
}