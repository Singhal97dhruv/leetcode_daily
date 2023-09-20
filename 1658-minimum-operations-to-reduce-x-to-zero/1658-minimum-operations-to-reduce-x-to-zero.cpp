class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum1=0;
            for(int i=0;i<nums.size();i++){
                sum1+=nums[i];
            }
        sum1-=x;
        if(sum1==0)return nums.size();
        int sum2=0;
        int i=0,len=0;
        for(int j=0;j<nums.size();j++){
            sum2+=nums[j];
            while(i<nums.size() && sum2>sum1)
            sum2-=nums[i++];
            if(sum1==sum2)len = max(len,j-i+1);
        }
        if(!len)return -1;
        return nums.size()-len;
    }
};