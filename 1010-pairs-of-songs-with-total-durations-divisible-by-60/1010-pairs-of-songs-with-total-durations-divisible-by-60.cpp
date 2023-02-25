class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>map;
        int cnt=0;
        for(int i:time){
            i=i%60;
            if(i==0)cnt+=map[i];
            else cnt+=map[60-i];
            map[i]++;
        }
        return cnt;
    }
};