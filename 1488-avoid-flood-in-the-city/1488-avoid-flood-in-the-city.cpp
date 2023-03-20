class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        
        unordered_map<int,int>fullLakes;
        set<int>dry;
        vector<int>res;
        for(int i=0;i<rains.size();i++){
            if(rains[i]==0){
                dry.insert(i);
                res.push_back(1);
            }
            else{
                int lake=rains[i];
                if(fullLakes.find(lake)!=fullLakes.end()){
                    // auto it=lower_bound(dry.begin(),dry.end(),fullLakes[lake]);
                    auto it=dry.lower_bound(fullLakes[lake]);
                    if(it==dry.end())return {};
                    int day=*it;
                    res[day]=lake;
                    dry.erase(day);
                }
                res.push_back(-1);
                fullLakes[lake]=i;
            }
        }
        return res;
    }
};