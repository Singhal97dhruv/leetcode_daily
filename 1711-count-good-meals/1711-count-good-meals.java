class Solution {
    public int countPairs(int[] deliciousness) {
        HashMap<Integer,Integer>map=new HashMap<>();
        long res=0;
        int mod=1000000007;
        for(int i:deliciousness){
            for(int j=1;j<=(1<<22);j*=2){
                if(map.containsKey(j-i)){
                    res+=map.get(j-i);
                    res%=mod;
                }
            }
                map.put(i,map.getOrDefault(i,0)+1);
            
        }
        return (int)res;
    }
}