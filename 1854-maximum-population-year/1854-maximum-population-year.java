class Solution {
    public int maximumPopulation(int[][] logs) {
        Map<Integer,Integer>map=new TreeMap<>();
        for(int[]i:logs){
            map.put(i[0],map.getOrDefault(i[0],0)+1);
            map.put(i[1],map.getOrDefault(i[1],0)-1);
        }
        int year=1950,pop=0,tpop=0;
        for(Map.Entry<Integer,Integer>i:map.entrySet()){
            pop+=i.getValue();
            if(tpop<pop){
                year=i.getKey();
                tpop=pop;
            }
        }
        return year;
    }
}