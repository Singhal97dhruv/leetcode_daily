class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>temp={a,b,c};
        sort(temp.begin(),temp.end());
        if(temp[2]-temp[0]==2)return {0,0};
        return {min(temp[1]-temp[0],temp[2]-temp[1])<=2?1:2,temp[2]-temp[0]-2};
    }
};