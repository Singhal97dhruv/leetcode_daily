class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        
        int sum=0,cnt=0;
        
        int i=0;
        for(;i<k-1;i++)sum+=arr[i];
        for(;i<arr.size();i++){
            sum+=arr[i];
            if((double)sum/k >= (double)threshold)cnt++;
            
            sum-=arr[i-k+1];
            
        }
        return cnt;
        
    }
};