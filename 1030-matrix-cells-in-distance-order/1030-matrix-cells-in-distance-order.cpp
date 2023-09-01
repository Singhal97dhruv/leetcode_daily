class Solution {
public:
    
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
    
        vector<pair<int,pair<int,int>>>vect;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                vect.push_back({abs(i-rCenter)+abs(j-cCenter),{i,j}});
            }
        }
        sort(vect.begin(),vect.end());
        vector<vector<int>>ans;
        for(auto i:vect){
            vector<int>temp={i.second.first,i.second.second};
            ans.push_back(temp);
        }
        return ans;
        
    }
};