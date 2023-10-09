class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {

        multiset<int>mset(nums1.begin(),nums1.end());
        for(int i=0;i<nums2.size();i++){
            auto it=mset.upper_bound(nums2[i]);
            if(it!=mset.end()){
                nums1[i]=(*it);
                mset.erase(it);
            }
            else{
                nums1[i]=(*mset.begin());
                mset.erase(mset.begin());
            }
            
        }
        return nums1;
    }
};