class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
     int mn=INT_MAX;
        int res=INT_MAX;
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0)nums[i]=nums[i]*2;
            mn=min(nums[i],mn);
            q.push(nums[i]);
        }
        while(q.top()%2==0){
            res=min(res,q.top()-mn);
            q.push(q.top()/2);
            mn=min(q.top()/2,mn);
            q.pop();
        }
   return res=min(res,q.top()-mn);     
        
        
        
    }
};