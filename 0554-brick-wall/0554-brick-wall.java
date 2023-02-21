class Solution {
    public int leastBricks(List<List<Integer>> wall) {
        Map<Integer,Integer>map=new HashMap<>();
        int mx=0;
        for(List<Integer>l:wall){
            int curr=0;
            for(int j=0;j<l.size()-1;j++){
                curr+=l.get(j);
                map.put(curr,map.getOrDefault(curr,0)+1);
                mx=Math.max(mx,map.get(curr));
            }
            
        }
        return wall.size()-mx;
    }
}