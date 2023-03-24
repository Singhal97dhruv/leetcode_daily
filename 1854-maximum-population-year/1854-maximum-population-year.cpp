class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int>map;
        for(vector<int>v:logs){
            map[v[0]]++;
            map[v[1]]--;
        }
        int year,pop=0,tpop=0;
        for(auto i:map){
            pop+=i.second;
            if(pop>tpop){
                year=i.first;
                tpop=pop;
            }
        }
        return year;
    }
};