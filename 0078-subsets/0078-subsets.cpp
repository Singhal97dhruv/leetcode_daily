class Solution {
public:
    
    vector<vector<int>>res;
    
//     void recur(vector<int>&temp,vector<int>&nums,int st){
//         if(st==nums.size())return;
        
//         for(int i=st;i<nums.size();i++){
//             temp.push_back(nums[i]);
//             res.push_back(temp);
//             recur(temp,nums,i+1);
//             temp.pop_back();
//         }
        
//     }
    
    
    void recur(int idx,vector<int>&nums,vector<int>&temp){
        if(idx>=nums.size()){
            // res.push_back(temp);
            return;
        }
        // recur(idx+1,nums,temp);
        
        for(int i=idx;i<nums.size();i++){
            temp.push_back(nums[i]);
            res.push_back(temp);
            recur(i+1,nums,temp);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        res.push_back({});
        vector<int>temp;
        // recur(temp,nums,0);
        recur(0,nums,temp);
        return res;
    }
};