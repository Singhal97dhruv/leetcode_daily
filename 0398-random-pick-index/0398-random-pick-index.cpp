class Solution {
public:
    vector<int>nums;
    Solution(vector<int>& nums) {
        this->nums=nums;
    }
    
    int pick(int target) {
        int res=-1,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=target)continue;
            if(cnt==0){
                res=i,cnt++;
            }
            else{
                rand()%(++cnt)==0?res=i:res;
            }
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */