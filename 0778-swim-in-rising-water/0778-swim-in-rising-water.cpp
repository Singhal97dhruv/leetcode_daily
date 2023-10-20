class Solution {
public:
//     vector<int>offset={-1, 0, 1, 0, -1};
    
//     bool dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>&grid,int wlevel){
//         vis[i][j]=1;
//         for(int k=0;k<4;k++){
//             int nr=i+offset[k],nc=j+offset[k+1];
//             if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid.size() && vis[nr][nc]==0 && grid[nr][nc]<=wlevel){
//             if(i==grid.size()-1 && j==grid.size()-1)return true;
//             if(dfs(nr,nc,vis,grid,wlevel))return true;
//             }
            
//         }
//         return false;
//     }
    
//     bool valid(vector<vector<int>>&grid,int wlevel){
        
//           vector<vector<int>>vis(grid.size(),vector<int>(grid.size(),0));
//             return dfs(0,0,vis,grid,wlevel);
        
//     }
     bool valid(vector<vector<int>>& grid, int waterHeight) {
        int n = grid.size();
        vector<vector<int>> visited(n, vector<int>(n, 0));
        vector<int> dir({-1, 0, 1, 0, -1});
        return dfs(grid, visited, dir, waterHeight, 0, 0, n);
    }
    bool dfs(vector<vector<int>>& grid, vector<vector<int>>& visited, vector<int>& dir, int waterHeight, int row, int col, int n) {
        visited[row][col] = 1;
        for (int i = 0; i < 4; ++i) {
            int r = row + dir[i], c = col + dir[i+1];
            if (r >= 0 && r < n && c >= 0 && c < n && visited[r][c] == 0 && grid[r][c] <= waterHeight) {
                if (r == n-1 && c == n-1) return true;
                if (dfs(grid, visited, dir, waterHeight, r, c, n)) return true;
            }
        }
        return false;
    }
    
    
    
    
    
    int swimInWater(vector<vector<int>>& grid) {
          int n = grid.size();
        int low = grid[0][0], hi = n*n-1;
        while (low < hi) {
            int mid = low + (hi-low)/2;
            if (valid(grid, mid)) 
               hi = mid;
            else
               low = mid+1;
        }
        return low;
        
        
    }
};