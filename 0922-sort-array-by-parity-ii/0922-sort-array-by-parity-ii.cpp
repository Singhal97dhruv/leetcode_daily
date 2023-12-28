class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
       int i=0,j=1;
        for(;i<=nums.size();i+=2,j+=2){
            while(i<nums.size() && nums[i]%2==0)i+=2;
            while(j<nums.size() && nums[j]%2!=0)j+=2;
            if(i!=nums.size())swap(nums[i],nums[j]);
        }
        return nums;
    }
};