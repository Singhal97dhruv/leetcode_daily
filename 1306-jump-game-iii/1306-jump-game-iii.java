class Solution {
    public boolean canReach(int[] arr, int start) {
        
        Queue<Integer>q=new LinkedList<>();
        
        q.add(start);
        while(!q.isEmpty()){
            int top=q.poll();
            
            if(arr[top]==-1)continue;
            
            if(arr[top]==0)return true;
            
            int leftIdx=top-arr[top];
            if(leftIdx>=0)q.add(leftIdx);
            int rightIdx=top+arr[top];
            if(rightIdx<arr.length)q.add(rightIdx);
            
            arr[top]=-1;
            
        }
        return false;
        
    }
}