class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>map;
        int cnt=0;
        for(char c:s){
            if(map[c]!=0){
                cnt++;
                map.clear();
            }
            map[c]++;
        }
        return cnt+1;
    }
};