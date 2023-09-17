class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       unordered_map<int,int>map;
        for(int i:deck)map[i]++;
        
        int x=0;
        for(auto i:map)x=__gcd(i.second,x);
        return x>1;
        
    }
};