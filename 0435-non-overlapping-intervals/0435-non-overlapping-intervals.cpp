bool cmp(vector<int>&a,vector<int>&b){return a[1]<b[1];}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int cnt=0,high=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<high){
                cnt++;
            }
            else
            high=intervals[i][1];
        }
        return cnt;
    }
};