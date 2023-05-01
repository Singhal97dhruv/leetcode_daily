class Solution {
    public double average(int[] salary) {
        int mn=Integer.MAX_VALUE,mx=Integer.MIN_VALUE;
        double res=0.0;
        for(int i:salary){
            if(i<mn)mn=i;
            if(i>mx)mx=i;
            res+=i;
        }
        return (res-mn-mx)/(salary.length-2);
    }
}