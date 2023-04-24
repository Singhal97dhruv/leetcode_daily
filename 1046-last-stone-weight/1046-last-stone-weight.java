class Solution {
    public int lastStoneWeight(int[] stones) {
     // PriorityQueue<Integer>pq=new PriorityQueue<Integer>();
         PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        for(int i:stones){
            pq.offer(i);
        }
        while(pq.size()>1){
            int x=pq.poll();
            int y=pq.poll();
            if(x>y)pq.offer(x-y);
        }
        if(pq.size()==0)return 0;
        return pq.poll();
    }
}