class Solution {
public:
    
    int countIN1d(vector<int>&h){
        int len=0,res=0;
        for(int i:h){
            len=i==0?0:len+1;
            res+=len;
        }
        return res;
    }
    
    int numSubmat(vector<vector<int>>& mat) {
        
        int res=0;
        
        for(int up=0;up<mat.size();up++){
            vector<int>h(mat[0].size(),1);
            for(int down=up;down<mat.size();down++){
                for(int k=0;k<mat[0].size();k++)h[k]&=mat[down][k];
                
            
            res+=countIN1d(h);
            }
        }
        
        return res;
    }
};