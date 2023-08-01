class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
//         unordered_map<int,vector<int>>map;
//         for(int i=0;i<routes.size();i++){
//             for(int j:routes[i]){
//                 map[j].push_back(i);
//             }
//         }
        
//         unordered_set<int>seen;
//         seen.insert(source);
//         queue<pair<int,int>>q;
//         q.push({source,0});
        
//         while(!q.empty()){
//             int stop=q.front().first;
//             int bus=q.front().second;
//             q.pop();
//             if(stop==target)return bus;
//             for(int i:map[stop]){
//                 for(int j:routes[i]){
//                     if(seen.find(j)!=seen.end())continue;
//                     seen.insert(j);
//                     q.push({j,bus+1});
//                 }
//                 routes[i].clear();
//             }
//         }
//         return -1;
        
        unordered_map<int,vector<int>>map;
        for(int i=0;i<routes.size();i++)
            for(int j: routes[i])
                map[j].push_back(i);

        unordered_set<int>seen;
        seen.insert(source);
        queue<pair<int,int>>q;
        q.push({source,0});
        while(!q.empty()){
            int stop=q.front().first,bus=q.front().second;q.pop();
            if(stop==target)return bus;
            for(int i: map[stop]){
                for(int j: routes[i]){
                    if(seen.find(j)!=seen.end())continue;
                    q.push({j,bus+1});
                }
                routes[i].clear();
            }
        }
        return -1;
        
    }
};