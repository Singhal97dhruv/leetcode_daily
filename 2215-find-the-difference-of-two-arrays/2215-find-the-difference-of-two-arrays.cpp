class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>setA,setB;
        vector<vector<int>>res(2);
        for(int i:nums1)setA.insert(i);
        for(int i:nums2)setB.insert(i);
        for(int i:setA)
            if(setB.find(i)==setB.end())res[0].push_back(i);
        for(int i:setB)
            if(setA.find(i)==setA.end())res[1].push_back(i);
        return res;
    }
};