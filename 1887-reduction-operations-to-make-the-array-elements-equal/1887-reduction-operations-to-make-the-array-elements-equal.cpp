class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n=nums.size();
      sort(nums.begin(),nums.end());
        int smallest=nums[0],prev=nums[n-1];
        int cnt=0,tmpCnt=0;
        for(int i=n-1;i>0;i--){
            if(nums[i]!=nums[i-1])cnt+=n-i;
        }
        return cnt;
    }
};