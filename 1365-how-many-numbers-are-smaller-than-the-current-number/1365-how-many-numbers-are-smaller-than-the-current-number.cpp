class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        int cnt[101]={0};
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
        }
        for(int i=1;i<101;i++){
            cnt[i]=cnt[i]+cnt[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)res.push_back(0);
            else
                res.push_back(cnt[nums[i]-1]);
        }
        return res;
    }
};