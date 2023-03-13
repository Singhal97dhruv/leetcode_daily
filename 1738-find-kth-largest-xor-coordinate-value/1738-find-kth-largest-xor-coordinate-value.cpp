class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m=matrix.size(),n=matrix[0].size();
        int Xor=matrix[0][0];
        priority_queue<int>pq;
        pq.push(matrix[0][0]);
        for(int i=1;i<m;i++){
            matrix[i][0]^=Xor;
            Xor=matrix[i][0];
            pq.push(Xor);
        }
        Xor=matrix[0][0];
        for(int j=1;j<n;j++){
            matrix[0][j]^=Xor;
            Xor=matrix[0][j];
            pq.push(Xor);
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                matrix[i][j]=matrix[i][j]^matrix[i-1][j]^matrix[i][j-1]^matrix[i-1][j-1];
                pq.push(matrix[i][j]);
            }
        }
        while(--k){
            pq.pop();
        }
        return pq.top();
    }
};