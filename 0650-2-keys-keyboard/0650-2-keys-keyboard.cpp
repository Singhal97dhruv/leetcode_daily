class Solution {
public:
    int minSteps(int n) {
        vector<int>arr(n+1,0);
        for(int i=2;i<=n;i++){
            for(int j=i-1;j>0;j--){
                if(i%j==0){
                arr[i]=arr[j]+(i/j);
                break;
                }
            }
        }
        return arr[n];
    }
};