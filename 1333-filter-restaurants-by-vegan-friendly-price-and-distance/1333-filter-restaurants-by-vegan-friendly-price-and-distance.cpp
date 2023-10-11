class Solution {
public:
    
    struct cmp{
        bool operator()(vector<int>&a,vector<int>&b){
            if(a[0]==b[0])return a[1]>b[1];
            return a[0]>b[0];
        }
    };
    
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        
        vector<vector<int>>vect;
       for(int i=0;i<restaurants.size();i++){
           
           if(veganFriendly==1 && restaurants[i][2]!=veganFriendly)continue;
           if(restaurants[i][3]>maxPrice)continue;
           if(restaurants[i][4]>maxDistance)continue;
           vect.push_back({restaurants[i][1],restaurants[i][0]});
           
       }
        
        sort(vect.begin(),vect.end(),cmp());
        vector<int>ans;
        for(auto i:vect){
            ans.push_back(i[1]);
        }
        return ans;
    }
};