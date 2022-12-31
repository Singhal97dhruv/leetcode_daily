class Solution {
public:
    
    int extractSum(int i,int j,const vector<vector<int>>&sum){
        if(i<0||j<0)return 0;
        if(i>=sum.size())i=sum.size()-1;
        if(j>=sum[0].size())j=sum[0].size()-1;
        return sum[i][j];
    }
    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>sum(n,vector<int>(m,0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                sum[i][j]=mat[i][j]+extractSum(i-1,j,sum)+extractSum(i,j-1,sum)-extractSum(i-1,j-1,sum);
            }
        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat[i][j]=extractSum(i+k,j+k,sum)-extractSum(i+k,j-k-1,sum)-extractSum(i-k-1,j+k,sum)+extractSum(i-k-1,j-k-1,sum);
            }
        }
        return mat;
        
    }
};