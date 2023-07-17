class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>res;
//        map<int,int>m;
      
//         // for(int i=0;i<nums.size();i++){
//         //     m[nums[i]]=i+1;
//         // }
//         // for(int i=0;i<=target/2;i++){
//         //     if(m[i]>0&& m[target-i]>0){
//         //         res.push_back(m[i]-1);
//         //         m[i]=m[i]-1;
//         //         res.push_back(m[target-i]-1);
//         //         return res;
//         //     }
//         // }
        
//         for(int i=0;i<nums.size();i++){
//             int temp=target-nums[i];
//             if(m.find(temp)!=m.end()){
//                 res.push_back(i);
//                 res.push_back(m[temp]-1);
//            return res;
//             }
//             m[nums[i]]=i+1;
            
//         }
        
        
     // unordered_map<int,int>map;
     //    vector<int>ans;
     //    for(int i=0;i<nums.size();i++){
     //        if(map[target-nums[i]]>0){
     //            ans.push_back(i);
     //            ans.push_back(map[target-nums[i]]-1);
     //        }
     //        map[nums[i]]=i+1;
     //    }
        
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map[target-nums[i]]>0){
                return {map[target-nums[i]]-1,i};
            }
            map[nums[i]]=i+1;
        }
        return {};
        
        
        // return ans;
    }
};