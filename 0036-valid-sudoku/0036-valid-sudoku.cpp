class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
//         int forRow[9][9]={0},forCol[9][9]={0},forBox[9][9]={0};
//         for(int i=0;i<9;i<i++){
//             for(int j=0;j<9;j++){
                
//                 if(board[i][j]!='.'){
//                     int number=board[i][j]-'0'-1;
//                     int k=(i/3)*3+j/3;
//                     if(forRow[i][number] || forCol[j][number] || forBox[k][number])return false;
//                     forRow[i][number]=forCol[j][number]=forBox[k][number]=1;
//                 }
                
//             }
//         }
//         return true;
        
        
//         for(int i=0;i<9;i++){
//             int arr[10]={0};
//             for(int j=0;j<9;j++){
//                 if(board[i][j]=='.')continue;
//                 if(arr[board[i][j]-'0']==1)return false;
//                 arr[board[i][j]-'0']=1;
//             }
//         }
        
//          for(int j=0;j<9;j++){
//             int arr[10]={0};
//             for(int i=0;i<9;i++){
//                 if(board[i][j]=='.')continue;
//                 if(arr[board[i][j]-'0']==1)return false;
//                 arr[board[i][j]-'0']=1;
//             }
//         }
        
//         for(int i=0;i<9;i+=3){
//             for(int j=0;j<9;j+=3){
//                 int arr[10]={0};
//                 for(int k=i;k<i+3;k++){
//                     for(int l=j;l<j+3;l++){
//                         if(board[k][l]=='.')continue;
//                         if(arr[board[k][l]-'0']==1)return false;
//                         arr[board[k][l]-'0']=1;
//                     }
//                 }
//             }
//         }
        
//         return true;
        
//         int arr1[9][9]={0},arr2[9][9]={0},arr3[9][9]={0};
        
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 if(board[i][j]=='.')continue;
//                 int num=board[i][j]-'0'-1;
//                 int blockIdx=(i/3)*3 + j/3; 
//                 if(arr1[i][num] || arr2[j][num] || arr3[blockIdx][num])return false;
                    
//                 arr1[i][num]=arr2[j][num]=arr3[blockIdx][num]=1;                
                
//             }
//         }
        
//         return true;
        
        int arr1[9][9]={0},arr2[9][9]={0},arr3[9][9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
               if(board[i][j]=='.')continue;
                int num=board[i][j]-'0'-1;
                int BlockIdx=(i/3)*3 + j/3;
                if(arr1[i][num]|| arr2[j][num] || arr3[BlockIdx][num])return false;
                
                arr1[i][num]=arr2[j][num]=arr3[BlockIdx][num]=1;
            }
        }
        return true;
    }
};