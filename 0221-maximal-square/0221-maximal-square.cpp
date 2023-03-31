class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),res=0;
        vector<int>pre(n,0),curr(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!i||!j||matrix[i][j]=='0')
                    curr[j]=matrix[i][j]-'0';
                else
                    curr[j]=1+min({curr[j-1],pre[j-1],pre[j]});
                res=max(res,curr[j]);
            }
            pre=curr;
            fill(curr.begin(),curr.end(),0);
        }
        return res*res;
    }
};