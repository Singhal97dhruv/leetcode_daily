class Solution {
public:
    
    struct cmp{
        bool operator()(pair<int,int>&p1,pair<int,int>&p2){
            return p1.first>p2.first;
        }
    };
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
  
//         priority_queue<pair<int,int>>pq;
//         unordered_map<int,int>map;
//         for(int i:nums)map[i]++;
//         for(auto i:map){
//             pq.push(make_pair(i.second,i.first));
//         }
//         vector<int>res;
//         for(int i=0;i<k;i++){
//             res.push_back(pq.top().second);
//             pq.pop();
//         }
        
//   return res;      

    
        unordered_map<int,int>freqStore;
        for(int i:nums){
            freqStore[i]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>kFreq;
        
        for(auto &m:freqStore){
            kFreq.push({m.second,m.first});
            if(kFreq.size()>k)kFreq.pop();
            
        }
        
        vector<int>res;
        
        while(!kFreq.empty()){
            res.push_back(kFreq.top().second);
            kFreq.pop();
        }
        
        return res;
    
    }
};