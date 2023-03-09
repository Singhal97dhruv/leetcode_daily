class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>map;
        for(int i:arr1)map[i]++;
        int pos=0;
        for(auto i:arr2){
            while(map[i]-->0)arr1[pos++]=i;
        }
        for(auto i:map){
            while(i.second-->0)arr1[pos++]=i.first;
        }
        return arr1;
    }
};