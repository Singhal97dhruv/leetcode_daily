class Solution {
public:
    bool wordPattern(string pattern, string str) {
         
        unordered_map<char,string>map;
        unordered_set<string>set;
        stringstream ss(str);
        vector<string>strs;
        string temp;
        while(ss>>temp){
            strs.push_back(temp);
        }
        if(pattern.size()!=strs.size())return false;
        for(int i=0;i<pattern.size();i++){
            if(map.find(pattern[i])!=map.end()){
                if(map[pattern[i]]!=strs[i])return false;
            }
            else{
                if(set.find(strs[i])!=set.end())return false;
                map[pattern[i]]=strs[i];
                set.insert(strs[i]);
            }
        }
        return true;
    }
};