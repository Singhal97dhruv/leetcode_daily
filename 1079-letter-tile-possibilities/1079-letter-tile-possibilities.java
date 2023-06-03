class Solution {
    
    public int dfs(int []arr){
        int sm=0;
        for(int i=0;i<26;i++){
            if(arr[i]==0)continue;
            arr[i]--;
            sm++;
            sm+=dfs(arr);
            arr[i]++;
        }
        return sm;
    }
    public int numTilePossibilities(String tiles) {
        int []arr=new int[26];
        for(char tile : tiles.toCharArray())arr[tile-'A']++;
        return dfs(arr);
    }
}