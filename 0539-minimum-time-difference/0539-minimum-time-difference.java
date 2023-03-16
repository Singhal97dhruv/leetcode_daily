class Solution {
    public int findMinDifference(List<String> timePoints) {
        boolean[] bo=new boolean[1440];
        for(String s:timePoints){
            String[] t=s.split(":");
            int h=Integer.parseInt(t[0]);
            int m=Integer.parseInt(t[1]);
            if(bo[h*60+m])return 0;
            bo[h*60+m]=true;
        }
        int mnMins=Integer.MAX_VALUE,prev=Integer.MAX_VALUE,last=Integer.MIN_VALUE,ptr=0;
        for(int i=0;i<1440;i++){
            if(bo[i]){
                if(prev!=Integer.MAX_VALUE){
                    mnMins=Math.min(mnMins,i-ptr);
                }
                prev=Math.min(prev,i);
                last=Math.max(last,i);
                ptr=i;
            }
        }
        mnMins=Math.min(mnMins,1440-(last-prev));
        return mnMins;
    }
}