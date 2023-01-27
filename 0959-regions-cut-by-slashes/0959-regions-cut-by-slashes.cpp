class Solution {
public:
    
    int dfs(vector<vector<int>>&v,int i,int j){
        if(min(i,j)<0 || max(i,j)>=v.size()||v[i][j]!=0)return 0;
        v[i][j]=1;
        return 1+dfs(v,i+1,j)+dfs(v,i,j+1)+dfs(v,i-1,j)+dfs(v,i,j-1);
    }
    
    int regionsBySlashes(vector<string>& grid) {
        int cnt=0;
        vector<vector<int>>vect(grid.size()*3,(vector<int>(grid[0].size()*3,0)));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='/')
                    vect[i*3][j*3+2]=vect[i*3+1][j*3+1]=vect[i*3+2][j*3]=1;
                else if(grid[i][j]=='\\')
                    vect[i*3][j*3]=vect[i*3+1][j*3+1]=vect[i*3+2][j*3+2]=1;
            }
        }
        
        for(int i=0;i<grid.size()*3;i++){
            for(int j=0;j<grid[0].size()*3;j++){
                cnt+=dfs(vect,i,j)?1:0;
            }
        }
        return cnt;
    }
};