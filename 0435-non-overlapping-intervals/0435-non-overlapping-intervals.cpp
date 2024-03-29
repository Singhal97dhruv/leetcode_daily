// bool cmp(vector<int>&a,vector<int>&b){return a[1]<b[1];}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort(intervals.begin(),intervals.end(),cmp);
        // int cnt=0,high=intervals[0][1];
        // for(int i=1;i<intervals.size();i++){
        //     if(intervals[i][0]<high){
        //         cnt++;
        //     }
        //     else
        //     high=intervals[i][1];
        // }
        // return cnt;
        
       
        
        int res=0;
        
        // sort(intervals.begin(),intervals.end(),[&](vector<int>x,vector<int>y){return x[1]<y[1];});
        // sort(intervals.begin(),intervals.end(),cmp);
        // int high=intervals[0][1];
        // for(int i=1;i<intervals.size();i++){
        //     if(intervals[i][0]<high)res++;
        //     else{
        //         high=intervals[i][1];
        //     }
        // }
        // return res;
        
        sort(intervals.begin(),intervals.end(),[](vector<int>&v1,vector<int>&v2){
            return v1[1]<v2[1];
        });
            
        int high= intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<high)res++;
            else high= intervals[i][1];
        }
        return res;
    }
};