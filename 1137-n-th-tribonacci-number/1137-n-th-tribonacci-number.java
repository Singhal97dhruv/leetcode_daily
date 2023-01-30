class Solution {
    public int tribonacci(int n) {
        if(n==0)return 0;
        int i=0,j=1,k=1,m;
        while(n-->2){
            m=i+j+k;i=j;j=k;k=m;
        }
        return k;
    }
}