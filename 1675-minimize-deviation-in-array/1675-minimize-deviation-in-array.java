class Solution {
    public int minimumDeviation(int[] nums) {
        int mn=Integer.MAX_VALUE,res=Integer.MAX_VALUE;
        PriorityQueue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int i:nums){
            if(i%2!=0)i*=2;
            pq.add(i);
            mn=Math.min(mn,i);
        }
        while(pq.peek()%2==0){
            int temp=pq.poll();
            res=Math.min(res,temp-mn);
            pq.add(temp/2);
            mn=Math.min(mn,temp/2);
        }
        return Math.min(res,pq.peek()-mn);
    }
}