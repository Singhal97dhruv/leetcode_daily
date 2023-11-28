class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
     
        int m=rowSum.size(),n=colSum.size();
        vector<vector<int>>res(m,vector<int>(n));
        
        for(int i=0;i<rowSum.size();i++){
            for(int j=0;j<colSum.size();j++){
                int temp=min(rowSum[i],colSum[j]);
                res[i][j]=temp;
                rowSum[i]-=temp;
                colSum[j]-=temp;
            }
        }
        
        return res;
    }
};