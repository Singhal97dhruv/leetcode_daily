class Solution {
    public List<List<Long>> splitPainting(int[][] segments) {
        Map<Integer,Long>map=new TreeMap<>();
        for(int[]i:segments){
            map.put(i[0],map.getOrDefault(i[0],0L)+i[2]);
            map.put(i[1],map.getOrDefault(i[1],0L)-i[2]);

        }
        List<List<Long>>res=new ArrayList<>();
        long i=0,sum=0;
        for(int j:map.keySet()){
            if(sum>0){
                res.add(Arrays.asList(i,(long)j,sum));
            }
            sum+=map.get(j);
            i=j;   
        }
        return res;
    }
}