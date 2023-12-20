class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        auto mx=max_element(nums.begin(),nums.end())-nums.begin();
        auto mn=min_element(nums.begin(),nums.end())-nums.begin();
        if(mn>mx)swap(mx,mn);
        
        return min({mn+n-mx+1,mx+1,n-mn});
        
        
        
        
        
    }
};