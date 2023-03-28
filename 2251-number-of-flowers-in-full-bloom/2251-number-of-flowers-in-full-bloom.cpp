class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>started,lasted;
        for(vector<int>v:flowers){
            started.push_back(v[0]);
            lasted.push_back(v[1]);
        }
        sort(started.begin(),started.end());
        sort(lasted.begin(),lasted.end());
        vector<int>res;
        for(int i:people){
            int fst=upper_bound(started.begin(),started.end(),i)-started.begin();
            int lst=lower_bound(lasted.begin(),lasted.end(),i)-lasted.begin();
            res.push_back(fst-lst);
        }
        return res;
    }
};