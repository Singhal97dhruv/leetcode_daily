class Solution {
    public int kthLargestValue(int[][] matrix, int k) {
        int m=matrix.length,n=matrix[0].length;
        PriorityQueue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        pq.add(matrix[0][0]);
        for(int i=1;i<m;i++){
            matrix[i][0]^=matrix[i-1][0];
            pq.add(matrix[i][0]);
        }
        
        for(int j=1;j<n;j++){
            matrix[0][j]^=matrix[0][j-1];
            pq.add(matrix[0][j]);
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                matrix[i][j]=matrix[i][j]^matrix[i-1][j]^matrix[i][j-1]^matrix[i-1][j-1];
                pq.add(matrix[i][j]);
            }
        }
        while(--k>0){
            pq.poll();
        }       
        return pq.peek().intValue();
    }
}