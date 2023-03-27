class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        
//        long long arr[100002]={0};
//         bool seen[100002]={};
//         for(auto i:segments){
//             arr[i[0]]+=i[2];
//             arr[i[1]]-=i[2];
//             seen[i[0]]=seen[i[1]]=true;
//         }
        
//         long long sum=0,last_idx=0;
//         vector<vector<long long>>res;
//         for(int i=0;i<100002;i++){
//             if(sum && seen[i]){
//                 res.push_back({last_idx,i,sum});
//             }
//             sum+=arr[i];
//             last_idx=seen[i]?i:last_idx;
//         }
//         return res;
        
        map<int,long long>map;
        for(auto i:segments){
            map[i[0]]+=i[2];
            map[i[1]]-=i[2];
        }
        vector<vector<long long>>res;
        int i=0;
        for(auto j:map){
            if(map[i]>0){
                res.push_back({i,j.first,map[i]});
            }
            map[j.first]+=map[i];
            i=j.first;
        }
        return res;
        
    }
};