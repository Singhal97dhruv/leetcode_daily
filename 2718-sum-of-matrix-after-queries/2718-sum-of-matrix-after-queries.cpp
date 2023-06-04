class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        
        long long ans=0;
        vector<bool>rows(n,true),cols(n,true);
        int col=n,row=n;
        for(int i=queries.size()-1;i>=0;i--){
            if(queries[i][0]==0 && rows[queries[i][1]]){
                rows[queries[i][1]]=false;
                ans+=queries[i][2]*col;
                row--;
            }
            else if(queries[i][0]==1 && cols[queries[i][1]]){
                cols[queries[i][1]]=false;
                ans+=queries[i][2]*row;
                col--;
            }
        }
        return ans;
        
    }
};