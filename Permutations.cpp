Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>vect;
        vect.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())){
            vect.push_back(nums);
        }
        return vect;
        
    }
};
