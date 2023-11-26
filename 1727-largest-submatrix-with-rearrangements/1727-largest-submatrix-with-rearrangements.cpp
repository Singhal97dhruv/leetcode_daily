class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int ans=0;
        vector<int>h(n,0);
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0)h[j]=0;
                else h[j]+=1;
            }
        
        vector<int>temp=h;
        
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<n;i++){
            ans=max(ans,temp[i]*(n-i));
        }
            
        }
            
            return ans;
        
    }
};