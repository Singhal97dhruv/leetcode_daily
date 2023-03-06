class Solution {
    public int distance(int x,int y){
        return x*x + y*y;
    }
    public int numberOfBoomerangs(int[][] points) {
        Map<Integer,Integer>map=new HashMap<>();
        int res=0;
        for(int i=0;i<points.length;i++){
            for(int j=0;j<points.length;j++){
                if(i==j)continue;
                int d=distance(points[i][0]-points[j][0],points[i][1]-points[j][1]);
                map.put(d,map.getOrDefault(d,0)+1);
            }
            for(int n:map.values()){
                res+=(n)*(n-1);
            }
            map.clear();
        }
        return res;
    }
}