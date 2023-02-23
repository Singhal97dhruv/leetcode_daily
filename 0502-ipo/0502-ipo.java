class Solution {
    public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
        PriorityQueue<int[]>pq=new PriorityQueue<>((a,b)->(a[0]-b[0]));
        PriorityQueue<int[]>great=new PriorityQueue<>((a,b)->(b[1]-a[1]));
        for(int i=0;i<profits.length;i++){
            pq.add(new int[]{capital[i],profits[i]});
        }
        while(k-->0){
            if(!pq.isEmpty() && pq.peek()[0]<=w){
                while(!pq.isEmpty() && pq.peek()[0]<=w){
                    great.add(pq.poll());
                }
            }
            if(great.isEmpty())break;
            w+=great.poll()[1];
        }
        return w;
    }
}