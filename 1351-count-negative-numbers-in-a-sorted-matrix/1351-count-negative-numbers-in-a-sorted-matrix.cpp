class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int cnt=0;
        
        for(int i=0;i<m;i++){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]>=0)break;
                cnt++;
            }
        }
        return cnt;
    }
};