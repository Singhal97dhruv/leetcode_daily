class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>map;
        // for(int i:nums){
        //     map[i]++;
        // }
        // int high=0;
        // int x;
        // for(auto i:map){
        //     high=max(high,i.second);
        // if(high==i.second)
        //     x=i.first;
        // }
        // return x;
        
        unordered_map<int,int>map;
        int target=nums.size()/2;
        for(int i:nums){
            map[i]++;
            if(map[i]>target)return i;
        }
        
        return -1;
    }
};