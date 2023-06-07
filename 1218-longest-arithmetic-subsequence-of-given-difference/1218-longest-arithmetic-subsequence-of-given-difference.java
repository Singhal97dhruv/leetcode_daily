class Solution {
    public int longestSubsequence(int[] arr, int difference) {
        
        Map<Integer,Integer>map=new HashMap<>();
        int ans=1;
        for(int i:arr){
            map.put(i,map.getOrDefault(i-difference,0)+1);
            ans=Math.max(ans,map.get(i));
        }
        return ans;
    }
}