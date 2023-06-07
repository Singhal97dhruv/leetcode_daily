class Solution {
    public int minFlips(int a, int b, int c) {
          int flipsReq=0;
        
        while(a>0 || b>0 || c>0){
            int A=a&1;
            int B=b&1;
            int C=c&1;

            a>>=1;b>>=1;c>>=1;
            if((A | B)==C)continue;
            else if(C==1)flipsReq++;
            else if(C==0 && A==1 && B==1)flipsReq+=2;
            else flipsReq++;
        }
        return flipsReq;
    }
}