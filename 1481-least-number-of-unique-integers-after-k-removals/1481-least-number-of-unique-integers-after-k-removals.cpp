class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int>&p1,pair<int,int>&p2){
            if(p1.first>p2.first)return true;
            return false;
        }
    };
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>map;
        for(int i:arr)map[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        for(auto i:map){
            pq.push({i.second,i.first});
        }

      
        
                while(k--){
            if(pq.size()){
                
                pair<int,int>pi=pq.top();
                pq.pop();
                pi.first--;
                if(pi.first!=0)pq.push(pi);
                
            }
        }
        return pq.size();
    }
};