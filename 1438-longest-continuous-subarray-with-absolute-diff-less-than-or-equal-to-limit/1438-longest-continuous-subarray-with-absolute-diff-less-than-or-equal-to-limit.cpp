class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
       multiset<int>mset;
        int i,j;
        for(i=0,j=0;j<nums.size();j++){
            mset.insert(nums[j]);
            if(*mset.rbegin()-*mset.begin()>limit){
                mset.erase(mset.find(nums[i++]));
            }
        }
        return j-i;
        
    }
};