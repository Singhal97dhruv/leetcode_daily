class Solution {
public:
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
sort(candidates.begin(),candidates.end());
vector<int>combination;
vector<vector<int>>res;
recurs(candidates,target,combination,res,0);
return res;
}
private:
void recurs(vector<int>&candidates,int target,vector<int>&combination,vector<vector<int>>&res,int begin){
if(!target){
res.push_back(combination);
return;
}
for(int i=begin;i!=candidates.size()&&target>=candidates[i];i++){
combination.push_back(candidates[i]);
recurs(candidates,target-candidates[i],combination,res,i);
combination.pop_back();
}
// return res;
}
​
};