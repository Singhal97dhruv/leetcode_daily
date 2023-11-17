class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        unordered_map<int,int>map;
        for(int i:arr)map[((i%k)+k)%k]++;
        for(int i:arr){
            int tar=((i%k)+k)%k;
            if(tar==0){
                if(map[tar]&1)return false;
            }
            else if(map[tar]!=map[k-tar])return false;
        }
        return true;
        
    }
};