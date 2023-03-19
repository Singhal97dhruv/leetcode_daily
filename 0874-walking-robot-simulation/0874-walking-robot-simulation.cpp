class Solution {
public:
    vector<pair<int,int>>offset={{0,1},{1,0},{0,-1},{-1,0}};
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>>set;
        for(vector<int>v:obstacles){
            set.insert({v[0],v[1]});
        }
        int k=0,x=0,y=0,res=0;
        for(int i:commands){
            if(i==-1)k=(k+1)%4;
            else if(i==-2)k=(k-1+4)%4;
            for(int j=1;j<=i;j++){
                if(set.find({x+offset[k].first,y+offset[k].second})!=set.end())break;
                x=x+offset[k].first;y=y+offset[k].second;
                
            }
            res=max(res,x*x + y*y);
        }
        return res;
        
    }
};