Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].

Return true if there is a 132 pattern in nums, otherwise, return false.

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>s;
       int s3=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
           if(nums[i]<s3)return true;
            else while(!s.empty() && nums[i]>s.top()){
                s3=s.top();s.pop();
            }
            s.push(nums[i]);
        }
        return false;
        
    }
};
