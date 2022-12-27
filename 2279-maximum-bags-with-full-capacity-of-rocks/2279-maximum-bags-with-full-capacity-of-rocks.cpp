class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int cnt=0;
        for(int i=0;i<rocks.size();i++){
            capacity[i]=capacity[i]-rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<capacity.size() && additionalRocks-capacity[i]>=0;i++)cnt++,additionalRocks-=capacity[i];
        return cnt;
    }
};