class Solution {
public:
    vector<int>offset={0,1,0,-1,0};
    void initial_paint(vector<vector<int>>&grid,int i,int j,vector<pair<int,int>>&q){
        if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size()|| grid[i][j]!=1)return;
        grid[i][j]=2;
        q.push_back({i,j});
        for(int k=0;k<4;k++){
            initial_paint(grid,i+offset[k],j+offset[k+1],q);
        }
    }

    // bool after_paints(vector<vector<int>>&grid,int i,int j,int color){
    //     if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size()|| grid[i][j]==color)return false;
    //         grid[i][j]=grid[i][j]==1?grid[i][j]:color+1;
    //         return grid[i][j]==1;
    // }

    int shortestBridge(vector<vector<int>>& grid) {
        bool flag=false;
    vector<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    initial_paint(grid,i,j,q);
                    flag=1;
                    break;
                }
            }
                if(flag)break;
        }

        // int color=2;
        // while(color){
        //     for(int i=0;i<grid.size();i++){
        //         for(int j=0;j<grid[0].size();j++){
        //             if(grid[i][j]==color && (after_paints(grid,i,j+1,color)||after_paints(grid,i+1,j,color)||after_paints(grid,i-1,j,color)||after_paints(grid,i,j-1,color) ))
        //             return color-2;
        //         }
        //     }
        //     color++;
        // }

        while(!q.empty()){
            cout<<"Hi";
            vector<pair<int,int>>q1;
            for(auto [i,j]: q){
                for(int k=0;k<4;k++){
                    int nr=i+offset[k],nc=j+offset[k+1];
                    if(nr<0 || nr>=grid.size() || nc<0 || nc>=grid[0].size())continue;
                    if(grid[nr][nc]==1)return grid[i][j]-2;
                    if(grid[nr][nc]==0){
                        grid[nr][nc]=grid[i][j]+1;
                        q1.push_back({nr,nc});
                    }
                }
            }
            swap(q,q1);

        }

        return -1;
    }
};