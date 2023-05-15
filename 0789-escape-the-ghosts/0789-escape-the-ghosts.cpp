class Solution {
    public boolean escapeGhosts(int[][] ghosts, int[] target) {
        
        int distFromMe= Math.abs(target[0])+Math.abs(target[1]);
        
        for(int []i:ghosts){
            if(distFromMe>=Math.abs(i[0]-target[0])+Math.abs(i[1]-target[1]))return false;
        }
        return true;
    }
}