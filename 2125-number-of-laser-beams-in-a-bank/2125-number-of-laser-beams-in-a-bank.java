class Solution {
    public int numberOfBeams(String[] bank) {
        int res=0,temp=0;
        for(String s:bank){
            int cnt=0;
            for(char c:s.toCharArray()){
                if(c=='1')cnt++;
            }
            if(cnt>0){
                res+=(temp*cnt);
                temp=cnt;
            }
        }
        return res;
    }
}