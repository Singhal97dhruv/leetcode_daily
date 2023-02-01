class Solution {
public:
    int gcd(int p,int q){
        if(q==0)return p;
        return gcd(q,p%q);
    }
    int findGCD(vector<int>& nums) {
        int small=*min_element(nums.begin(),nums.end());
        int large=*max_element(nums.begin(),nums.end());
        return gcd(small,large);
    }
};