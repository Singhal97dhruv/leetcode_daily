class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        long long globalTime=0,n=tasks.size(),i=0;
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        for(int i=0;i<tasks.size();i++)tasks[i].push_back(i);
        sort(tasks.begin(),tasks.end());
        while(i<n || pq.size()){
        if(pq.empty()){
            globalTime=max(globalTime,(long long)tasks[i][0]);
            
            // i++;
        }
        while(i<n && globalTime>=tasks[i][0]){
            pq.push({tasks[i][1],tasks[i][2]});
            i++;
        }
        auto [first,second]=pq.top();
        pq.pop();
        globalTime+=first;
        ans.push_back(second);
        }
        return ans;
    }
};