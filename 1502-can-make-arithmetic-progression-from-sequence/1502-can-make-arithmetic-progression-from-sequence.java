class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        Arrays.sort(arr);
        int d=arr[1]-arr[0];
        for(int i=0;i<arr.length-1;i++)if(d!=arr[i+1]-arr[i])return false;
        return true;
    }
}