class Solution {
public:
    
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        
        vector<vector<int>>vect;
        for(int i=0;i<aliceValues.size();i++){
            vect.push_back({-aliceValues[i]-bobValues[i],aliceValues[i],bobValues[i]});
        }
        sort(vect.begin(),vect.end());
        int alice=0,bob=0;
        for(int i=0;i<aliceValues.size();i++)
        {
            if(i%2==0){
                alice+=vect[i][1];
            }
            else bob+=vect[i][2];
        }
        if(alice>bob)return 1;
        else if(alice==bob)return 0;
        return -1;
    }
};