class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int absX=abs(sx-fx);
        int absY=abs(sy-fy);
        if(!absX && !absY && t==1)return false;
        return max(absX,absY)<=t;
    }
};