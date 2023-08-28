class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
//         vector<vector<int>>res;
        
//         for(int i=0;i<land.size();i++){
//             for(int j=0;j<land[0].size();j++){
//                 if(land[i][j]==0)continue;
                
//                 int row=i;
//                 while(row<land.size() && land[row][j]==1){
//                     row++;
//                 }
                
//                 int col=j;
//                 while(col<land[0].size() && land[i][col]==1){

//                     col++;
//                 }
                
//                 row=row==0?row: row-1;
//                 col=col==0?col: col-1;
    
//                 res.push_back({i,j,row,col});
                
//                 for(int x=i;x<=row;x++){
//                     for(int y=j;y<=col;y++)
//                         land[x][y]=0;
//                 }
                
//             }
//         }
//         return res;
        
        vector<vector<int>>ans;
        for(int i=0;i<land.size();i++){
            for(int j=0;j<land[0].size();j++){
                
                if(land[i][j]==0)continue;
                
                int Row=i,Col=j;
                while(Row<land.size() && land[Row][j]==1)Row++;
                while(Col<land[0].size() && land[i][Col]==1)Col++;
                
                Row=Row==0?Row:Row-1;
                Col=Col==0?Col:Col-1;
                
                ans.push_back({i,j,Row,Col});
                for(int l=i;l<=Row;l++){
                    for(int r=j;r<=Col;r++){
                        land[l][r]=0;
                    }
                }
                
            }
        }
        
        
        return ans;
        
    }
};