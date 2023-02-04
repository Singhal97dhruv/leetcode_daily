class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i:nums){
            vector<int>t;
            while(i){
                t.push_back(i%10);i/=10;
            }
            for(int j=t.size()-1;j>=0;j--)res.push_back(t[j]);
        }
        return res;
        
    }
};