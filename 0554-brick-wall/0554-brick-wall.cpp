class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int>map;
        int mx=0;
        for(int i=0;i<wall.size();i++){
            int curr=0;
            for(int j=0;j<wall[i].size()-1;j++){
                curr+=wall[i][j];
                map[curr]++;
                mx=max(mx,map[curr]);
            }
        }
        return wall.size()-mx;
    }
};