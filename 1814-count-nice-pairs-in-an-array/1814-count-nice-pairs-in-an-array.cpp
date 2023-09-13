class Solution {
public:
    int mod=1e9+7;
    int revNum(int num){
        int res=0;
        while(num){
            res=res*10+num%10;
            num/=10;
        }
        return res;
    }
    
    int countNicePairs(vector<int>& nums) {
        
        unordered_map<int,int>map;
        int valid=0;
        for(int i=0;i<nums.size();i++){
            int rev=revNum(nums[i]);
            int key=nums[i]-rev;
            if(map.find(key)!=map.end()){
                valid=(valid+map[key])%mod;
            }
            map[key]++;
        }
        
        return valid%mod;
    }
};