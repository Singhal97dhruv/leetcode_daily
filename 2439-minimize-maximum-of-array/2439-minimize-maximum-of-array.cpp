class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long sum=0,mn=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mn=max(mn,(sum+i)/(i+1));
        }
        return mn;
    }
};