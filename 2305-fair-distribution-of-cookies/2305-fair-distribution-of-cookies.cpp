class Solution {
public:
    int res=INT_MAX;
    void backtrack(int i,vector<int>&cookies,vector<int>&children,int k){
        if(i==cookies.size()){
            int ans=INT_MIN;
            for(int j=0;j<k;j++)
                ans=max(ans,children[j]);
            res=min(res,ans);
            return ;
        }
        for(int j=0;j<k;j++){
            children[j]+=cookies[i];
            backtrack(i+1,cookies,children,k);
            children[j]-=cookies[i];
            if(children[j]==0)break;
        }
        
        
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>children(k,0);
        backtrack(0,cookies,children,k);
        return res;
            
    }
};