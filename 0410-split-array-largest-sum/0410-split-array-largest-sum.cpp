class Solution {
public:
    bool feasible(long long sum,const vector<int>& v,int k){
        long long total=0;
        int count=1;
        for(int i:v){
            total+=i;
            if(total>sum){
                total=i;
                count++;
                if(count>k)return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        long long right=accumulate(nums.begin(),nums.end(),0);
        long long left=*max_element(nums.begin(),nums.end());
        while(left<right){
            long long mid=left+(right-left)/2;
            if(feasible(mid,nums,k)){
                right=mid;
            }
            else left=mid+1;
        }
        return left;
    }
};