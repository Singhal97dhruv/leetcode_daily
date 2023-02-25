class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>map;int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prod=nums[i]*nums[j];
                res+=8*map[prod];
                map[prod]++;
            }
        }
        return res;
    }
};