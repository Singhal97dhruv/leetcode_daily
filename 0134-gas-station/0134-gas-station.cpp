class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//        int n = gas.size();
//         int total_surplus = 0;
//         int surplus = 0;
//         int start = 0;
        
//         for(int i = 0; i < n; i++){
//             total_surplus += gas[i] - cost[i];
//             surplus += gas[i] - cost[i];
//             if(surplus < 0){
//                 surplus = 0;
//                 start = i + 1;
//             }
//         }
//         return (total_surplus < 0) ? -1 : start;
        
        
        int n=gas.size();
        int totalSurplus=0,surPlus=0,start=0;
        for(int i=0;i<n;i++){
            totalSurplus+=gas[i]-cost[i];
            surPlus+=gas[i]-cost[i];
            if(surPlus<0){
                surPlus=0;
                start=i+1;
            }
        }
        return totalSurplus>=0?start:-1;
    }
};