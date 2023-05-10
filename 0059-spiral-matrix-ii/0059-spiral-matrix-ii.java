class Solution {
    public int[][] generateMatrix(int n) {
        int [][]res=new int[n][n];
        int top=0,left=0,bottom=n-1,right=n-1;
        
        int dirn=1,num=1;
        while(num<=n*n){
            if(dirn==1){
                for(int i=left;i<=right;i++){
                    res[top][i]=num++;
                }
                dirn=(dirn+1)%4;
                top++;
            }
            if(dirn==2){
                for(int i=top;i<=bottom;i++){
                    res[i][right]=num++;
                }
                right--;
                dirn=(dirn+1)%4;

            }
            if(dirn==3){
                for(int i=right;i>=left;i--){
                    res[bottom][i]=num++;
                }
                bottom--;
                dirn=(dirn+1)%4;
                
            }
            if(dirn==0){
                for(int i=bottom;i>=top;i--){
                    res[i][left]=num++;
                }
                left++;
                dirn=(dirn+1)%4;
                
            }
        }
        
        return res;
    }
}