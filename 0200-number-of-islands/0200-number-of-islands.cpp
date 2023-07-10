class Solution {
public:
    vector<int>offset{0,1,0,-1,0};
//     void islandToWater(vector<vector<char>>&grid,int i,int j){
//         if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0')return;
//         grid[i][j]='0';
//         for(int k=0;k<4;k++){
//             islandToWater(grid,i+offset[k],j+offset[k+1]);
//         }
        
//     }
    
    int numIslands(vector<vector<char>>& grid) {
        
        // int cnt=0;
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid[0].size();j++){
        //         if(grid[i][j]=='1'){
        //             cnt++;
        //             islandToWater(grid,i,j);
        //         }
        //     }
        // }
        // return cnt;
        
        int cnt=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    
                    while(!q.empty()){
                        auto [s,t]=q.front();q.pop();
                        
                        grid[s][t]='0';
                        
                        for(int k=0;k<4;k++){
                            int r=s+offset[k],c=t+offset[k+1];
                            if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]=='0')continue;
                            grid[r][c]='0';
                            q.push({r,c});
                        }
                        
                    }
                    
                }
            }
        }
        
      return cnt;  
        
        
        
        
        
    }
};