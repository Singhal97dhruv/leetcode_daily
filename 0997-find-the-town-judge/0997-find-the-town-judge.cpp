class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)return 1;
        
        vector<int>outD(n+1,0),inD(n+1,0);
        
        for(auto edges:trust){
            outD[edges[0]]++;
            inD[edges[1]]++;
        }
        for(int i=0;i<=n;i++){
            if(outD[i]==0 && inD[i]==n-1)return i;
        }
return -1;
    }
};