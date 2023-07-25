class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size(),fromEnd;        
        
        for(fromEnd=n-2;fromEnd>=0;fromEnd--){
            if(nums[fromEnd]<nums[fromEnd+1])break;
        }
        if(fromEnd<0) reverse(nums.begin(),nums.end());
        else{
            int l;
        for(l=n-1;l>fromEnd;l--){
            if(nums[l]>nums[fromEnd])break;
        }
        swap(nums[fromEnd],nums[l]);
        
        reverse(nums.begin()+fromEnd+1,nums.end());
        }
        
        
    }
};