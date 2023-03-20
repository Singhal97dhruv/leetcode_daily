class Solution {
    public int[] avoidFlood(int[] rains) {
        Map<Integer,Integer>fullLakes=new HashMap<>();
        TreeSet<Integer>dry=new TreeSet<>();
        int []res=new int[rains.length];
        for(int i=0;i<rains.length;i++){
            if(rains[i]==0){
                dry.add(i);
                res[i]=1;
            }
            else{
                int lake=rains[i];
                if(fullLakes.containsKey(lake)){
                    Integer it=dry.ceiling(fullLakes.get(lake));
                    if(it==null)return new int[0];
                    res[it]=lake;
                    dry.remove(it);
                }
                res[i]=-1;
                fullLakes.put(lake,i);
            }
        }
        return res;
    }
}