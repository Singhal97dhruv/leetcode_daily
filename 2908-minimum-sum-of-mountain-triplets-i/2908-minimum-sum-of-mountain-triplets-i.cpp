class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        vector<int>RtoLSmallest(nums.size(),nums.back());
        for(int i=nums.size()-2;i>=0;i--){
            RtoLSmallest[i]=min(RtoLSmallest[i+1],nums[i]);
        }
        int smallestLeft=nums[0];
        int ans=-1;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>smallestLeft && nums[i]>RtoLSmallest[i+1]){
                if(ans==-1)
                    ans=nums[i]+smallestLeft+RtoLSmallest[i+1];
                else
                    ans=min(ans,nums[i]+smallestLeft+RtoLSmallest[i+1]);
            }
            smallestLeft=min(smallestLeft,nums[i]);
        }
        return ans;
    }
};