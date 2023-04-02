class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        int n=spells.length;
        Arrays.sort(potions);
        int[] res=new int[n];
        for(int i=0;i<n;i++){
            int left=0,right=potions.length;
            while(left<right){
                int mid=left+(right-left)/2;
                if((long)potions[mid]*spells[i]>=success)right=mid;
                else left=mid+1;
            }
            res[i]=potions.length-left;
        }
        return res;
        
    }
}