class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        vector<vector<int>>res;
        int i=0,j=0;
        while(i<firstList.size() && j<secondList.size()){
            int mn=max(firstList[i][0],secondList[j][0]);
            int mx=min(firstList[i][1],secondList[j][1]);
            if(mn<=mx)res.push_back({mn,mx});
            if(firstList[i][1]<secondList[j][1])i++;
            else j++;
        }
        return res;
        
    }
};