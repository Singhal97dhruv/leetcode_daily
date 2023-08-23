class Solution {
public:
    string reorganizeString(string s) {
        
        unordered_map<char,int>map;
        priority_queue<pair<int,char>>pq;
        for(char c:s){
            map[c]++;
        }
        for(auto m:map){
            pq.push({m.second,m.first});
        }
        string res="";
        while(!pq.empty()){
            pair<int,char>t1=pq.top();
            pq.pop();
            t1.first--;
            res.push_back(t1.second);
            if(!pq.empty()){
                pair<int,char>t2=pq.top();
                pq.pop();
                res.push_back(t2.second);
                t2.first--;
                if(t2.first)pq.push(t2);
            }
            else if(pq.empty() && t1.first>0)return "";
            if(t1.first)
                pq.push(t1);
            
        }
        return res;
        
        
    }
};