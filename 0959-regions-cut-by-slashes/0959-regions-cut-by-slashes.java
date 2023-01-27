class Solution {
    
    int dfs(int [][]g,int i,int j){
        if(Math.min(i,j)<0 || Math.max(i,j)>=g.length||g[i][j]!=0)return 0;
        g[i][j]=1;
        return 1+dfs(g,i+1,j)+dfs(g,i,j+1)+dfs(g,i,j-1)+dfs(g,i-1,j);
    }
    
    public int regionsBySlashes(String[] grid) {
        
        int n=grid.length,cnt=0;
        int [][]v=new int[n*3][n*3];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i].charAt(j)=='/'){
                    v[i*3][j*3+2]=v[i*3+1][j*3+1]=v[i*3+2][j*3]=1;
                }
                else if(grid[i].charAt(j)=='\\'){
                    v[i*3][j*3]=v[i*3+1][j*3+1]=v[i*3+2][j*3+2]=1;
                }
            }
        }
        for(int i=0;i<n*3;i++){
            for(int j=0;j<n*3;j++){
                cnt+=dfs(v,i,j)>0?1:0;
            }
        }
        return cnt;
    }
}