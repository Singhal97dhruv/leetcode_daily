class Solution {
    public int maxPerformance(int n, int[] speed, int[] efficiency, int k) {
        int [][]vect=new int[n][2];
        for(int i=0;i<n;i++){
            vect[i]=new int[]{efficiency[i],speed[i]};
        }
        Arrays.sort(vect,(a,b)->b[0]-a[0]);
        PriorityQueue<Integer>pq=new PriorityQueue<>(k,(a,b)->a-b);
        long res=0,sum=0;
        for(int[]es:vect){
            pq.add(es[1]);
            sum+=es[1];
            if(pq.size()>k)sum-=pq.poll();
            res=Math.max(res,es[0]*sum);
            
        }
        return (int)(res%(long)(1e9+7));
        
        
    }
}