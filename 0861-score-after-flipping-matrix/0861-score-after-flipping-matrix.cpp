class Solution {
public:
    void flipRow(vector<vector<int>>&g,int i){
        g[i][0]=1;
        for(int j=1;j<g[0].size();j++){
            g[i][j]=!g[i][j];
        }
    }
    void flipCol(vector<vector<int>>&g,int j){
        for(int i=0;i<g.size();i++){
            g[i][j]=!g[i][j];
        }
    }
    
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>cols(n,0);
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                flipRow(grid,i);
            }
            for(int j=1;j<n;j++){
                if(grid[i][j])cols[j]++;
            }
        }
        
        for(int j=1;j<n;j++){
            if(cols[j]<=m/2)flipCol(grid,j);
        }
        
        int res=0;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=n-1;j>=0;j--){
                sum+=grid[i][j]==1?pow(2,n-1-j):0;
            }
            res+=sum;
        }
        return res;
    }
};