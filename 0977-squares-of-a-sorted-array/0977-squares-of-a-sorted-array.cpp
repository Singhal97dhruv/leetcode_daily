class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left=0,right=nums.size()-1;
        vector<int>ans(nums.size());
        int ansIdx=nums.size()-1;
        while(left<=right){
            int leftNum=nums[left]*nums[left];
            int rightNum=nums[right]*nums[right];
            if(leftNum<rightNum){
                ans[ansIdx--]=rightNum;
                right--;
            }
            else {
               ans[ansIdx--]=leftNum;
               left++;
            }
        }
        return ans;
    }
};