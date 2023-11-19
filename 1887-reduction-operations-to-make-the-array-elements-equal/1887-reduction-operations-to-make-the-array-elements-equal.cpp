class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>map;
        
        int cnt=0;
        
        for(int i:nums){
            map[i]++;
        }
        for(auto i:map){
            pq.push({i.first,i.second});
        }
        while(pq.size()>1){
            auto temp=pq.top();pq.pop();
            cnt+=temp.second;
            auto nxt=pq.top();pq.pop();
            pq.push({nxt.first,nxt.second+temp.second});
        }
        return cnt;
    }
};