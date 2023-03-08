class Solution {
public:
    vector<int> numMovesStonesII(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int n=stones.size(),low=n;
        for(int i=0,j=0;j<n;j++){
            while(stones[j]-stones[i]+1>n)i++;
            int stored=j-i+1;
            if(stored==n-1 && stones[j]-stones[i]+1==n-1){
                low=min(low,2);
            }
            else{
                low=min(low,n-stored);
            }
        }
        return {low,max(stones[n-1]-stones[1]-n+2,stones[n-2]-stones[0]-n+2)};
    }
};