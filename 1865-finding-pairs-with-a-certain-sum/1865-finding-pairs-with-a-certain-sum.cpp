class FindSumPairs {
public:
    
    unordered_map<int,int>map1,map2;
    vector<int>ref;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        ref=nums2;
        for(int i:nums1)map1[i]++;
        for(int i:nums2)map2[i]++;
        
    }
    
    void add(int index, int val) {
        int key=ref[index];
        int afterChange=key+val;
        ref[index]=afterChange;
        map2[key]--;
        if(map2[key]==0)map2.erase(key);
        map2[afterChange]++;
        
    }
    
    int count(int tot) {
        int res=0;
        for(auto [n,cnt]:map1){
            // cout<<n<<" "<<cnt<<"*";
            int key=tot-n;
            if(map2.find(key)!=map2.end()){
                int m=map2[key];
                res+=cnt*m;
            }
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */