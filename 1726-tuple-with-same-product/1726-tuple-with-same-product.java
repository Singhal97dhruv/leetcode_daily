class Solution {
    public int tupleSameProduct(int[] nums) {
        HashMap<Integer,Integer>map=new HashMap<>();
        int res=0,n=nums.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prod=nums[i]*nums[j];
                res+=8*map.getOrDefault(prod,0);
                map.put(prod,map.getOrDefault(prod,0)+1);
            }
        }
        return res;
    }
}