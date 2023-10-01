class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
       
       vector<int>temp=nums;
        for(int i:nums)temp.push_back(i);
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        int q=target/sum;
        int rem=target%sum;
        if(!rem){
            return q*nums.size();
        }
        target=rem;
        int ans=1e9;
        long long sm=0;
        for(int i=0,j=0;j<temp.size();j++){
            sm+=temp[j];
            while(sm>target){
                sm-=temp[i++];
            }
            if(sm==target){
                ans=min(ans,j-i+1);
            }
            
            
        }
        if(ans!=1e9){
            return q*nums.size()+ans;
        }
        return -1;
    }
};