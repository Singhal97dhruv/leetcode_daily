// class Custom{
//     public:
//     bool operator ()(pair<int,string>&a,pair<int,string>&b){
//         if(a.first>b.first)return true;
//         else if(a.first==b.first)
//             if(a.second<b.second)return true;
//     return false;
//     }

// };

class Solution {
public:
    
    struct cmp{
        bool operator()(pair<int,string>&p1,pair<int,string>&p2){
            if(p1.first>p2.first)return true;
            if(p1.first==p2.first)return p1.second<p2.second;
            return false;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
//         unordered_map<string,int>map;
        
//         for(string s:words){
//             map[s]++;
//         }
//         auto comp=[&](const pair<string,int>&a,const pair<string,int>&b){
//             return a.first>b.first || (a.first==b.first && a.second<b.second);
//         };
//         typedef priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(comp)>pq;
//         pq pqt(comp);
//         for(auto w:words){
//             pqt.emplace(map[w],w);
//             if(pqt.size()>k)pqt.pop();
//         }
//         vector<string>op;
//         while(!pqt.empty()){
//             op.push_back(pqt.top().second);
//             pqt.pop();
//         }
//         reverse(op.begin(),op.end());
//         return op;
        
        // unordered_map<string,int>map;
        // for(string s:words)map[s]++;
        // vector<string>vect;
        // priority_queue<pair<int,string>,vector<pair<int,string>>,Custom>minheap;
        // for(auto m:map){
        //     pair temp={m.second,m.first};
        //     minheap.push(temp);
        //     if(minheap.size()>k)minheap.pop();
        // }
        // while(!minheap.empty()){
        //     vect.push_back(minheap.top().second);
        //     minheap.pop();
        // }
        // reverse(vect.begin(),vect.end());
        // return vect;
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        
        unordered_map<string,int>map;
        
        for(int i=0;i<words.size();i++){
            map[words[i]]++;    
        }
        for(auto mp:map){
            pq.push({mp.second,mp.first});
            if(pq.size()>k)pq.pop();
        }
        vector<string>res(pq.size());
        for(int i=pq.size()-1;i>=0;i--){
            res[i]=pq.top().second;pq.pop();
        }
        return res;
    }
};