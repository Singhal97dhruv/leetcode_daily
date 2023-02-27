class Solution {
    public int minSpeedOnTime(int[] dist, double hour) {
        int left=1,right=10000001;
        while(left<right){
            int mid=left+(right-left)/2;
            double cnt=0;
            for(int i:dist){
                cnt=Math.ceil(cnt);
                cnt+=(double)i/mid;
            }
            if(cnt<=hour)right=mid;
            else left=mid+1;
        }
        return left>=10000001?-1:left;
    }
}