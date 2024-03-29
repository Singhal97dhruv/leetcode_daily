class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
//         unordered_map<string,int>rows;
//         int n=grid.size();
//         for(int i=0;i<n;i++){
//             string R;
//             for(int j=0;j<n;j++){
//                 R+=to_string(grid[i][j]);
//                 R+="+";
                
//             }
//             rows[R]++;
//         }
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             string C;
//             for(int i=0;i<n;i++){
//                 C+=to_string(grid[i][j]);
//                 C+="+";
//             }
//             cnt+=rows[C];
//         }
//         return cnt;
        
        map<vector<int>,int>rows;
        int n=grid.size();
        for(int i=0;i<n;i++){
            rows[grid[i]]++;
        }
        int cnt=0;
        for(int j=0;j<n;j++){
            vector<int>temp;
            for(int i=0;i<n;i++){
                temp.push_back(grid[i][j]);
            }
            cnt+=rows[temp];
        }
        return cnt;
    }
};