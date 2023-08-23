class Solution {
public:
    
//     vector<vector<int>>res;
    
//     void combination(int currSum,int idx,vector<int>&candidates,int target,vector<int>&t){
//         if(currSum>target)return;
//         if(currSum==target){res.push_back(t);return;}
        
//         for(int i=idx;i<candidates.size();i++){
//             t.push_back(candidates[i]);
//             combination(currSum+candidates[i],i, candidates,target,t);
//             t.pop_back();
//         }
        
//     }
    
    vector<vector<int>>res;

    void recur(int idx,vector<int>&temp,int sum,vector<int>&candidates,int target){
        if(sum>target)return;
        if(sum==target){
            res.push_back(temp);
            return;
        }
        
        for(int i=idx;i<candidates.size();i++){
            
            temp.push_back(candidates[i]);
            recur(i,temp,sum+candidates[i],candidates,target);
            temp.pop_back();
            
        }
        
        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//         vector<int>t;
        
//         combination(0,0,candidates,target,t);
        
        vector<int>temp;
        recur(0,temp,0,candidates,target);
        
        return res;
        
    }
};