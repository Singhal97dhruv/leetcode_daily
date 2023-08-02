class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // int n=nums.size(),Xor=0;
    //     for(int i=0;i<n;i++){
    //         Xor^=nums[i];
    //         Xor^=i;
    //     }
    //     Xor^=n;
    //     return Xor;
    
        
        int Xor=0;
        for(int i=0;i<nums.size();i++){
            Xor=Xor^i^nums[i];
        }
        Xor^=nums.size();
        return Xor;
        
    }
};