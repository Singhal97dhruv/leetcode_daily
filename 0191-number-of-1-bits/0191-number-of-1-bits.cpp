class Solution {
public:
    int hammingWeight(uint32_t n) {
//         int mask=0,count=0;
//         while(n){
//         // count+=n&1;
//             // n>>=1;
//           n=n&(n-1);
//             count++;
            
//         }
//         return count;
        
//         int cnt=0;
//         while(n){
//             n=n&(n-1);
//             cnt++;
//         }
//         return cnt;
        
        int cnt=0;
        while(n){
            cnt+=n&1;
            n>>=1;
        }
        return cnt;
    }
};