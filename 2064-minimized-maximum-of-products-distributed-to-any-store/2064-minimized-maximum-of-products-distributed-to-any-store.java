class Solution {
    public int minimizedMaximum(int n, int[] quantities) {
        int left=1,right=100000;
        while(left<=right){
            int mid=left+(right-left)/2;
            int cnt=0;
            for(int i:quantities)cnt+=(i+mid-1)/mid;
            if(cnt>n)left=mid+1;
            else right=mid-1;
        }
        return left;
    }
}