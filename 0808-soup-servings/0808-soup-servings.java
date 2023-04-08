class Solution {
    
    int[][]offset={{100,0},{75,25},{50,50},{25,75}};
    Double [][]d;
    public double memo(int A,int B){
        if(A<=0 && B>0)return 1.0;
        else if(A<=0 && B<=0)return 0.5;
        else if(B<=0)return 0.0;
        if(d[A][B]!=null)return d[A][B];
        double res=0;
        for(int i=0;i<4;i++){
            res+=memo(A-offset[i][0],B-offset[i][1]);
            
        }
        return d[A][B]=0.25*res;
    }
    
    public double soupServings(int n) {
        if(n>=4800)return 1.0;
        d=new Double[n+1][n+1];
        return memo(n,n);
    }
}