class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
     
        vector<vector<int>>vect(n,vector<int>(n,0));
        for(auto v:queries){
            int r1=v[0],c1=v[1],r2=v[2],c2=v[3];
            vect[r1][c1]+=1;
            if(r2+1<n && c2+1<n)vect[r2+1][c2+1]+=1;
            if(r2+1<n)vect[r2+1][c1]-=1;
            if(c2+1<n)vect[r1][c2+1]-=1;
        }
        for(int i=0;i<n;i++)
            for(int j=1;j<n;j++)
                vect[i][j]+=vect[i][j-1];
        
        for(int j=0;j<n;j++)
            for(int i=1;i<n;i++)
                vect[i][j]+=vect[i-1][j];
        return vect;
        
    }
};