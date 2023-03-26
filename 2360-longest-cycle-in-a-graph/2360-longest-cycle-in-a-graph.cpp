class Solution {
public:
    int longestCycle(vector<int>& edges) {
        vector<pair<int,int>>vect(edges.size(),{-1,-1});
        int res=-1;
        for(int i=0;i<edges.size();i++){
            for(int j=i,dist=0;j!=-1;j=edges[j]){
                auto [dis_i,from_i]=vect[j];
                if(dis_i==-1){
                    vect[j]={dist++,i};
                }
                else{
                    if(from_i==i)
                        res=max(res,dist-dis_i);
                    break;
                }
            }
        }
        return res;
        
        
    }
};