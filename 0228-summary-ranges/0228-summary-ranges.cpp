class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
     
        int size=nums.size();
        vector<string>s;
        if(size==0)return s;
        for(int i=0;i<size;){
            int start=i,end=i;
            while(end+1<size &&nums[end]+1==nums[end+1])end++;
        if(end>start)s.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
            else{s.push_back(to_string(nums[start]));}
         i=end+1;   
        }
        
  return s;      
    }
};