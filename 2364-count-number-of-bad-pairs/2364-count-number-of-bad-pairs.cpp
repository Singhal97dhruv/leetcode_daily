class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        long long cnt=0,n=nums.size();
        n=n*(n-1)/2;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            
            if(map.find(i-nums[i])!=map.end())cnt+=(long long)map[i-nums[i]];
            map[i-nums[i]]++;
        }
        return (long long)n-cnt;
    }
};