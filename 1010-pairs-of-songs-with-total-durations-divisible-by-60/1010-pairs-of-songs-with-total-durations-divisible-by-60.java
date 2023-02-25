class Solution {
    public int numPairsDivisibleBy60(int[] time) {
        HashMap<Integer,Integer>map=new HashMap<>();
        int cnt=0;
        for(int i:time){
            i=i%60;
            if(i==0)cnt+=map.getOrDefault(i,0);
            else{
                cnt+=map.getOrDefault(60-i,0);
            }
            map.put(i,map.getOrDefault(i,0)+1);
        }
        return cnt;
    }
}