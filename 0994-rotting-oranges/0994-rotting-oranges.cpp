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
        int freshOranges=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)q.push({i,j});
                if(grid[i][j]==1)freshOranges++;
            }
        }
        
        int timeTaken=0;
        while(!q.empty() && freshOranges){
            int n=q.size();
            timeTaken++;
            for(int i=0;i<n;i++){
                auto [s,t]=q.front();q.pop();
                for(int k=0;k<4;k++){
                    int nr=s+offset[k],nc=t+offset[k+1];
                    if(nr<0 || nc<0 || nr>=grid.size() || nc>=grid[0].size()|| grid[nr][nc]!=1)continue;
                    if(grid[nr][nc]==1)freshOranges--;
                    grid[nr][nc]=2;
                    q.push({nr,nc});
                }
            }
        }
        
        
        return freshOranges?-1:timeTaken;
        
        
        
        
        
    }
};