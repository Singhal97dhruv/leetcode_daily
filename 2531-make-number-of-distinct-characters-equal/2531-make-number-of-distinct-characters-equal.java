class Solution {
    
    public void insertAndRemove(Map<Character,Integer>map,char ins,char del){
        map.put(ins,map.getOrDefault(ins,0)+1);
                map.put(del,map.getOrDefault(del,0)-1);
        if(map.get(del)==0)map.remove(del);
    }
    
    public boolean isItPossible(String word1, String word2) {
        
        Map<Character,Integer>m1=new HashMap<>();
        Map<Character,Integer>m2=new HashMap<>();

        for(char c:word1.toCharArray()){
            m1.put(c,m1.getOrDefault(c,0)+1);
        }
        for(char c:word2.toCharArray()){
            m2.put(c,m2.getOrDefault(c,0)+1);
        }
        for(char c1='a';c1<='z';c1++){
            for(char c2='a';c2<='z';c2++){
                if(!m1.containsKey(c1) || !m2.containsKey(c2))continue;
                
                insertAndRemove(m1,c2,c1);
                insertAndRemove(m2,c1,c2);
                if(m1.size()==m2.size())return true;
                insertAndRemove(m1,c1,c2);
                insertAndRemove(m2,c2,c1);
                
            }
        }
        return false;
    }
}