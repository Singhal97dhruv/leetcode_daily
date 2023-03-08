class Solution {
    public boolean isFeasible(int[] piles,int mid,int h){
        int cnt=0;
        for(int i:piles){
            cnt+=i/mid;
            if(i%mid!=0)cnt++;
        }
        return cnt<=h;
   }
    public int minEatingSpeed(int[] piles, int h) {
        int left=1,right=1000000000;
        while(left<right){
            int mid=left+(right-left)/2;
            if(isFeasible(piles,mid,h))right=mid;
            else left=mid+1;
        }
        return left;
    }
}