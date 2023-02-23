class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first)return a.second<=b.second;
        return a.first>b.first;
        }
    };
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        for(int i=0;i<profits.size();i++){
            pq.push({capital[i],profits[i]});
        }
        int i=0;
        priority_queue<int>great;
       
        while(k--){
            if(!pq.empty() && pq.top().first<=w){
                while(!pq.empty() && pq.top().first<=w){
                    great.push(pq.top().second);
                    pq.pop();
                }
            }
                if(great.empty())break;
                w+=great.top();
                great.pop();
            
        }
        return w;
    }
};