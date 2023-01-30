class Solution {
    public int eatenApples(int[] apples, int[] days) {
        
        int cnt=0,i=0,n=apples.length;
        PriorityQueue<int[]>pq=new PriorityQueue<>((a,b)->a[0]-b[0]);
        
        while(i<n || !pq.isEmpty()){
            if(i<n && apples[i]!=0)pq.add(new int[]{i+days[i],apples[i]});
            
            while(!pq.isEmpty() && pq.peek()[0]<i+1)pq.poll();
            
            if(!pq.isEmpty()){
                if(pq.peek()[1]>1)pq.peek()[1]--;
                else pq.poll();
                cnt++;
            }
            i++;
        }
        return cnt;
    }
}