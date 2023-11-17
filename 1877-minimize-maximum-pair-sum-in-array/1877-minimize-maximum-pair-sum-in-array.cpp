class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int res=0;
        while(i<j){
            res=max(res,nums[i]+nums[j]);
            i++,j--;
        }
        return res;
        
    }
};