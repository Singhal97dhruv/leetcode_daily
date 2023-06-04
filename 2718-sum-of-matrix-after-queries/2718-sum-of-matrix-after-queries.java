class Solution {
    public long matrixSumQueries(int n, int[][] q) {
     
        long ans=0;
        boolean []cols=new boolean[n];
        boolean []rows=new boolean[n];
        
        Arrays.fill(cols,true);
        Arrays.fill(rows,true);
    
        int row=n,col=n;
        
        for(int i=q.length-1;i>=0;i--){
            if(q[i][0]==0 && rows[q[i][1]]==true)
            {
                rows[q[i][1]]=false;
                ans+=q[i][2]*col;
                row--;
            }
            else if(q[i][0]==1 && cols[q[i][1]]==true)
            {
                cols[q[i][1]]=false;
                ans+=q[i][2]*row;
                col--;
            }
        }
    
        return ans;
    
    }
}