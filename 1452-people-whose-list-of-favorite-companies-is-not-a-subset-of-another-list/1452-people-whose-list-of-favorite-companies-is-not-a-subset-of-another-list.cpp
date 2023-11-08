class Solution {
public:
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        
        vector<int>ans;
        for(auto &i:favoriteCompanies){
            sort(i.begin(),i.end());
        }
        
        for(int i=0;i<favoriteCompanies.size();i++){
         
            bool notSubset=true;
            for(int j=0;j<favoriteCompanies.size() && notSubset;j++){
                if(i==j)continue;
                notSubset=!includes(favoriteCompanies[j].begin(),favoriteCompanies[j].end(),favoriteCompanies[i].begin(),favoriteCompanies[i].end());
            }
            
            if(notSubset)ans.push_back(i);
        }
        return ans;
        
    }
};