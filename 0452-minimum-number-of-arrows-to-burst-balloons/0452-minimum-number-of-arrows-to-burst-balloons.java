class Solution {
    public int findMinArrowShots(int[][] points) {
        
        // Arrays.sort(points,(a,b)->Integer.compare(a[1]-b[1]));
        Arrays.sort(points,(a,b)->Integer.compare(a[1],b[1]));
        int start=points[0][1];
        int cnt=1;
        for(int i=0;i<points.length;i++){
            if(points[i][0]<=start)continue;
            start=points[i][1];
            cnt++;
        }
        return cnt;
        
    }
}