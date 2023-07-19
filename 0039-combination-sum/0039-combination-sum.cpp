class Solution {
public:
    
    vector<vector<int>>res;
    
    void combination(int currSum,int idx,vector<int>&candidates,int target,vector<int>&t){
        if(currSum>target)return;
        if(currSum==target){res.push_back(t);return;}
        
        for(int i=idx;i<candidates.size();i++){
            t.push_back(candidates[i]);
            combination(currSum+candidates[i],i, candidates,target,t);
            t.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>t;
        
        combination(0,0,candidates,target,t);
        
        return res;
        
    }
};