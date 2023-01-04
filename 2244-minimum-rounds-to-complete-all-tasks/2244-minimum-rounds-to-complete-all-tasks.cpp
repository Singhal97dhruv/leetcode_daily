class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<long long,int>map;
        int min=0;
        for(int i:tasks){
            map[i]++;
        }
        // priority_queue<pair<int,long long>>pq;
        // for(auto m:map){
        //     pq.push({m.second,m.first});
        // }
//         while(!pq.empty()){
//             // pair<int,long long>f=pq.top();pq.pop();
//             if(f.first==1)return -1;
            
//             if(f.first==4)f.first-=2;
//             else f.first-=3;
            
//             if(f.first>0)pq.push({f.first,f.second});
//             min++;
            
//             }
        
        for(auto m:map){
            if(m.second==1)return -1;
            else if(m.second%3==0) min+=m.second/3;
            else min+= m.second/3+1;
        }
        
        return min;
    }
};