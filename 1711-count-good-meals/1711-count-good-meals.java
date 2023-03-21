class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
       unordered_map<int,int>map;
        long long res=0;
        for(int i:deliciousness){
           for(int j=1;j<=(1<<22);j*=2){
               if(map.count(j-i))res+=map[j-i];
           }
            map[i]+=1;
        }
        return res%(int)(1e9+7);
    }
};