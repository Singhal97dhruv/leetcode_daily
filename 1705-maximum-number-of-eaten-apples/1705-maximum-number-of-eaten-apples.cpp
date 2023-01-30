class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        
        int globalDays=0,n=apples.size(),cnt=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       for(int i=0;i<n;i++){
           globalDays++;
           pq.push({i+days[i],apples[i]});
           
           while(!pq.empty() && pq.top().first<globalDays){
               pq.pop();
           }
           if(!pq.empty()){
               auto [f,s]=pq.top();pq.pop();
               cnt+=1;
               if(--s>0)
               pq.push({f,s});
           }
           
       }
            while(!pq.empty()){
                
            globalDays++;
                cout<<globalDays<<" "<<pq.top().second;
            while(!pq.empty() && pq.top().first<globalDays){
                pq.pop();
            }
              if(!pq.empty()){
                auto [f,s]=pq.top();pq.pop();
                    cnt+=1;
                  if(--s>0)
                     pq.push({f,s});
           }   
        }
        return cnt;
        
    }
};