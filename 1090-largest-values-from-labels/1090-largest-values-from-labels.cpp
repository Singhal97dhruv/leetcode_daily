class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<values.size();i++){
            pq.push({values[i],labels[i]});
        }
        unordered_map<int,int>map;
        int ans=0;
        while(!pq.empty() && numWanted){
            
            auto l= pq.top();
            pq.pop();
            if(++map[l.second]>useLimit)continue;
            
            ans+=l.first;
            numWanted--;
        }
        
        return ans;
        
    }
};