class Solution {
    public int largestAltitude(int[] gain) {
        int mx=Math.max(0,gain[0]);
        for(int i=0;i<gain.length-1;i++){
            gain[i+1]+=gain[i];

            mx=Math.max(mx,gain[i+1]);
        }
        return mx;
    }
}