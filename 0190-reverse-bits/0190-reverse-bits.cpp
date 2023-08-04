class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        // uint32_t ans=0;
        // for(int i=1;i<=32;i++){
        //     ans<<=1;
        //     ans=ans|(n&1);
        //     // ans<<=1;
        //     n>>=1;
        // }
        // return ans;
        
        uint32_t ans=0;
        for(int i=1;i<=32;i++){
            ans<<=1;
            ans=ans|(n&1);
            n>>=1;
        }
        return ans;
    }
};