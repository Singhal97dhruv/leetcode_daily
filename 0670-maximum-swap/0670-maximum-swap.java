class Solution {
    public int maximumSwap(int num) {
        
       char []chars=Integer.toString(num).toCharArray();
        int mxIdx=chars.length-1;
        int li=-1,ri=-1;
        for(int i=chars.length-1;i>=0;i--){
            if(chars[i]==chars[mxIdx])continue;
            
            if(chars[i]-'0'>chars[mxIdx]-'0'){
                mxIdx=i;
            }
            else{
                li=i;
                ri=mxIdx;
            }
        }
        if(li!=-1)
        {
            char t=chars[li];
            chars[li]=chars[ri];
            chars[ri]=t;
        }
        return Integer.valueOf(new String(chars));
    }
}