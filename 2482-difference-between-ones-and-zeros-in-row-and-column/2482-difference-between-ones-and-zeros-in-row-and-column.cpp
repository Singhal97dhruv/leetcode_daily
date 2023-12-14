class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        unordered_map<int,int>rowOnes,colOnes;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<grid.size();i++){
           
            int countOnesRow=0;
            for(int j=0;j<grid[0].size();j++){
                countOnesRow+=grid[i][j];
            }
            rowOnes[i]=countOnesRow;
            
        }
         for(int j=0;j<grid[0].size();j++){
           
            int countOnesCol=0;
            for(int i=0;i<grid.size();i++){
                countOnesCol+=grid[i][j];
            }
            colOnes[j]=countOnesCol;
            
        }
        
        for(int i=0;i<grid.size();i++){
            
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]= rowOnes[i]+colOnes[j] - (m-rowOnes[i])- (n-colOnes[j]);
            }
            
        }
        return grid;
        
        
    }
};