class Solution {
public:
    int jump(vector<int>& nums) {
       // int start=0,end=0,n=nums.size()-1,count=0;
       //  while(end<n){
       //      count++;
       //      int maxend=end+1;
       //      for(int i=start;i<=end;i++){
       //          if(i+nums[i]>=n)return count;
       //          maxend=max(maxend,i+nums[i]);
       //      }
       //      start=end+1;
       //      end=maxend;
       //  }
       //  return count;
        
        int start=0,end=0,n=nums.size()-1,count=0;
        while(end<n){
            count++;
            int mxEnd=end+1;
            for(int i=start;i<=end;i++){
                if(i+nums[i]>=n)return count;
                mxEnd=max(mxEnd,i+nums[i]);
            }
            start=end+1;
            end=mxEnd;
        }
        return count;
    }
};