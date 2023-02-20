class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        
        int Xor=0,n=nums.size();
        vector<int>res;
        for(int i:nums)Xor^=i;
        res.push_back(Xor^=((1<<maximumBit)-1));
        for(int i=1;i<n;i++){
            res.push_back(Xor^=nums[n-i]);
        }
        return res;
        
    }
};