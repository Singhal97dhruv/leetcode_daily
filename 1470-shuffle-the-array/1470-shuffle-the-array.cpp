class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // vector<int>res;
        // for(int i=0;i<n;i++){
        //     res.push_back(nums[i]);
        //     res.push_back(nums[n+i]);
        // }
        // return res;
        
        for(int i=n;i<nums.size();i++){
            nums[i]=(nums[i]*1024)+nums[i-n];
        }
        int idx=0;
        for(int i=n;i<nums.size();i++,idx+=2){
            nums[idx]=nums[i]%1024;
            nums[idx+1]=nums[i]/1024;
        }
        return nums;
        
    }
};