class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.back()-nums[2];
        int y=nums[nums.size()-3]-nums[0];
        int z=nums[nums.size()-2]-nums[1];
        return min({x,y,z});
    }
};