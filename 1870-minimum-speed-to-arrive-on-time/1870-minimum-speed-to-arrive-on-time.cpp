class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        long long left=1,right=1e7;
        double ans=-1;
        while(left<=right){
            long long mid=(left+right)/2;
            double cnt=0;
            for(int i:dist){
                cnt=ceil(cnt);
                cnt+=(double)i/mid;
            }
            if(cnt<=hour)right=mid-1;
            else left=mid+1;
        }
        return left>1e7?-1:left;
    }
};