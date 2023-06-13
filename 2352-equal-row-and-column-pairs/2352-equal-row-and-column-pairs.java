class Solution {
    public int equalPairs(int[][] grid) {
         int res = 0, n = grid.length;
    HashMap<ArrayList<Integer>, Integer> x = new HashMap<>();
	HashMap<ArrayList<Integer>, Integer> y = new HashMap<>();
	
    for(int i=0; i<n; i++){
        ArrayList<Integer> temp1=new ArrayList<>();
        ArrayList<Integer> temp2=new ArrayList<>();
        for(int j=0; j<n; j++){
            temp1.add(grid[i][j]);
            temp2.add(grid[j][i]);
        }
        
        x.put(temp1,x.getOrDefault(temp1, 0)+1);
        y.put(temp2, y.getOrDefault(temp2, 0)+1);
       
    }
 for(ArrayList i: x.keySet())
        if(y.containsKey(i))
            res += x.get(i)*y.get(i);
    return res;
    }
}