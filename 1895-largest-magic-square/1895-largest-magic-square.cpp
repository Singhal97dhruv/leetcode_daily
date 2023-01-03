class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
     
        int m=grid.size(),n=grid[0].size();
        for(int sz=min(m,n);sz>1;sz--){
            for(int r=0;r<=m-sz;r++){
                for(int c=0;c<=n-sz;c++){
                    int r_sum=0,c_sum=0,d_sum=0,anti_d_sum=0;
                    bool flag=true;
                    for(int i=0;i<sz;i++)r_sum+=grid[r][c+i];
                    for(int j=0;j<sz;j++)c_sum+=grid[r+j][c];
                    for(int i=0;i<sz;i++)d_sum+=grid[r+i][c+i];
                    for(int i=0;i<sz;i++)anti_d_sum+=grid[r+i][c+(sz-1)-i];
                    
                    if(d_sum!=anti_d_sum|| d_sum!=r_sum|| d_sum!=c_sum)continue;
                    
                    for(int i=1,curr=0;i<sz && flag;i++,curr=0){
                        for(int j=0;j<sz;j++){
                            curr+=grid[r+i][c+j];
                        }
                        flag=curr==d_sum?1:0;
                    }
                    if(!flag)continue;
                    
                    for(int j=1,curr=0;j<sz && flag;j++,curr=0){
                        for(int i=0;i<sz;i++){
                            curr+=grid[r+i][c+j];
                        }
                        flag=d_sum==curr?1:0;
                    }
                    if(!flag)continue;
                    return sz;
                 }
            }
        }
        return 1;
    }
};