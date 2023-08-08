class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       
        unordered_map<int,int>map={{0,1}};
        int tempSum=0, res=0;
        for(int i: nums){
            tempSum+=i;
            res+=map[tempSum-goal];
            map[tempSum]++;
        }
        return res;
        
    }
};