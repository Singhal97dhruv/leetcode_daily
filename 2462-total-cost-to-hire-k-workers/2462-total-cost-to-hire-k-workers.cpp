class Solution {
public:
    struct cmp{
        bool operator()(int &a,int &b){
            return a>b;
        }
    };
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long cost=0;
        int i=0,j=costs.size()-1,cnt=0;
        priority_queue<int,vector<int>,cmp>pq1,pq2;
        while(cnt<k){
            while(pq1.size()<candidates && i<=j)pq1.push(costs[i++]);
            while(pq2.size()<candidates && j>=i)pq2.push(costs[j--]);
            int x=pq1.size()>0?pq1.top():INT_MAX;
            int y=pq2.size()>0?pq2.top():INT_MAX;
            if(x<=y){
                cost+=x;
                pq1.pop();
            }
            else{
                cost+=y;
                pq2.pop();
            }
            cnt++;
        }
        return cost;
        
    }
};