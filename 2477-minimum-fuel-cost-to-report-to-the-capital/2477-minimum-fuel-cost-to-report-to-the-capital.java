class Solution {
    long res=0;int sts;
    public long dfs(int st,int prev,List<List<Integer>>g){
        int p=1;
        for(int i:g.get(st)){
            if(i==prev)continue;
            p+=dfs(i,st,g);
        }
        if(st!=0)res+=(p+sts-1)/sts;
        return p;
    }
    public long minimumFuelCost(int[][] roads, int seats) {
        sts=seats;
        List<List<Integer>>g=new ArrayList();
        for(int i=0;i<=roads.length;i++)g.add(new ArrayList());
        for(int[]r: roads){
            g.get(r[0]).add(r[1]);
            g.get(r[1]).add(r[0]);
        }
        dfs(0,0,g);
        return res;
    }
}