 bool cmp(vector<int>&a,vector<int>&b ){return a[1]<b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int cnt=0,high=0;
        sort(points.begin(),points.end(),cmp);
        for(int i=0;i<points.size();i++){
            if(cnt==0||points[i][0]>high ){
                cnt++;
                high=points[i][1];
            }
        }
        return cnt;
    }
};