class Solution {
public:
    struct cmp{
        bool operator()(vector<int>&a,vector<int>&b){
            if(a[1]<b[1] || (a[1]==b[1] && a[2]<b[2]))return true;
            return false;
        }
    };
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(),trips.end(),cmp());
        int cap=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(vector<int>v:trips){
            if(pq.empty()){
                cap+=v[0];
                pq.push({v[2],v[0]});
            }
            else{
                while(!pq.empty() && pq.top().first<=v[1]){
                    cap-=pq.top().second;
                    pq.pop();
                }
                cap+=v[0];
                pq.push({v[2],v[0]});
            }
            if(cap>capacity)return false;
        }
        return true;
    }
};