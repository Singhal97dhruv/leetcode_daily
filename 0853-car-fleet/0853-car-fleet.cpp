class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int fleet=0;
        
        vector<pair<int,double>>intervals;
        for(int i=0;i<position.size();i++){
            intervals.push_back({position[i],(double)(target-position[i])/speed[i]});
        }
        sort(intervals.begin(),intervals.end());
        
        int n=intervals.size();
        pair<int,double>p=intervals[n-1];
        for(int i=n-2;i>=0;i--){
            if(intervals[i].second>p.second){
                p=intervals[i];fleet++;
            }
        }
        
        return fleet+1;
        
        
    }
};