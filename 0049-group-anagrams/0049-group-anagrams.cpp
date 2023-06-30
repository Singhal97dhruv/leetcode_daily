class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>map;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            map[t].push_back(s);
        }
        vector<vector<string>>vect;
        for(auto mp:map){
            vect.push_back(mp.second);
        }
        return vect;
        
        
//         vector<int>primes={2, 3, 5, 7, 11 ,13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 107};
        
//         unordered_map<long long,vector<string>>map;
//         for(string s:strs){
//             long long temp=1;
//             for(char c:s){
//                 temp*=primes[c-'a'];
//             }
//             map[temp].push_back(s);
//         }
//         vector<vector<string>>res;
//         for(auto i:map){
//             res.push_back(i.second);
//         }
//         return res;
        
        
        
    }
};