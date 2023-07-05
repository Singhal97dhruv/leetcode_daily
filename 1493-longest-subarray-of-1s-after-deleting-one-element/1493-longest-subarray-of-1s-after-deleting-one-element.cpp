class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=0,pos=-1,res=0;
        for(int i=0,j=0;j<nums.size();j++){
            if(nums[j]==1){
                
                res=max(res,j-i-k+1);
            }
            else{
                k=1;
                if(pos==-1){
                    pos=j;
                }
                else{
                    i=pos+1;
                    pos=j;
                }
            }
        }
        if(k==0)return res-1;
        return res;
    }
};