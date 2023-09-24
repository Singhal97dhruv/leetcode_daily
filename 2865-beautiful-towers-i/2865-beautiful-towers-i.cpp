class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        
        long long ans=0;
        int n=maxHeights.size();
        for(int i=0;i<maxHeights.size();i++){
            long long sum=0;
            int num=maxHeights[i];
            int prev=num;
            sum+=prev;
            for(int j=i-1;j>=0;j--){
                prev=min(maxHeights[j],prev);
                sum+=prev;
            }
            prev=num;
            for(int j=i+1;j<n;j++){
                prev=min(maxHeights[j],prev);
                sum+=prev;
            }
            ans=max(ans,sum);
        }
        return ans;
        
    }
};