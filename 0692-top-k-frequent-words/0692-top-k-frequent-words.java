class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        Map<String,Integer>map=new HashMap<>();
        for(String s:words){
            map.put(s,map.getOrDefault(s,0)+1);
        }
        PriorityQueue<String>pq=new PriorityQueue<>((a,b)-> map.get(a)==map.get(b)? a.compareTo(b) : map.get(b)-map.get(a));
        for(String i:map.keySet()){
            pq.add(i);
        }
        List<String>res=new ArrayList<>();
        for(int i=0;i<k;i++){
            res.add(pq.poll());
        }
        return res;
    }
}