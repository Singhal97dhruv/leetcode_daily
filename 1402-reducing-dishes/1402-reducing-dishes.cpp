class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int res=0,total=0,n=satisfaction.size();
        for(int i=n-1;i>=0 && satisfaction[i]>-total;i--){
            total+=satisfaction[i];
            res+=total;
        }
        return res;
    }
};