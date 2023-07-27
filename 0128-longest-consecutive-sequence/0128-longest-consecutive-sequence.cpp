class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_set<int>s(nums.begin(),nums.end());
        // int occ=0;
        // for(int i=0;i<nums.size();i++){
        //     if(s.find(nums[i]-1)!=s.end()){
        //         continue;
        //     }
        //     else{
        //         int count=0;
        //         int curr_ele=nums[i];
        //         while(s.find(curr_ele)!=s.end()){
        //             count++;
        //             curr_ele++;
        //         }
        //         occ=max(occ,count);
        //     }
        // }
        // return occ;
        if(nums.size()==0)return 0;
        unordered_set<int>set(nums.begin(),nums.end());
        int mx=1;
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i]-1)!=set.end())continue;
            else{
                int cnt=0;
                int curr_element=nums[i];
                while(set.find(curr_element)!=set.end()){
                    cnt++;
                    curr_element++;
                }
                mx=max(mx,cnt);
            }
        }
        return mx;
    }
};