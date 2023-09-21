class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int n=values.size();
        int mxLft=values[0],res=INT_MIN;
        for(int j=1;j<n;j++){
            
            res=max(res,mxLft+values[j]-j);
            mxLft=max(mxLft,j+values[j]);
            
        }
        
        return res;
    }
};