class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i=-1,count=0,curr=-222;
        // for(int j=0;j<nums.size();j++){
        //     if(nums[j]!=curr){
        //         curr=nums[j];
        //         i++;
        //         count++;
        //        nums[i]=nums[j];
        //     }
        // }
        // return count;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                swap(nums[++i],nums[j]);
            }
        }
        return i+1;
    }
};