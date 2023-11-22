class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       int n=nums.size();
        unordered_map<int,vector<int>>map;
        int mxKey=0;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                map[i+j].push_back(nums[i][j]);
                mxKey=max(mxKey,i+j);
            }
        }
        
        vector<int>ans;
        
        for(int i=0;i<=mxKey;i++){
            for(int i:map[i]){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};