class Solution {
public:
   
    long long maxSum(vector<int>& nums, int m, int k) {
        
        long long mx=0,sum=0;
        
        unordered_map<int,int>map;
        int i;
        for(i=0;i<k;i++){
            
            map[nums[i]]++;
            sum+=nums[i];
            
        }
        
        if(map.size()>=m){
            mx=sum;
        }
        
        for(int i=k;i<nums.size();i++){
            
            map[nums[i-k]]--;
            if(map[nums[i-k]]==0)map.erase(nums[i-k]);
            map[nums[i]]++;
            sum-=nums[i-k];
            sum+=nums[i];
            int n=map.size();
          
            if(n<m)continue;
            
            mx=max(sum,mx);
            
            
        }
        
       return mx; 
        
        
    }
};