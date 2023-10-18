class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
     
        int sum=accumulate(nums.begin(),nums.end(),0);
        sort(nums.begin(),nums.end());
        int testSum=0;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            testSum+=nums[i];
            sum-=nums[i];
            ans.push_back(nums[i]);
            if(testSum>sum)break;
        }
        return ans;
    }
};