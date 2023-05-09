class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
           int m=matrix.length,n=matrix[0].length;
        int left=0,right=n-1,top=0,bottom=m-1;
        int dirn=0;
        // vector<int>res;
        List<Integer>res=new ArrayList<>();
        while(left<=right && top<=bottom){
            if(dirn==0){
                for(int i=left;i<=right;i++)res.add(matrix[top][i]);
                top++;
                        
                dirn=(dirn+1)%4;

            }
            else if(dirn==1){
                for(int i=top;i<=bottom;i++)res.add(matrix[i][right]);
                right--;
                dirn=(dirn+1)%4;
            }
            else if(dirn==2){
                for(int i=right;i>=left;i--)res.add(matrix[bottom][i]);
                bottom--;
                    dirn=(dirn+1)%4;

            }
            else {
                for(int i=bottom;i>=top;i--)res.add(matrix[i][left]);
                left++;
                dirn=(dirn+1)%4;
            }
        }
        return res;
    }
}