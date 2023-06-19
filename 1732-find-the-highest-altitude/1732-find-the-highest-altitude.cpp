class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=max(0,gain[0]);
        for(int i=0;i<gain.size()-1;i++){
            gain[i+1]+=gain[i];

            mx=max(mx,gain[i+1]);
        }
        return mx;
    }
};