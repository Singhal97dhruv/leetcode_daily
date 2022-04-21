Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

You can assume that you can always reach the last index.

 
  
  class Solution {
public:
    int jump(vector<int>& nums) {
       int start=0,end=0,n=nums.size()-1,count=0;
        while(end<n){
            count++;
            int maxend=end+1;
            for(int i=start;i<=end;i++){
                if(i+nums[i]>=n)return count;
                maxend=max(maxend,i+nums[i]);
            }
            start=end+1;
            end=maxend;
        }
        return count;
    }
};
