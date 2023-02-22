class Solution {
    public boolean feasible(int cap,int[] wts,int D){
        int total=0,d=1;
        for(int i:wts){
            total+=i;
            if(total>cap){
                total=i;
                d++;
                if(d>D)return false;
            }
        }
        return true;
    }
    public int shipWithinDays(int[] weights, int days) {
        int right=0;
        for(int i:weights)right+=i;
        int left=0;
        for(int i:weights)left=i>left?i:left;
        while(left<right){
            int mid=left+(right-left)/2;
            if(feasible(mid,weights,days)==true)right=mid;
            else left=mid+1;
        }
        return left;
    }
}