class Solution {
public:
    
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        
        
//         bool row=false,col=false;
//         int m=matrix.size(),n=matrix[0].size();
        
//         for(int i=0;i<m;i++){
//             if(matrix[i][0]==0){col=true;break;}
//         }
//         for(int j=0;j<n;j++){
//             if(matrix[0][j]==0){row=true;break;}
//         }
    
//         for(int i=1;i<m;i++){
//             for(int j=1;j<n;j++){
//                 if(matrix[i][j]==0){
//                     matrix[i][0]=0;
//                     matrix[0][j]=0;
//                 }
//             }
//         }
//         for(int i=1;i<m;i++){
//             for(int j=1;j<n;j++){
//                 if(matrix[i][0]==0||matrix[0][j]==0){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
//         if(row)for(int j=0;j<n;j++)matrix[0][j]=0;
//         if(col)for(int i=0;i<m;i++)matrix[i][0]=0;
        
        
     bool inRow=false,inCol=false;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0){inCol=true;break;}
        }
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[0][j]==0){inRow=true;break;}
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)matrix[i][j]=0;
            }
        }
        if(inRow)for(int j=0;j<matrix[0].size();j++)matrix[0][j]=0;
        if(inCol)for(int i=0;i<matrix.size();i++)matrix[i][0]=0;
        
    }
};