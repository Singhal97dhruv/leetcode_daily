class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //  int l = 0, r = 0, n = nums.size(), sum = 0, len = INT_MAX;
        // while (r < n) {
        //     sum += nums[r++];
        //     while (sum >= target) {
        //         len = min(len, r - l);
        //         sum -= nums[l++];
        //     }
        // }
        // return len == INT_MAX ? 0 : len;
        
        
        int i=0,j=0,sum=0,res=INT_MAX;
        for(;j<nums.size();j++){
            sum+=nums[j];
            if(sum>=target){
                while(sum>=target){
                    res=min(res,j-i+1);
                    sum-=nums[i++];
                }
            }
            
        }
        return res==INT_MAX?0:res;
    }
};