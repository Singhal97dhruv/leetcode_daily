class Solution {
    
    
    public boolean wordBreak(String s, List<String> wordDict) {
        
        Set<String>set=new HashSet<>(wordDict);
        int n=s.length();
        boolean []chars=new boolean[n+1];
        chars[n]=true;
        for(int i=n-1;i>=0;i--){
            for(String str:set){
                if(i+str.length()<=n && s.substring(i,i+str.length()).equals(str))
                    chars[i]=chars[i+str.length()];
                if(chars[i])break;
            }
        }
        return chars[0];
    }
}