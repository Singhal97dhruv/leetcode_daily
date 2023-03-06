class Solution {
    int[] s;
    Random rnd;
    
    public Solution(int[] w) {
        for(int i=1;i<w.length;i++){
            w[i]+=w[i-1];
        }
        s=w;
        this.rnd=new Random();
    }
    
    public int pickIndex() {
        int n=s.length;
        int idx=rnd.nextInt(s[n-1])+1;
        int left=0,right=n-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(s[mid]==idx)return mid;
            if(s[mid]<idx)left=mid+1;
            else right=mid;
        }
        return left;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */