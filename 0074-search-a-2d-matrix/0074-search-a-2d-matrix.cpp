class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        // int rows=matrix.size();
        // int cols=matrix[0].size();
        // int begin=0,end=rows*cols-1;
        // while(begin<=end){
        //     int mid=(begin+end)/2;
        //     int res=matrix[mid/cols][mid%cols];
        //     if(res==target)return true;
        //     else if(res<target)begin=mid+1;
        //     else end=mid-1;
        // }
        // return false;
        
//         int r=matrix.size(),c=matrix[0].size();
//         int left=0,right=r*c-1;

//         while(left<=right){
//             int mid=left+(right-left)/2;
//             int rowmid=mid/c,colmid=mid%c;
                        
//             if(matrix[rowmid][colmid]==target)return true;
            
//             else if(matrix[rowmid][colmid]<target)left=mid+1;
//             else right=mid-1;
            
//         }
        
//         return false;
        int m=matrix.size(),n=matrix[0].size();
        int left=0,right=m*n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int row=mid/n, col=mid%n;
            if(target==matrix[row][col])return true;
            else if(target<matrix[row][col])right=mid-1;
            else left=mid+1;
        }
        return false;
        
    }
};