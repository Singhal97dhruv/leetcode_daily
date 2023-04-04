class Solution {
    public int partitionString(String s) {
        
        int []arr=new int[26];Arrays.fill(arr,0);
        
        int lastIdx=0,cnt=0;
        for(int i=0;i<s.length();i++){
            if(arr[s.charAt(i)-'a']>=lastIdx){
                cnt++;
                lastIdx=i+1;
            }
            arr[s.charAt(i)-'a']=i+1;
        }
        
        return cnt;
    }
}