class Solution {
    public int minNumberOfFrogs(String croakOfFrogs) {
       
        int []arr=new int[5];
        int frog=0,total=0;
        for(char ch:croakOfFrogs.toCharArray()){
            
            int n="croak".indexOf(ch);
            arr[n]++;
            if(n==0){
                total=Math.max(total,++frog);
                
            }
            else if(--arr[n-1]<0)return -1;
            else if(n==4)frog--;
            
        }
        return frog==0?total:-1;
        
    }
}