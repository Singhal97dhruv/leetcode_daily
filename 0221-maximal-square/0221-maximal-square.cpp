class Solution {    // for more understanding go to java code
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),pre,res=0;
        vector<int>curr(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int t=curr[j];
                if(!i||!j||matrix[i][j]=='0')
                    curr[j]=matrix[i][j]-'0';
                else
                    curr[j]=1+min({curr[j-1],curr[j],pre});
                res=max(res,curr[j]);
                pre=t;
            }
        }
        return res*res;
    }
};