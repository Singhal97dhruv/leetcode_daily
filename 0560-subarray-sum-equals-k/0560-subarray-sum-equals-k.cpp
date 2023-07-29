class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      // unordered_map<int,int>m;
      //   m[0]++;
      //   int cum=0;
      //   int cnt=0;
      //   for(int i=0;i<nums.size();i++){
      //       cum+=nums[i];
      //       cnt+=m[cum-k];
      //       m[cum]++;
      //   }
      //   return cnt;
        
        unordered_map<int,int>map;
        map[0]++;
        int sum=0,cnt=0;
        for(int i:nums){
            sum+=i;
            cnt+=map[sum-k];
            map[sum]++;
        }
        return cnt;
    }
};