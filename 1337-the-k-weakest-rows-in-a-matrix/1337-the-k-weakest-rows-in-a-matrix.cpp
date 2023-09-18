class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
     
        set<pair<int,int>>s;
        for(int i=0;i<mat.size();i++){
            auto p=accumulate(mat[i].begin(),mat[i].end(),0);
            s.insert({p,i});
        }
        vector<int>res;
        for(auto itr=s.begin();k>0;itr++,k--){
            res.push_back(itr->second);
        }
        
        return res;
    }
};