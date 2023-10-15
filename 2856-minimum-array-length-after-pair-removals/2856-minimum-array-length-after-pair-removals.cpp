class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
       
        int n=nums.size();
        int mx=0,cf=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j-1]!=nums[j]){
                cf=0;
            }
            cf++;
            mx=max(cf,mx);
        }
        if(mx<=n/2){
            if(n%2==0)return 0;
            return 1;
        }
        return 2*mx-n;
    }
};