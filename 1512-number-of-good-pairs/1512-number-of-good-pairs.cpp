class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        unordered_map<int,int>map;
        for(int i:nums)map[i]++;
        for(auto i:map){
            int n=i.second;
            res+=(n*(n-1)/2);
        }
        return res;
    }
};