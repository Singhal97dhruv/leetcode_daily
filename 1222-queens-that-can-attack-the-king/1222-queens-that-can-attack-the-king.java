class Solution {
    public List<List<Integer>> queensAttacktheKing(int[][] queens, int[] king) {
        boolean [][]b=new boolean[8][8];
        for(int i=0;i<queens.length;i++)b[queens[i][0]][queens[i][1]]=true;
        List<List<Integer>>l=new ArrayList<>();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(i==0 && j==0)continue;
                int x=king[0]+i,y=king[1]+j;
                while(Math.min(x,y)>=0 && Math.max(x,y)<8){
                    if(b[x][y]==true){
                        l.add(Arrays.asList(x,y));
                        break;
                    }
                    x+=i;y+=j;
                }
            }
        }
        return l;
    }
}