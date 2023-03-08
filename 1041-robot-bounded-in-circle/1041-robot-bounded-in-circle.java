class Solution {
    public boolean isRobotBounded(String instructions) {
        int []offset=new int[]{0,1,0,-1,0};
        int dirn=0,x=0,y=0;
        for(char ch:instructions.toCharArray()){
            if(ch=='L')
                dirn=(dirn-1+4)%4;
            else if(ch=='R')
                dirn=(dirn+1)%4;
            else{
                x=x+offset[dirn];
                y=y+offset[dirn+1];
            }
                
        }
        return x==0&&y==0||dirn!=0;
    }
}