class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
//         int fresh=0,time_elapse=0;
//         vector<int>offset={0,1,0,-1,0};
//         queue<pair<int,int>>q;
        
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[0].size();j++){
//                 if(grid[i][j]==1)fresh++;
//                 else if(grid[i][j]==2)q.push({i,j});
//             }
//         }
        
//         while(q.size() && fresh){
//             time_elapse++;
//             int n=q.size();
            
//             for(int i=0;i<n;i++){
                
//                 auto [r,c]=q.front();q.pop();
                
//                 for(int j=0;j<4;j++){
//                     int nr=r+offset[j],nc=c+offset[j+1];
//                     if(nr<0 || nc<0 || nr>=grid.size() || nc>=grid[0].size() || grid[nr][nc]!=1)continue;
//                     fresh--;
//                     grid[nr][nc]=2;
//                     q.push({nr,nc});
//                 }
                
//             }
            
//         }
//         return fresh?-1:time_elapse;

        
        vector<int>offset{0,1,0,-1,0};
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)fresh++;
                if(grid[i][j]==2)q.push({i,j});
            }
        }
        
        int Time=0;
        
        while(!q.empty() && fresh){
            int n=q.size();
            Time++;
            for(int i=0;i<n;i++){
                auto [x,y]=q.front();q.pop();
                
                for(int k=0;k<4;k++){
                    int nr=x+offset[k],nc=y+offset[k+1];
                    if(nr<0 || nc<0 || nr>=grid.size() || nc>=grid[0].size() || grid[nr][nc]!=1)continue;
                    fresh--;
                    grid[nr][nc]=2;
                    q.push({nr,nc});
                }
                
            }
            
        }
        
        return fresh?-1:Time;
        
        
    }
};