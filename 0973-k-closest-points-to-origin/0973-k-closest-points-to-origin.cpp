class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     
        // priority_queue<pair<int,pair<int,int>>>pq;
        // for(int i=0;i<points.size();i++){
        //     int x=points[i][0];
        //     int y=points[i][1];
        //     pq.push({x*x+y*y,{x,y}});
        //     if(pq.size()>k)pq.pop();
        // }
        // vector<vector<int>>res;
        // while(!pq.empty()){
        //     // pair temp=pq.top().second;
        //     res.push_back({pq.top().second.first,pq.top().second.second});
        //     pq.pop();
        // }
        // return res;
        
        
//         priority_queue<pair<int,pair<int,int>>>nearOriginDistances;
        
//         for(int i=0;i<points.size();i++){
//             int x=points[i][0],y=points[i][1];
//             nearOriginDistances.push({x*x + y*y,{x,y}});
            
//             if(nearOriginDistances.size()>k)nearOriginDistances.pop();
//         }
            
//         vector<vector<int>>res;
        
//         while(!nearOriginDistances.empty()){
//             auto x=nearOriginDistances.top();
//             nearOriginDistances.pop();
//             res.push_back({x.second.first,x.second.second});
//         }
//         return res;
        
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<points.size();i++){
            int x=points[i][0],y=points[i][1],dis=x*x + y*y;
            pq.push({dis,{x,y}});
            
            if(pq.size()>k)pq.pop();
            
        }
        vector<vector<int>>res;
        while(!pq.empty()){
            res.push_back({pq.top().second.first,pq.top().second.second});pq.pop();
        }
        return res;
    }
};