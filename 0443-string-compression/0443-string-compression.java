class Solution {
    public int compress(char[] chars) {
        int i=0,j=0,n=chars.length;
        while(i<n){
            int ans=1;
            while(i<n-1 && chars[i]==chars[i+1]){
                i++;
                ans++;
            }
            chars[j++]=chars[i++];
            if(ans>1){
                for(char c:Integer.toString(ans).toCharArray()){
                    chars[j++]=c;
                }
            }
        }
        return j;
    }
}