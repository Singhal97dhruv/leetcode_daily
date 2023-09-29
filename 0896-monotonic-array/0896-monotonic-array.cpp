class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)return true;
        int inc=1,dec=1;
        for(int i=1;i<nums.size();i++){
            inc &= nums[i]>=nums[i-1];
            dec &= nums[i]<=nums[i-1];
        }
        return inc||dec;
    }
};
