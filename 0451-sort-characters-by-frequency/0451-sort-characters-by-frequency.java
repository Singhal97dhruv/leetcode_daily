class Solution {
    public String frequencySort(String s) {
        Map<Character,Integer>map=new HashMap<>();
        for(char c:s.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }
        
        PriorityQueue<Character>pq=new PriorityQueue<>((a,b)->map.get(b)-map.get(a));
        
        for(char c:map.keySet()){
            pq.add(c);
        }
        String st="";
        while(pq.size()!=0){
            char c=pq.poll();
            for(int j=0;j<map.get(c);j++){
                st+=c;
            }
        }
        return st;
    }
}