class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
//       sort(intervals.begin(),intervals.end());
//         vector<vector<int>>res;
//         res.push_back(intervals[0]);
//         for(int i=1;i<intervals.size();i++){
//             if(res.back()[1]<intervals[i][0])res.push_back(intervals[i]);
//             else {
//                 res.back()[1]=max(intervals[i][1],res.back()[1]);
//             }
//         }
//         return res;
        
        
       // sort(intervals.begin(),intervals.end());
        
//         vector<vector<int>>res;
//         res.push_back(intervals[0]);
//         for(int i=1;i<intervals.size();i++){
//             if(res.back()[1]<intervals[i][0]){
//                 res.push_back(intervals[i]);
//             }
//             else{
//                 res.back()[1]=max(intervals[i][1],res.back()[1]);
//             }
//         }
//         return res;
    vector<vector<int>>res;
    sort(intervals.begin(),intervals.end());
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>res.back()[1]){
                res.push_back(intervals[i]);
            }
            else{
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
        }
    return res;
    }
    
};