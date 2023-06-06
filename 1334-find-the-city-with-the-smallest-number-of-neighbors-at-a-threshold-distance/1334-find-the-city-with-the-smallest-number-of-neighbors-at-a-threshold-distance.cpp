class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        int INF=(int)1e6;
        int ans=0;
        vector<vector<int>>mat(n,vector<int>(n,INF));
        
        for(int i=0;i<n;i++)mat[i][i]=0;
        
        for(int i=0;i<edges.size();i++){
            mat[edges[i][0]][edges[i][1]]=mat[edges[i][1]][edges[i][0]]=edges[i][2];
        }
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                
                }
            }
        }

        int reachables=n;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]<=distanceThreshold)cnt++;
            }
            if(cnt<=reachables){
                reachables=cnt;
                ans=i;
            }
        }
        return ans;
        
    }
};