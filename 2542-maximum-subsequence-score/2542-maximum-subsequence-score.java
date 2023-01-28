class Solution {
    public long maxScore(int[] nums1, int[] nums2, int k) {
        
        int n=nums1.length;
        int [][]vect=new int[n][2];
        for(int i=0;i<nums1.length;i++){
            vect[i]=new int[]{nums2[i],nums1[i]};
        }
        Arrays.sort(vect,(a,b)->b[0]-a[0]);
        PriorityQueue<Integer>pq=new PriorityQueue<>(k,(a,b)->a-b);
        long res=0,sumS=0;
        for(int[]s:vect){
            pq.add(s[1]);
            sumS+=s[1];
            if(pq.size()>k)sumS-=pq.poll();
            if(pq.size()==k)res=Math.max(res,sumS*s[0]);
            
        }
        return res;
        
    }
}