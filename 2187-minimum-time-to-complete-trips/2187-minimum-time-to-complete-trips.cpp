class Solution {
public:
    bool feasible(vector<int>&t,int trips,long long m){
        long long cnt=0;
        for(auto i:t){
            cnt+=(m/i);
        }
        return cnt>=trips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left=1,right=1e14;
        while(left<right){
            long long mid=left+(right-left)/2;
            if(feasible(time,totalTrips,mid))right=mid;
            else left=mid+1;
        }
        return left;
    }
};