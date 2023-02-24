class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int left=0,right=*max_element(candies.begin(),candies.end());
        while(left<right){
            long cnt=0, mid=(left+right+1)/2;
            for(long long i:candies)cnt+=i/mid;
            if(cnt>=k)left=mid;
            else right=mid-1;
        }
        return left;
    }
};