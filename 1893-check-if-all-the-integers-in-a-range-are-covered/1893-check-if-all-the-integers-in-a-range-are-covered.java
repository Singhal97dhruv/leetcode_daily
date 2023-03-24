class Solution {
    public boolean isCovered(int[][] ranges, int left, int right) {
        int []seen=new int[52];
        for(int []i:ranges){
            seen[i[0]]+=1;
            seen[i[1]+1]-=1;
        }
        int cnt=0;
        for(int i=1;i<=right;i++){
            cnt+=seen[i];
            if(i>=left && cnt==0)return false;
        }
        return true;
    }
}