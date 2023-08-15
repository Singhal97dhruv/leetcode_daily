class Solution {
public:
    
    int sumSqrDigits(int n){
        int ans=0;
        while(n!=0){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    
    
    bool isHappy(int n) {
        
        int slow=sumSqrDigits(n);
        int fast=sumSqrDigits(sumSqrDigits(n));
        while(slow!=fast){
            slow=sumSqrDigits(slow);
            fast=sumSqrDigits(sumSqrDigits(fast));
        }
        return fast==1;
    }
};