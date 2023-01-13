class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        
        map<pair<int,int>,int>map;
        long long res=0;
        for(int i=0;i<rectangles.size();i++){
            int gcd=__gcd(rectangles[i][0],rectangles[i][1]);
            pair<int,int>pi={rectangles[i][0]/gcd,rectangles[i][1]/gcd};
            if(map.find(pi)!=map.end())res+=map[pi];
            map[pi]++;
        }
        return res;
        
    }
};