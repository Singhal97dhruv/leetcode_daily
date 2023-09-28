class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
     
        long long rob2=accumulate(grid[0].begin(),grid[0].end(),0LL),bottom=0,res=LLONG_MAX;
        for(int i=0;i<grid[0].size();i++){
            rob2-=grid[0][i];
            res=min(res,max(rob2,bottom));
            bottom+=grid[1][i];
        }
        return res;
    }
};