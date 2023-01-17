class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n=1000002,mx=INT_MIN;
        vector<int>vect(n,0);
        for(auto i:intervals){
            vect[i[0]]++;
            vect[i[1]+1]--;
        }
        for(int i=1;i<vect.size();i++){
            vect[i]+=vect[i-1];
            mx=max(vect[i],mx);
        }
        return mx;
    }
};