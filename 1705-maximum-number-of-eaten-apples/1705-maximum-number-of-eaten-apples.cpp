class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        
        int i=0,n=apples.size(),cnt=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        while(i<n || !pq.empty()){
            if(i<n && apples[i]!=0)
            pq.push({i+days[i],apples[i]});
        
            while(!pq.empty() && pq.top().first<i+1)pq.pop();
            
            if(!pq.empty()){
                auto [first,sec]=pq.top();pq.pop();
                cnt++;
                if(--sec>0)pq.push({first,sec});
                }
            i++;
            }
        
        return cnt;
        
    }
};