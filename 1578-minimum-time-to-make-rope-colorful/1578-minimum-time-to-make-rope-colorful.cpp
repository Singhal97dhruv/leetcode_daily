class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res=0;
        stack<pair<int,int>>stk;
        for(int i=0;i<colors.size();i++){
            if(!stk.empty() && stk.top().first==colors[i]){
                if(stk.top().second<neededTime[i]){
                    res+=stk.top().second;
                    stk.pop();
                    stk.push({colors[i],neededTime[i]});
                }
                else{
                    res+=neededTime[i];
                }
            }
            else{
                    stk.push({colors[i],neededTime[i]});

            }
        }
        return res;
    }
};