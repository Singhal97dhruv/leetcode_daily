class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if((k%2==0)||(k%5==0))return -1;
        int r=0;
        for(int i=0;i<k;i++){
            if((r=(r*10+1)%k)==0)return i+1;
        }
        return -1;
    }
};