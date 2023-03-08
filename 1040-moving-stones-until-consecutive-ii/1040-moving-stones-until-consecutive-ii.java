class Solution {
    public int[] numMovesStonesII(int[] stones) {
        int n=stones.length,low=n;
        Arrays.sort(stones);
        for(int i=0,j=0;j<n;j++){
            while(stones[j]-stones[i]+1>n)i++;
            int stored=j-i+1;
            if(stored==n-1 && stones[j]-stones[i]+1==n-1){
                low=Math.min(low,2);
            }
            else{
                low=Math.min(low,n-stored);
            }
        }
            return new int[]{low,Math.max(stones[n-1]-stones[1]-n+2,stones[n-2]-stones[0]-n+2)};
        
    }
}