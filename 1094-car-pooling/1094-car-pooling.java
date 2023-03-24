class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        Map<Integer,Integer>map=new TreeMap<>();
        int cap=0;
        for(int[] i:trips){
            map.put(i[1],map.getOrDefault(i[1],0)+i[0]);
            map.put(i[2],map.getOrDefault(i[2],0)-i[0]);
        }
        for(int i:map.values()){
            cap+=i;
            if(cap>capacity)return false;
        }
        return true;
    }
}