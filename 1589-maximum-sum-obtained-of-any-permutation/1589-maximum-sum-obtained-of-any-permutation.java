class Solution {
    public int maxSumRangeQuery(int[] nums, int[][] requests) {
        int n=nums.length;
        long res=0,mod=(long )1e9+7;
        int arr[] =new int[n];
        for(int i=0;i<requests.length;i++){
            arr[requests[i][0]]+=1;
            if(requests[i][1]+1<n)arr[requests[i][1]+1]--;
        }
        
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        
        Arrays.sort(nums);
        Arrays.sort(arr);
    
        for(int i=0;i<n;i++){
            res+=(long)arr[i]*nums[i];
        }
        return (int)(res%mod);
        
        
    }
}