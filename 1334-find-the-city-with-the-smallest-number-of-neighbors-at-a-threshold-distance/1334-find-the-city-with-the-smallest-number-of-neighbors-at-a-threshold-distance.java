class Solution {
    public int findTheCity(int n, int[][] edges, int distanceThreshold) {
        
        int INF=1_000_000;
        
        int [][]mat=new int[n][n];
        for(int []i:mat)
            Arrays.fill(i,INF);
        
        for(int i=0;i<n;i++)mat[i][i]=0;
        
        for(int i=0;i<edges.length;i++){
            mat[edges[i][0]][edges[i][1]]=mat[edges[i][1]][edges[i][0]]=edges[i][2];
        }
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mat[i][j]=Math.min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
        
        int ans=n,reachables=n;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]<=distanceThreshold)cnt++;
            }
            if(cnt<=reachables){
                reachables=cnt;
                ans=i;
            }
        }
        return ans;
    }
}