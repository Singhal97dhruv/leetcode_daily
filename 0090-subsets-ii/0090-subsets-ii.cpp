class Solution {
public:
    // void subsets(vector<int>r,vector<vector<int>>&ans,vector<int>nums,int start){
    //     if(start==nums.size())
    //     {
    //         ans.push_back(r);
    //         return;
    //     }
    //     subsets(r,ans,nums,start+1);
    //     while(start+1<nums.size()  && nums[start]==nums[start+1]){
    //         r.push_back(nums[start]);
    //         start++;
    //     }
    //     r.push_back(nums[start]);
    //     subsets(r,ans,nums,start+1);
    // }
    
    
    vector<vector<int>>res;
    void recur(int st,vector<int>&vect,vector<int>&nums){
        
        if(st==nums.size()){
            res.push_back(vect);
            return;
        }
        vect.push_back(nums[st]);
        recur(st+1,vect,nums);
        
        vect.pop_back();

        int idx=upper_bound(nums.begin(),nums.end(),nums[st])-nums.begin();
        
        recur(idx,vect,nums);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<int>r;
        // vector<vector<int>>ans;
        // subsets(r,ans,nums,0);
        // return ans;
        sort(nums.begin(),nums.end());
        vector<int>v;
        recur(0,v,nums);
        return res;
        
    
    }
};