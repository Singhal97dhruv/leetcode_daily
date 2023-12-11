class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int tar=n/4;
        unordered_map<int,int>map;
        for(int i:arr){
            map[i]++;
            if(map[i]>tar)return i;
        }
        return 0;
    }
};