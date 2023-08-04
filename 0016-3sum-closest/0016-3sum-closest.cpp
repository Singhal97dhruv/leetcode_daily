class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // int closest=nums[0]+nums[1]+nums[2];
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(i>0 && nums[i]==nums[i-1])continue;
        //     int first=nums[i];
        //     int front=i+1;
        //     int back=nums.size()-1;
        //     while(front<back){
        //         int temp=first+nums[front]+nums[back];
        //         if(temp==target)return target;
        //         if(abs(temp-target)<abs(target-closest))closest=temp;
        //         if(temp>target)back--;
        //         else front++;
        //     }
        // }
        // return closest;
        
        int closest=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;

            int first=nums[i];
            int left=i+1,right=nums.size()-1;
            while(left<right){
                int currSum=first+ nums[left]+ nums[right];
                if(currSum==target)return target;
                if(abs(target-currSum)<abs(target-closest))closest=currSum;
                if(currSum<target)left++;
                else right--;
            }

            
            
            
        }
        return closest;
    }
};