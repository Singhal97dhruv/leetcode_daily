class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i:nums){
            if(i>nums[res])res++;
        }
        return res;
    }
};