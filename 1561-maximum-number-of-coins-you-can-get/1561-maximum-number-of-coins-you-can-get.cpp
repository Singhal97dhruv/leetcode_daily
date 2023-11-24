class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int ans=0;
        
        sort(piles.begin(),piles.end());
        int offset=piles.size()/3;
        for(int i=offset;i<piles.size();i=i+2){
            ans+=piles[i];
        }
        return ans;
    }
};