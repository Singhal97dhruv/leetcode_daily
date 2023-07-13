class Solution {
public:
    double myPow(double x, int n) {
        
        if(n<0)x=1/x;
        long nums=labs(n);
        double ans=1;
        while(nums){
          
            if(nums&1)
                ans*=x;
            
            x*=x;
            nums>>=1;
            
        }
        return ans;
    }
};