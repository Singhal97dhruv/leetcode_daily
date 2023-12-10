class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());
        int i=0,n=arr.size();
        for(i;i<n;i++){
            if(target<=arr[i]*(n-i))break;
            target-=arr[i];
        }
        return i==n?arr[n-1]:(round((target-0.01)/(n-i)));
    }
};