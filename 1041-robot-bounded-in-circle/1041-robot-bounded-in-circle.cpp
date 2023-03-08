class Solution {
public:
    vector<int>offset={0,1,0,-1,0};
    bool isRobotBounded(string instructions) {
        int x=0,y=0,dirn=0;
        for(char c:instructions){
            if(c=='L'){
                dirn=(dirn-1+4)%4;
            }
            else if(c=='R')
                dirn=(dirn+1)%4;
            else{
                x=x+offset[dirn];
                y=y+offset[dirn+1];
            }
        }
        return x==0 && y==0|| dirn!=0;
    }
};