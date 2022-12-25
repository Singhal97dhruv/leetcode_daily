class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=0;
        vector<int>ans;
        for(int i:nums)sum+=i;
        for(int i=0;i<queries.size();i++){
            int temp=sum,j;
           for(j=0;j<nums.size() && temp>queries[i];j++){
               temp-=nums[j];
           }
            ans.push_back(nums.size()-j);
        }
        return ans;
    }
};