class Solution {
public:
    // struct cmp{
    //     bool operator()(pair<int,int>&a,pair<int,int>&b){
    //     if(a.first==b.first)return a.second<=b.second;
    //     return a.first>b.first;
    //     }
    // };

    struct cmp{
        bool operator()(pair<int,int>&p1,pair<int,int>&p2){
            if(p1.first==p2.first)return p1.second<=p2.second;
            return p1.first>p2.first;
        }
    };
    

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
//         for(int i=0;i<profits.size();i++){
//             pq.push({capital[i],profits[i]});
//         }
//         int i=0;
//         priority_queue<int>great;
       
//         while(k--){
//             if(!pq.empty() && pq.top().first<=w){
//                 while(!pq.empty() && pq.top().first<=w){
//                     great.push(pq.top().second);
//                     pq.pop();
//                 }
//             }
//                 if(great.empty())break;
//                 w+=great.top();
//                 great.pop();
            
//         }
//         return w;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        for(int i=0;i<profits.size();i++){
            pq.push({capital[i],profits[i]});
        }
        
        priority_queue<int>mxPftStore;
        while(k--){

            if(!pq.empty() && pq.top().first<=w){
                while(!pq.empty() && pq.top().first<=w){
                    auto p=pq.top();pq.pop();
                    mxPftStore.push(p.second);
                }
              
            }
             
            if(mxPftStore.empty())break;
            w+=mxPftStore.top();mxPftStore.pop();
            
        }
        
        return w;
    }
};