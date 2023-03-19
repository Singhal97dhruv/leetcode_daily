class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        int[][]offset={{0,1},{1,0},{0,-1},{-1,0}};
        int res=0,x=0,y=0,k=0;
        Set<String>set=new HashSet<>();
        for(int[]s:obstacles){
            set.add(s[0]+"#"+s[1]);
        }
        
        for(int i:commands){
            if(i==-1)k=(k+1)%4;
            else if(i==-2)k=(k-1+4)%4;
            else{
                for(int j=0;j<i;j++){
                if(set.contains((x+offset[k][0])+"#"+(y+offset[k][1])))break;
                x+=offset[k][0];
                y+=offset[k][1];
                }
                 res=Math.max(res,x*x + y*y);
            }
        }
        return res;
        
    }
}