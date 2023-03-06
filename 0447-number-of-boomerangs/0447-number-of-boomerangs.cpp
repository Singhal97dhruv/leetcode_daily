class Solution {
public:
    int distance(int x,int y){
        return x*x + y*y;
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res=0;
        for(int i=0;i<points.size();i++){
            unordered_map<int,int>map;
            for(int j=0;j<points.size();j++){
                if(i==j)continue;
                int d=distance(points[i][0]-points[j][0],points[i][1]-points[j][1]);
                map[d]++;
            }
            for( auto j:map){
                res+=(j.second)*(j.second-1);
            }
            
        }
        return res;
    }
};