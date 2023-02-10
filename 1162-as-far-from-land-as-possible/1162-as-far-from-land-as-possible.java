class Solution {
    int []dirn=new int[]{0,-1,0,1,0};
    public int maxDistance(int[][] grid) {
        if(grid==null || grid.length==0 || grid[0].length==0)return -1;
        Queue<int[]>q=new ArrayDeque<>();
        boolean visited[][]=new boolean[grid.length][grid[0].length];
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==1){
                    q.offer(new int[]{i,j});
                    visited[i][j]=true;
                }
            }
        }
        if(q.size()==grid.length*grid[0].length)return -1;
        int dist=0;
        while(!q.isEmpty()){
            dist++;
            int n=q.size();
            for(int i=0;i<n;i++){
                int[] st=q.poll();
                for(int j=0;j<4;j++){
                    int nr=st[0]+dirn[j];
                    int nc=st[1]+dirn[j+1];
                    if(nr<0 || nc<0 || nr>=grid.length || nc>=grid[0].length || grid[nr][nc]==1)continue;
                    grid[nr][nc]=1;
                    q.offer(new int[]{nr,nc});
                }
            }
        }
        return dist-1;
    }
}