class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<int>res(m*n);
        bool up=true;
        int i=0;
        int rows=0,cols=0;
        while(rows<m && cols<n){
            
            if(up){
                while(rows>0 && cols<n-1){
                    res[i++]=mat[rows][cols];
                    rows--;
                    cols++;
                }
                res[i++]=mat[rows][cols];
                if(cols==n-1){
                    rows++;
                }
                else{
                    cols++;
                }
            }
            else{
                while(cols>0 && rows<m-1){
                    res[i++]=mat[rows][cols];
                    rows++;
                    cols--;
                }
                res[i++]=mat[rows][cols];
                if(rows==m-1){
                    cols++;
                }
                else{rows++;}
            }
            up=!up;
        }
        
        return res;
    }
};