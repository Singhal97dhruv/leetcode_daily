class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m=matrix.size(),n=matrix[0].size();
//         int left=0,right=n-1,top=0,bottom=m-1;
//         int dirn=0;
//         vector<int>res;
//         while(left<=right && top<=bottom){
//             if(dirn==0){
//                 for(int i=left;i<=right;i++)res.push_back(matrix[top][i]);
//                 top++;
                        
//                 dirn=(dirn+1)%4;

//             }
//             else if(dirn==1){
//                 for(int i=top;i<=bottom;i++)res.push_back(matrix[i][right]);
//                 right--;
//                 dirn=(dirn+1)%4;
//             }
//             else if(dirn==2){
//                 for(int i=right;i>=left;i--)res.push_back(matrix[bottom][i]);
//                 bottom--;
//                     dirn=(dirn+1)%4;

//             }
//             else {
//                 for(int i=bottom;i>=top;i--)res.push_back(matrix[i][left]);
//                 left++;
//                 dirn=(dirn+1)%4;
//             }
//         }
//         return res;
        int m=matrix.size()-1,n=matrix[0].size()-1;
      int left=0,top=0,right=n,bottom=m,dirn=0;
        vector<int>ans;
        while(left<=right && top<=bottom){
            
            if(dirn==0){
                for(int j=left;j<=right;j++){
                    ans.push_back(matrix[top][j]);
                }
                top++;
            }
            else if(dirn==1){
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dirn==2){
                for(int j=right;j>=left;j--){
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            else{
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dirn=(dirn+1)%4;
        }
        return ans;
        
        
        
    }
};