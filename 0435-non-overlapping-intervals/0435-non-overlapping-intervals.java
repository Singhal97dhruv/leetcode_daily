class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->a[1]-b[1]);
        int cnt=0,high=intervals[0][1];
        for(int i=1;i<intervals.length;i++){
            if(intervals[i][0]<high)cnt++;
            else{
                high=intervals[i][1];
            }
        }
        return cnt;
    }
}