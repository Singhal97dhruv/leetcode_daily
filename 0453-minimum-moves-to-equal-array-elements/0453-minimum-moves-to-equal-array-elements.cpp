class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        long long sum=0;
        int mn=INT_MAX;
        for(auto i:nums){
            sum+=i;
            mn=min(mn,i);
        }
        return sum-nums.size()*mn;
    }
};