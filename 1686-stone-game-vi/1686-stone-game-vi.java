class Solution {
    public int stoneGameVI(int[] aliceValues, int[] bobValues) {
        
        int n=aliceValues.length;
        int [][]arr=new int[n][];
        for(int i=0;i<n;i++){
            arr[i]=new int []{aliceValues[i]+bobValues[i],aliceValues[i],bobValues[i]};
        }
        Arrays.sort(arr,(a,b)->Integer.compare(b[0],a[0]));
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                a+=arr[i][1];
            }
            else b+=arr[i][2];
        }
        if(a>b)return 1;
        else if(a==b)return 0;
        return -1;
    }
}