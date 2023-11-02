class Solution {
public:
    
    int subs(int a,int b,vector<vector<int>>&mat){
        int m=mat.size(),n=mat[0].size();
        int cnt=0,limit=n;
        for(int i=a;i<m;i++){
            for(int j=b;j<limit;j++){
                if(mat[i][j])
                    cnt++;
                else
                    limit=j;
            }
            if(b==limit)return cnt;
        }
        return cnt;
    }
    
    int numSubmat(vector<vector<int>>& mat) {
        
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans+=subs(i,j,mat);
            }
        }
        return ans;
    }
};