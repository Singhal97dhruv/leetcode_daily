class Solution {
    public boolean feasible(int[] time,int trips,long m){
        long cnt=0;
        for(long i:time){
            cnt+=m/i;
        }
        return cnt>=trips;
    }
    public long minimumTime(int[] time, int totalTrips) {
        long left=0,right=100000000000000L;
        while(left<right){
            long mid=left+(right-left)/2;
            if(feasible(time,totalTrips,mid)==true)right=mid;
            else left=mid+1;
        }
        return left;
    }
}