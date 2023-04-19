class Solution {
    public int findNumberOfLIS(int[] nums) {
        int mxLen=0,res=0;
        int []len=new int[nums.length],cnt=new int[nums.length];
       
        for(int i=0;i<nums.length;i++){
            len[i]=cnt[i]=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(len[i]==len[j]+1)cnt[i]+=cnt[j];
                    else if(len[i]<len[j]+1){
                        len[i]=len[j]+1;
                        cnt[i]=cnt[j];
                    }
                }
            }
            if(len[i]==mxLen){
                res+=cnt[i];
            }
            else if(len[i]>mxLen){
                mxLen=len[i];
                res=cnt[i];
            }
        }
        return res;
    }
}