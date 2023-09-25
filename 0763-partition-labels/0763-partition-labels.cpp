class Solution {
public:
    vector<int> partitionLabels(string s) {
//         unordered_map<char,int>map;
//      for(int i=0;i<s.size();i++){
//          char c=s[i];
//          map[c]=i;
         
//      }
//         int prev=-1;
//         int maxi=0;
//         vector<int>res;
//         for(int i=0;i<s.size();i++){
            
//             maxi=max(map[s[i]],maxi);
//             if(maxi==i){
//                 res.push_back(maxi-prev);
//                 prev=maxi;
//             }
//         }
//         return res;
        
        
        unordered_map<char,int>map;
        for(int i=0;i<s.size();i++){
            map[s[i]]=i;
        }
        vector<int>res;
        int prev=-1,mx=0;
        for(int i=0;i<s.size();i++){
            mx=max(mx,map[s[i]]);
            if(mx==i){
                res.push_back(mx-prev);
                prev=mx;
            }
        }
        return res;
    }
};